#include <iostream>
using namespace std;

///3) ENUNCIADO: Leer 10 n£meros y guardarlos en un vector. Determinar e informar cu l es el
///valor m ximo y su posici¢n dentro del vector.

void cargarVector(int v[10]);
void calcularMaximo(int vNum[10]);

int main()
{
    int vNum[10];

    cout << "Cargar vector: " << endl;
    cargarVector(vNum);

    calcularMaximo(vNum);

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void calcularMaximo(int ve[10]){

    int mayor = ve[0], i, posicion;

    for(i = 0; i <10; i++){

        if(ve[i]>mayor){

            mayor = ve[i];
            posicion = i;

        }

    }

    cout << "Mayor: " << mayor << ". Posici¢n: " << posicion + 1 << endl;

}
