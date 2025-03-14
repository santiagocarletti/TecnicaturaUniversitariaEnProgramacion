#include <iostream>

using namespace std;

///7) CONSIGNA: Hacer un programa para ingresar por teclado el importe de una venta y el
///porcentaje de descuento aplicada a la misma y luego informar por pantalla el
///importe a pagar.
///Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
///el total a pagar ser  de $1020.
///Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
///total a pagar ser  de $800.

int main()
{
    //cout << "Hello world!" << endl;

    int i, p, ip;

    cout << "Ingrese el importe: " << endl;

    cin >> i;

    cout << "Ingrese el Porcentaje de descuento: " << endl;

    cin >> p;

    ip = i * (100-p) / 100;

    cout << "El importe final es: " << ip << endl;

    return 0;
}
