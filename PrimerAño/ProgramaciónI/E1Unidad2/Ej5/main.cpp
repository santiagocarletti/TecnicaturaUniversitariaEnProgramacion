#include <iostream>

using namespace std;

///5) ENUNCIADO: Un negocio de perfumer¡a efect£a descuentos seg£n el importe de la venta.
///Si el importe es menor a $100 aplicar un descuento del 5%
///Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
///Si el importe es mayor a $500 aplicar un descuento del 15%
///Hacer un programa donde se ingresa el importe original sin descuento y se
///informe por pantalla el importe con el descuento ya aplicado.
///Importante: Verifique que el programa emita UN SOLO CARTEL.

int main()
{
    //cout << "Hello world!" << endl;

    float imp, impf;

    cout << "Ingrese el importe: ";
    cin >> imp;

    if (imp > 500) {
        impf = imp * 0.85;
    } else {
        if (imp > 100){
                impf = imp * 0.90;
        } else {
                impf = imp * 0.95;
        }
    }

    cout << "El importe a pagar es: " << impf;

    return 0;
}
