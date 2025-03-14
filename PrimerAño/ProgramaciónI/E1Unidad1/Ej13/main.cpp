#include <iostream>

using namespace std;

///13) ENUNCIADO: Hacer un programa para un cajero autom tico para ingresar un importe a retirar
///y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
///entregar.
///Ejemplo A: Si el importe a retirar es $2500 se mostrar  por pantalla que se
///deber n entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
///billetes de $100.
///Ejemplo B: Si el importe a retirar es $3400 se mostrar  por pantalla que se
///deber n entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
///billetes de $100.
///Ejemplo C: Si el importe a retirar es $300 se mostrar  por pantalla que se
///deber n entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
///billetes de $500.
///Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
///los casos m£ltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.

int main()
{
    //cout << "Hello world!" << endl;

    int ir, mil, qui, dos, cie;

    cout << "Importe a retirar: " << endl;
    cin >> ir;

    mil = ir / 1000;
    qui = (ir % 1000) / 500;
    dos = (ir % 500) / 200;
    cie = ir % ((mil * 1000) + (qui * 500) + (dos * 200)) /100;

    cout << mil << " de $1000." << qui << " de $500." << dos << " de $200." << cie << " de $100." << endl;

    return 0;
}
