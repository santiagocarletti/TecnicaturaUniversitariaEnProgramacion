#include <iostream>
using namespace std;

///2) ENUNCIADO: Leer 10 n£meros y guardarlos en un vector. Calcular el promedio y luego
///mostrar por pantalla los valores que son mayores al promedio.

void cargarVector(int v[10]);
float calcularPromedio(int vector[10]);
void mostrarMayoresAlPromedio(int lista[10], float prom);

int main()
{
    int vNum[10];
    float prom;

    cargarVector(vNum);

    prom = calcularPromedio(vNum);

    mostrarMayoresAlPromedio(vNum, prom);

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

float calcularPromedio(int vector[10]){

    int i;
    float prom, acumulador = 0;

    for(i = 0; i < 10; i++){

        acumulador += vector[i];

    }

    prom = acumulador / 10;

    return prom;

}

void mostrarMayoresAlPromedio(int lista[10], float promedio){

    int k;

    for(k = 0; k < 10; k++){

        if(lista[k]>promedio){

            ///No imprimir desde la funci¢n. La misma debe tener s¢lo una tarea
            cout << lista[k] << " supera el promedio" << endl;

        }
    }

}
