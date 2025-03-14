#include <iostream>
using namespace std;

///12) ENUNCIADO: Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar un
///n£mero e informar la cantidad de veces que ese n£mero aparece en el vector.

void cargarVector(int v[10]);
int buscarCoincidencias(int num, int vect[10]);

int main()
{
    int vNum[10], n, incidencias;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    cout << "N£mero a buscar: " << endl;
    cin >> n;
    incidencias = buscarCoincidencias(n, vNum);

    cout << "Incidencias: " << incidencias << endl;

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

int buscarCoincidencias(int n, int vect[10]){

    int x, veces=0;

    for(x=0; x<10; x++){

        if(n==vect[x]){

            veces++;

        }

    }

    return veces;

}
