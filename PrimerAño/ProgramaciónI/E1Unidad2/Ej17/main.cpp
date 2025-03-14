#include <iostream>

using namespace std;

//17) ENUNCIADO: Hacer un programa para ingresar por teclado cuatro números. Si los valores que
//se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto
//Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
//Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están
//ordenados.
//Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están
//ordenados.
//Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c, d;

    cout << "Ingrese 1er num: ";
    cin >> a;
    cout << "Ingrese 2do num: ";
    cin >> b;
    cout << "Ingrese 3er num: ";
    cin >> c;
    cout << "Ingrese 4to num: ";
    cin >> d;

    if (a < b && b < c && c < d){
        cout << "Conjunto ordenado" << endl;
    }else{
        cout << "Conjunto desordenado" << endl;
    }

    return 0;
}
