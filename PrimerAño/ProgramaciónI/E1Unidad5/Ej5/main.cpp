#include <iostream>
#include <locale>

using namespace std;

///5) ENUNCIADO: Hacer una funci¢n llamada Redondear que reciba como par metro un n£mero
///float y devuelva un n£mero entero con el redondeo del mismo.
///Por ejemplo:
///Si recibe 7.78, debe devolver 8.
///Si recibe 7.48, debe devolver 7.
///Si recibe 7.5, debe devolver 8.
///Hacer un programa para ingresar un n£mero y, utilizando Redondear, emita
///luego un cartel indicando el n£mero redondeado.

int Redondear(float num){
    int nRed;

    nRed=num;
    return nRed;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    float numeroD;
    int numeroE;

    cout << "Número decimal: ";
    cin >> numeroD;

    numeroE = Redondear(numeroD);

    cout << "Número redondeado: " << numeroE;

    return 0;
}
