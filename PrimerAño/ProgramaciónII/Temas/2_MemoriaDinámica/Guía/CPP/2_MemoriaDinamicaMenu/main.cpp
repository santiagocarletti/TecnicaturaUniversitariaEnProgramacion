#include <iostream>
using namespace std;

///2) CONSIGNA: Crear un programa que contenga un men£ con las siguientes opciones:
///1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos
///que va a cargar, posteriormente se solicitara cuales son dichos n£meros para
///almacenarlos en un vector utilizando asignaci¢n din mica de memoria.
///2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por
///pantalla.
///3- Salir: Sale del programa (no olvidar liberar la memoria)
///Pista: Recordar que se puede inicializar un puntero con el valor nullptr

int main()
{
    int tamanio, *vec=nullptr;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR VECTOR" << endl;
    cout << "2_ MOSTRAR VECTOR" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR VECTOR: " << endl << endl;

            cout << "Ingrese el tamanio del vector: ";
            cin >> tamanio;

            vec = new int[tamanio];

            if(vec==NULL){
                cout << "Problema de asignacion de memoria" << endl;
                return -1;
            }

            cout << endl;

            for(int a=0; a<tamanio; a++){

                cout << a+1 << "§ Numero: ";
                cin >> vec[a];

            }

            cout << endl << "Fin de la carga" << endl;

            break;

        case 2:
            cout << endl << "MOSTRAR VECTOR: " << endl << endl;

            if(vec==nullptr){

                cout << "El vector no se encuentra cargado" << endl;

            }else{

                for(int b=0; b<tamanio; b++){

                    cout << b+1 << "§ Numero: " << vec[b] << endl;

                }

            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    delete [] vec;

    return 0;
}
