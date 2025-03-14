#include <iostream>
using namespace std;

///11) ENUNCIADO: Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar un
///n£mero e informar el primer ¡ndice donde ese n£mero aparece en el vector. En
///caso de no aparecer se mostrar  el valor ¡ndice igual a -1.

void cargarVector(int v[10]);
int buscarPosicion(int num, int vect[10]);

int main()
{
    int vNum[10], n, indice;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    cout << "N£mero a buscar: " << endl;
    cin >> n;
    indice = buscarPosicion(n, vNum);

    cout << "Indice: " << indice << endl;

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

int buscarPosicion(int n, int vect[10]){

    int x, coincidencia=-1;
    bool listo=0;

    for(x=0; x<10; x++){

        if(n==vect[x] && !listo){

            coincidencia = x;
            listo=1;

        }

    }

    return coincidencia;

}
