#include <iostream>
using namespace std;

///3) CONSIGNA: Hacer un programa que solicite al usuario 10 n£meros y luego muestre primero
///los n£meros positivos y luego los negativos.
///El programa debe crear dos arrays din micos con la cantidad exacta en cada
///caso: uno para almacenar los n£meros positivos y otro para los n£meros negativos

int main()
{
    int vec[10], tamVecPositivos=0, tamVecNegativos=0, *vecPositivos, *vecNegativos, indicePos=0, indiceNeg=0;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR VECTOR" << endl;
    cout << "2_ MOSTRAR POSITIVOS Y NEGATIVOS" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR VECTOR: " << endl << endl;


            tamVecPositivos=0;
            tamVecNegativos=0;
            indicePos=0;
            indiceNeg=0;

            cout << "Ingrese 10 numeros (positivos y negativos)" << endl << endl;

            for(int a=0; a<10; a++){

                cout << a+1 << "§ Numero: ";
                cin >> vec[a];

            }

            cout << endl << "Fin de la carga" << endl;

            for(int b=0; b<10; b++){

                if(vec[b]>0){

                    tamVecPositivos++;

                }

            }

            tamVecNegativos=10-tamVecPositivos;

            vecPositivos = new int[tamVecPositivos];

            if(vecPositivos==NULL){

                cout << "Problema de asignacion de memoria" << endl;
                return -1;

            }

            vecNegativos = new int[tamVecNegativos];

            if(vecNegativos==NULL){

                cout << "Problema de asignacion de memoria" << endl;
                return -1;

            }

            for(int c=0; c<10; c++){

                if(vec[c]>0){

                    vecPositivos[indicePos]=vec[c];
                    indicePos++;

                }else{

                    vecNegativos[indiceNeg]=vec[c];
                    indiceNeg++;

                }

            }

            break;

        case 2:
            cout << endl << "MOSTRAR POSITIVOS Y NEGATIVOS: " << endl << endl;

            if(tamVecPositivos==0 && tamVecNegativos==0){

                cout << "No se ha cargado el vector" << endl;


            }else{

                cout << ">>POSITIVOS" << endl << endl;

                for(int d=0; d<tamVecPositivos; d++){

                    cout << vecPositivos[d] << " / ";

                }

                cout << endl << endl << ">>NEGATIVOS" << endl << endl;

                for(int e=0; e<tamVecNegativos; e++){

                    cout << vecNegativos[e] << " / ";

                }

                cout << endl;

            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    delete [] vecPositivos;
    delete [] vecNegativos;

    return 0;
}
