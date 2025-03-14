#include <iostream>

using namespace std;

///3) CONSIGNA: Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 m s
///$700 de premio por cada auto vendido. Hacer un programa que permita
///ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
///informar por pantalla el sueldo total a pagar.
///Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800

int main()
{
    //cout << "Hello world!" << endl;

    int av, s;

    cout << "Autos vendidos: ";

    cin >> av;

    s = 5000 + (av * 700);

    cout << "Sueldo: " << s;

    return 0;
}
