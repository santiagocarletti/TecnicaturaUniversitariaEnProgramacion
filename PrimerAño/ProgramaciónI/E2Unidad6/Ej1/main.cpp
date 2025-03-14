#include <iostream>
using namespace std;

///1) ENUNCIADO: Hacer un programa para ingresar 10 n£meros y guardarlos en un vector.
///Determinar e informar cu l es la suma de los valores del vector

void cargarVector(int v[10]);
int sumarVector(int vector[10]);

int main()
{
    int vNum[10], total;

    cargarVector(vNum);

    total = sumarVector(vNum);

    cout << "La suma de los n£meros es: " << total;

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        ///No imprimir desde la funci¢n. La misma debe tener s¢lo una tarea
        cout << "Ingrese " << i + 1 << "§ n£mero: ";
        cin >> v[i];

    }

}

int sumarVector(int vector[10]){

    int j, acu = 0;

    for(j = 0; j<10; j++){

        acu += vector[j];

    }

    return acu;

}

