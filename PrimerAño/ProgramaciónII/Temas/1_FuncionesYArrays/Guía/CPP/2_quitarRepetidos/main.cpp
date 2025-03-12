#include <iostream>
using namespace std;

int quitarRepetidos(int vectorSinProcesar[10], int vectorSinRepetidos[10]);

int main()
{
    int vectorSinProcesar[10], vectorSinRepetidos[10]={}, elementos;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR NUMEROS" << endl;
    cout << "2_ QUITAR REPETIDOS" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR NUMEROS: " << endl << endl;

            int nro;

            for(int a=0; a<10; a++){

                cout << "Nro. " << a+1 << ": ";
                cin >> nro;

                vectorSinProcesar[a]=nro;
            }

            break;

        case 2:
            cout << endl << "QUITAR REPETIDOS: " << endl;

            elementos = quitarRepetidos(vectorSinProcesar, vectorSinRepetidos);

            cout << endl << "Elementos sin repetir: " << elementos << endl << endl;

            for(int e=0; e<elementos; e++){

                cout << vectorSinRepetidos[e] << ", ";

            }

            cout << endl;

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}

int quitarRepetidos(int vectorSinProcesar[10], int vectorSinRepetidos[10]){

    bool vRepetidos[10]={false};
    int contadorNoRepetidos=10, indiceSinRepetidos=0;

    for(int b=0; b<10; b++){

        for(int c=0; c<10; c++){

            if(vectorSinProcesar[b]==vectorSinProcesar[c] && b!=c && !vRepetidos[b]){

                vRepetidos[c]=true;
                contadorNoRepetidos--;

            }

        }

    }

    for(int d=0; d<10; d++){

        if(!vRepetidos[d]){

            vectorSinRepetidos[indiceSinRepetidos]=vectorSinProcesar[d];
            indiceSinRepetidos++;

        }

    }

    return contadorNoRepetidos;

}
