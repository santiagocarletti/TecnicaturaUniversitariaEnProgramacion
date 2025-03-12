#include <iostream>
using namespace std;

///4) CONSIGNA: Una fundaci¢n que se dedica a fomentar la adopci¢n de mascotas dispone de
///los registros de adopciones del a¤o 2024. Por cada adopci¢n que se haya
///efectuado se registr¢:
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

int main()
{
    string vNombreCategoria[10]={"Servicios", "Alimentacion", "Limpieza", "Transporte", "Educcacion", "Salud", "Ocio", "Impuestos", "Vestimenta", "Inversiones"};
    int mTotalGastadoDiasDelMes[10][32];

    ///Inicializacion
    for(int a=0; a<10; a++){

        for(int b=0; b<32; b++){

            mTotalGastadoDiasDelMes[a][b]=0;

        }

    }

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR GASTOS" << endl;
    cout << "2_ VER CATEGORIA CON MAS GASTOS" << endl;
    cout << "3_ TOTAL POR CATEGORIA" << endl;
    cout << "4_ VER CATEGORIAS SIN GASTOS" << endl;
    cout << "5_ GASTOS POR DIA" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR GASTOS: " << endl << endl;

            cout << "Dia = 0 para finalizar la carga" << endl << endl;

            int dia, id, importe;

            cout << "Dia: ";
            cin >> dia;

            while(dia!=0){

                cout << "ID categoria: ";
                cin >> id;
                cout << "Importe (int) $";
                cin >> importe;

                mTotalGastadoDiasDelMes[id-1][0]+=importe;
                mTotalGastadoDiasDelMes[id-1][dia]+=importe;

                cout << endl << "Dia: ";
                cin >> dia;

            }

            break;

        case 2:
            cout << endl << "VER CATEGORIA CON MAS GASTOS: " << endl;

            int maxi, indice;

            for(int c=0; c<10; c++){

                if(c==0){
                    maxi=mTotalGastadoDiasDelMes[c][0];
                    indice=c;
                }else if(mTotalGastadoDiasDelMes[c][0]>maxi){
                    maxi=mTotalGastadoDiasDelMes[c][0];
                    indice=c;
                }

            }

            cout << endl << "Categoria: " << vNombreCategoria[indice] << " con una inversi¢n total de $" << maxi << endl;

            break;

        case 3:
            cout << endl << "TOTAL POR CATEGORIA: " << endl << endl;

            for(int d=0; d<10; d++){
                cout << vNombreCategoria[d] << " $" << mTotalGastadoDiasDelMes[d][0] << endl;
            }

            break;

        case 4:{
            cout << endl << "VER CATEGORIAS SIN GASTOS: " << endl;

            int contadorCatSinGastos=0;

            for(int e=0; e<10; e++){

                if(mTotalGastadoDiasDelMes[e][0]==0){
                    contadorCatSinGastos++;
                }

            }

            cout << endl << contadorCatSinGastos << " categorias: (";

            for(int e=0; e<10; e++){

                if(mTotalGastadoDiasDelMes[e][0]==0){
                    cout << vNombreCategoria[e] << ", ";
                }

            }

            cout << ")" << endl;

            break;}

        case 5:
            cout << endl << "GASTOS POR DIA: " << endl;

            for(int f=0; f<10; f++){

                cout  << endl << "Categoria: " << vNombreCategoria[f] << endl;

                for(int g=1; g<32; g++){

                    if(mTotalGastadoDiasDelMes[f][g]!=0){

                        cout << "Dia " << g << ": $" << mTotalGastadoDiasDelMes[f][g] << endl;

                    }

                }

            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}
