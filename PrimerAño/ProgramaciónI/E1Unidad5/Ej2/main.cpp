#include <iostream>
#include <locale>

using namespace std;

///2) ENUNCIADO: Hacer una funci¢n llamada CalcularMaximo que determine el m ximo entre
///dos n£meros. La funci¢n debe recibir dos n£meros enteros por valor y devolver
///el valor m s grande. Si los n£meros son iguales debe devolver cualquiera de
///los dos. La funci¢n no debe mostrar nada por pantalla.
///Hacer un programa para ingresar dos n£meros y, utilizando CalcularMaximo,
///emita luego el n£mero mayor de ambos.

int CalcularMaximo(int N1, int N2){

    int maximo;

    if(N1>N2){
        maximo = N1;
    }else{
        maximo = N2;
    }

    return maximo;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num1, num2, mayor;

    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;

    mayor = CalcularMaximo(num1, num2);

    cout << "Mayor: " << mayor;

    return 0;
}
