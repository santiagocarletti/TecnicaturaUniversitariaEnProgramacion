#include <iostream>
using namespace std;

///4) CONSIGNA: Una fundaci¢n que se dedica a fomentar la adopci¢n de mascotas dispone de
///los registros de adopciones del a¤o 2024. Por cada adopci¢n que se haya efectuado se registr¢:
///- Mes de la adopci¢n (entero entre 1 y 12)
///- Tipo de animal adoptado (entero entre 10 y 15)
///- Edad del adoptante responsable
///- Tipo de vivienda del adoptante responsable (entero entre 1 y 5)
///La informaci¢n no se encuentra agrupada ni ordenada bajo ning£n criterio. Para
///indicar el fin de la carga de datos se ingresa un mes de adopci¢n igual a cero.
///Se pide calcular e informar
///A) El tipo de animal m s adoptado en general.
///B) El promedio de edad de los adoptantes de cada tipo de animal.
///C) Por cada tipo de animal y tipo de vivienda la cantidad total de
///adopciones registradas.
///Aclaraci¢n:
///Los tipos de animales son:
///10 - Perro, 11 - Gato, 12 - Conejo, 13 - Hur¢n, 14 - Caballo, 15 - Oveja
///Los tipos de vivienda son:
///1 - Casa, 2 - Departamento, 3 - Casa Quinta, 4 - Finca, 5 - Duplex

int opcionTipoAnimal(string vTipoAnimal[6]);
int opcionTipoVivienda(string vTipoVivienda[5]);

int main()
{
    int mTipoAnimalEdadAdptanteAdopcionesPorAnimal[6][2];

    ///Inicializacion
    for(int a=0; a<6; a++){

        for(int b=0; b<2; b++){

            mTipoAnimalEdadAdptanteAdopcionesPorAnimal[a][b]=0;

        }

    }

    int vAdopcionesPorTipoVivienda[5]={};

    string vTipoAnimal[6]={"Perro", "Gato", "Conejo", "Huron", "Caballo", "Oveja"};

    string vTipoVivienda[5]={"Casa", "Departamento", "Casa quinta", "Finca", "Duplex"};

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR" << endl;
    cout << "2_ ANIMAL MAS ADOPTADO" << endl;
    cout << "3_ PROMEDIO EDAD ADOPTANTES" << endl;
    cout << "4_ ADOPCIONES POR ANIMAL" << endl;
    cout << "5_ ADOPCIONES POR TIPO DE VIVIENDA" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:{
            cout << endl << "CARGAR: " << endl;

            int mes, tipoAnimal, tipoVivienda, edad;

            cout << endl << "Mes: ";
            cin >> mes;

            while(mes!=0){

                tipoAnimal=opcionTipoAnimal(vTipoAnimal);

                cout << endl << "Edad del adoptante: ";
                cin >> edad;

                tipoVivienda=opcionTipoVivienda(vTipoVivienda);

                mTipoAnimalEdadAdptanteAdopcionesPorAnimal[tipoAnimal-1][1]++;
                mTipoAnimalEdadAdptanteAdopcionesPorAnimal[tipoAnimal-1][0]+=edad;
                vAdopcionesPorTipoVivienda[tipoVivienda-1]++;

                cout << endl << "Mes: ";
                cin >> mes;

            }

            break;
        }

        case 2:{
            cout << endl << "ANIMAL MAS ADOPTADO: " << endl;

            int maxi, indice;

            for(int d=0; d<6; d++){

                if(d==0){
                    maxi=mTipoAnimalEdadAdptanteAdopcionesPorAnimal[d][1];
                    indice=d;
                }else if(mTipoAnimalEdadAdptanteAdopcionesPorAnimal[d][1]>maxi){
                    maxi=mTipoAnimalEdadAdptanteAdopcionesPorAnimal[d][1];
                    indice=d;
                }

            }

            cout << endl << vTipoAnimal[indice] << ", con " << maxi << " adopcion(es)" << endl;

            break;}

        case 3:{
            cout << endl << "PROMEDIO EDAD ADOPTANTES: " << endl << endl;

            for(int e=0; e<6; e++){

                    if(mTipoAnimalEdadAdptanteAdopcionesPorAnimal[e][1]==0){

                        cout << vTipoAnimal[e] << ": Sin adopciones" << endl;

                    }else{

                        cout << vTipoAnimal[e] << ": " << float(mTipoAnimalEdadAdptanteAdopcionesPorAnimal[e][0]) /
                        mTipoAnimalEdadAdptanteAdopcionesPorAnimal[e][1] << " anios." << endl;

                    }

            }

            break;}

        case 4:
            cout << endl << "ADOPCIONES POR ANIMAL: " << endl << endl;

            for(int f=0; f<6; f++){

                cout << vTipoAnimal[f] << ": " << mTipoAnimalEdadAdptanteAdopcionesPorAnimal[f][1] << " adopcion(es)" << endl;

            }

            break;

        case 5:{

            cout << endl << "ADOPCIONES POR TIPO DE VIVIENDA" << endl << endl;

            for(int g=0; g<5; g++){

                cout << vTipoVivienda[g] << ": " << vAdopcionesPorTipoVivienda[g] << " adopcion(es)" << endl;

            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;}
        }
    }

    return 0;
}

int opcionTipoAnimal(string vTipoAnimal[6]){

    int tipoAnimal;

    cout << endl;

    for(int c=0; c<6; c++){

        cout << c+1 << "_ " << vTipoAnimal[c] << endl;

    }

    cout << endl;

    cout << "Seleccione el tipo de animal: ";
    cin >> tipoAnimal;

    return tipoAnimal;
}

int opcionTipoVivienda(string vTipoVivienda[5]){

    int tipoVivienda;

    cout << endl;

    for(int c=0; c<5; c++){

        cout << c+1 << "_ " << vTipoVivienda[c] << endl;

    }

    cout << endl;

    cout << "Seleccione el tipo de vivienda: ";
    cin >> tipoVivienda;

    return tipoVivienda;
}
