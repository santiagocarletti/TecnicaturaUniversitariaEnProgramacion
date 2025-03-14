#include <iostream>

using namespace std;

///14) CONSIGNA: Hacer un programa para ingresar el importe de una compra y el descuento a
///aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
///importe total a cobrar.
///Ejemplo: se ingresa importe 4500, descuento 40; se deber  mostrar
///Importe: 4500, Descuento: 1800, total: 2700

int main()
{
    //cout << "Hello world!" << endl;

    int imp, des, icd;

    cout << "Ingrese el importe: $";
    cin >> imp;

    cout << "Ingrese el descuento: %";
    cin >> des;

    icd = imp * (100 - des) / 100;

    cout << "Importe: $" << imp << ". Descuento: %" << des << ". Importe con dto. $" << icd << endl;

    return 0;
}
