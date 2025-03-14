#include <iostream>
using namespace std;

///14) ENUNCIADO: Dada una lista de 10 n£meros, cargarlos en un vector. Luego contar y listar la
///cantidad de n£meros primos que aparecen en el vector.

void cargarVector(int v[10]);
void contarListarPrimos(int vect[10]);

int main()
{
    int vNum[10], n, incidencias;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    contarListarPrimos(vNum);

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void contarListarPrimos(int vect[10]){

    int x, y, z, primos=0, vPrimos[10]={0};

    for(x=0; x<10; x++){

            int rCero=0;

            for(z=1; z<=vect[x]; z++){

                if(vect[x]%z==0){

                    rCero++;

                }

            }

            if(rCero==2){

                vPrimos[x]=vect[x];
                primos++;

            }

        }

        cout << "Cantidad de primos: " << primos << ": " << endl;

        for(y=0; y<10; y++){

            if(vPrimos[y]!=0){

                cout << vPrimos[y] << endl;

            }

        }

    }
