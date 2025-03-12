#include <iostream>
using namespace std;

///7) CONSIGNA: Escribe un programa que simule la gesti¢n de un club de lectura.
///El programa debe solicitar al usuario la cantidad de libros que desea cargar y
///posteriormente pedir los nombres de dichos libros. Una vez cargados los libros
///se debe mostrar un men£ con las siguientes opciones:
///1- Listado: Debe listar los libros en el orden en que fueron cargados.
///2- Tiempo de lectura: Se solicita el nombre del libro. Si no existe debe mostrar
///un mensaje aclaratorio. Si el libro existe, ingresar la cantidad de minutos que le
///llev¢ su lectura.
///3- Ranking: Mostrar los libros ordenados por tiempo de lectura de Mayor a Menor.
///4- Salir: el programa debe salir del programa

int main()
{
    int cantLibros;

    cout << "Cuantos libros se cargaran?: ";
    cin >> cantLibros;

    cout << endl;

    string *vecNombreLibros;

    vecNombreLibros = new string[cantLibros];

    if(vecNombreLibros==nullptr){ cout << "Problema memoria.." << endl; return -1; }

    int *vecTiempoLectura;

    vecTiempoLectura = new int[cantLibros];

    if(vecTiempoLectura==nullptr){ cout << "Problema memoria.." << endl; return -1; }

    for(int g=0; g<cantLibros; g++){vecTiempoLectura[g]=0; }

    for(int a=0; a<cantLibros; a++){

        string nombre;

        cout << "Nombre del " << a+1 << "§ libro: ";
        cin >> nombre;

        vecNombreLibros[a]=nombre;

    }

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ LISTADO" << endl;
    cout << "2_ TIEMPO DE LECTURA" << endl;
    cout << "3_ RANKING / TIEMPO DECRECIENTE" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "LISTADO: " << endl << endl;

            for(int b=0; b<cantLibros; b++){
                cout << vecNombreLibros[b] << endl;
            }

            break;

        case 2:{
            cout << endl << "TIEMPO DE LECTURA: " << endl << endl;

            string nombreBuscar;
            bool disponible=false;
            int tiempoLectura;

            cout << "Ingrese el nombre del libro: ";
            cin >> nombreBuscar;

            for(int c=0; c<cantLibros; c++){

                if(nombreBuscar==vecNombreLibros[c]){

                    cout << endl << "Minutos de lectura: ";
                    cin >> tiempoLectura;

                    vecTiempoLectura[c]=tiempoLectura;
                    disponible=true;

                }

            }

            if(!disponible){cout << endl << "Carga no disponible.." << endl; }else{ disponible=false; }

            break;
        }

        case 3:{
            cout << endl << "RANKING / TIEMPO DECRECIENTE: " << endl << endl;

            int *vecIndicesRanking, indiceAux, tiempoAux;

            vecIndicesRanking = new int[cantLibros];

            if(vecIndicesRanking==nullptr){cout << "Problema memoria.." << endl; return -1; }

            int *vecCopiaTiempo;

            vecCopiaTiempo = new int[cantLibros];

            if(vecCopiaTiempo==nullptr){cout << "Problema memoria.." << endl; return -1; }

            for(int d=0; d<cantLibros; d++){vecIndicesRanking[d]=d; vecCopiaTiempo[d]=vecTiempoLectura[d]; }

            for(int e=0; e<cantLibros; e++){

                for(int f=0; f<cantLibros-1; f++){

                    if(vecCopiaTiempo[f]<vecCopiaTiempo[f+1]){

                        indiceAux=vecIndicesRanking[f+1];
                        tiempoAux=vecCopiaTiempo[f+1];
                        vecIndicesRanking[f+1]=vecIndicesRanking[f];
                        vecCopiaTiempo[f+1]=vecCopiaTiempo[f];
                        vecIndicesRanking[f]=indiceAux;
                        vecCopiaTiempo[f]=tiempoAux;

                    }

                }

            }

            for(int g=0; g<cantLibros; g++){

                int ind;

                ind = vecIndicesRanking[g];

                cout << vecNombreLibros[ind] << ": " << vecCopiaTiempo[g] << " minutos." << endl;

            }

            delete [] vecIndicesRanking;
            delete [] vecCopiaTiempo;

            break;
        }

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    delete [] vecNombreLibros;
    delete [] vecTiempoLectura;

    return 0;
}
