#include <iostream>
using namespace std;

///16) ENUNCIADO: Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
///vector hay algún elemento repetido y, en caso de haberlo, indicarlo con un cartel “Hay Repetidos”.

void cargarVector(int v[10]);
void buscarRepetidos(int vt[10]);

int main()
{
    int vNum[10];

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    buscarRepetidos(vNum);

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void buscarRepetidos(int vt[10]){

    int x, y, rep=0;

    for(x=0; x<10; x++){

        for(y=0; y<10; y++){

                if(x!=y){

                    if(vt[x]==vt[y]){

                        rep++;

                    }

                }


        }

    }

    if(rep!=0){

        cout << "Hay Repetidos" << endl;

    }

}
