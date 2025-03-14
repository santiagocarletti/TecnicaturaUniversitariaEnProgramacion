#include <iostream>
#include <locale>

using namespace std;

///1) ENUNCIADO: Hacer una funci¢n llamada EsPar que determine si un n£mero es par o no. La
///funci¢n debe recibir un n£mero entero por valor y devolver true si es par o false
///si no lo es. La funci¢n no debe mostrar nada por pantalla.
///Hacer un programa para ingresar un n£mero y, utilizando EsPar, emita luego un
///cartel indicando si el n£mero ingresado es par o no es par.

bool EsPar(int nro){
    bool par;

    if(nro%2==0){
        par = 1;
    }else{
        par = 0;
    }

    return par;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num;
    bool parSi;

    cout << "Ingrese número: ";
    cin >> num;

    parSi = EsPar(num);

    if(parSi){
        cout << "El número es par";
    }else{
        cout << "El número es impar";
    }

    return 0;
}

