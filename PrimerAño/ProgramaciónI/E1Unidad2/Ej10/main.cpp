#include <iostream>

using namespace std;

///10) ENUNCIADO: Hacer un programa para ingresar cinco n£meros y listar el m ximo y el m¡nimo de ellos.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c, d, e, ne = 0, ce = 0, po = 0;

    cout << "Primero: ";
    cin >> a;
    cout << "Segundo: ";
    cin >> b;
    cout << "Tercero: ";
    cin >> c;
    cout << "Cuarto: ";
    cin >> d;
    cout << "Quinto: ";
    cin >> e;

    if (a < 0) {
        ne ++;
    } else if (a > 0) {
            po ++;
    } else ce ++;

    if (b < 0) {
        ne ++;
    } else if (b > 0) {
            po ++;
    } else ce ++;

    if (c < 0) {
        ne ++;
    } else if (c > 0) {
            po ++;
    } else ce ++;

    if (d < 0) {
        ne ++;
    } else if (d > 0) {
            po ++;
    } else ce ++;

    if (d < 0) {
        ne ++;
    } else if (e > 0) {
            po ++;
    } else ce ++;

    cout << "Positivos: " << po << ". Negativos: " << ne << ". Cero: " << ce;

    return 0;
}
