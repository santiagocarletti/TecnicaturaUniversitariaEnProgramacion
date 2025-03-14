#include <iostream>

using namespace std;

///16) CONSIGNA: El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
///frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
///Micilina y 7 mg de Ácido Sinítico.
///Nos solicitan un programa donde se ingrese la cantidad de frascos de un
///pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
///Sinítico que son necesarios para elaborarlos

int main()
{
    //cout << "Hello world!" << endl;

    int pil, be, mi, ac, fr;

    pil = 75;
    be = 45;
    mi = 2000;
    ac = 7;

    cout << "Frascos: ";
    cin >> fr;

    be = fr * pil * be;
    mi = fr * pil * mi;
    ac = fr * pil * ac;

    cout << "Betamol: " << be << " mg. Micilina: " << mi << "mg. Acido Sinitico: " << ac << " mg." << endl;

    return 0;
}
