#include <iostream>
using namespace std;

///13) ENUNCIADO: Dada una lista de 10 n£meros, cargarlos en un vector. Luego contar y listar la
///cantidad de n£meros pares que aparecen en el vector.

void cargarVector(int v[10]);
void contarListarPares(int vect[10]);

int main()
{
    int vNum[10], n, incidencias;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    contarListarPares(vNum);

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void contarListarPares(int vect[10]){

    int x, y, pares=0, vPares[10]={0};

    for(x=0; x<10; x++){

        if(vect[x]%2==0){

            pares++;
            vPares[x]=vect[x];

        }

    }

    cout << "Cantidad de pares: " << pares << ": " << endl;

    for(y=0; y<10; y++){

        if(vPares[y]!=0){

            cout << vPares[y] << endl;

        }

    }

}
