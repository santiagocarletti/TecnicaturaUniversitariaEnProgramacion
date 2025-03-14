#include <iostream>
using namespace std;

///17) ENUNCIADO: Dada una lista de 10 n£meros, cargarlos en un vector. Luego detectar si en el
///vector hay elementos repetidos y generar otro vector con los elementos
///repetidos reemplazados por ceros.
///Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
///Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]

void cargarVector(int v[10]);
void manejarRepetidos(int vt[10], int vRepe[10]);

int main()
{
    int vNum[10], vRep[10]={0}, m;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    manejarRepetidos(vNum, vRep);

    for(m=0; m<10; m++){

        cout << vRep[m] << endl;

    }

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void manejarRepetidos(int vt[10], int vRepe[10]){

    int x, y;

    for(x=0; x<10; x++){

        for(y=0; y<10; y++){

                if(x!=y){

                    if(vt[x]==vt[y]){

                           vRepe[x]=vt[x];

                    }

                }


        }

    }

}
