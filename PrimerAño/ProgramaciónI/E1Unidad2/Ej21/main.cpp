#include <iostream>

using namespace std;

///21) ENUNCIADO: Una marroquiner¡a dispone de 45 carteras blancas, 50 carteras negras, 40
///marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
///ventas. Cada venta est  compuesta por:
///- Cantidad de carteras- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marr¢n, 4 - Gris)
///Calcular e informar:
///- Cantidad total de carteras vendidas en total.
///- Cu ntas carteras quedaron de cada tipo.
///- Los colores de carteras que no se vendieron.
///NOTA: Ninguna venta superar  las 10 carteras.

int main()
{
    //cout << "Hello world!" << endl;

    int b = 45, n = 50, m = 40, g = 49, car, carven = 0;
    bool bb = 0, bn = 0, bm = 0, bg = 0;
    char col;

    cout << "Cantidad de carteras: " << endl;
    cin >> car;
    cout << "Color de la cartera (B, N, M o G):" << endl;
    cin >> col;

    carven += car;


    switch (col){
case 'B':
    bb = 1;
    b -= car;
    break;
case 'N':
    bn = 1;
    n -= car;
    break;
case 'M':
    bm = 1;
    m -= car;
    break;
case 'G':
    bg = 1;
    g -= car;
    break;
    }

    cout << "Cantidad de carteras: " << endl;
    cin >> car;
    cout << "Color de la cartera (B, N, M o G):" << endl;
    cin >> col;

    carven += car;

    switch (col){
case 'B':
    bb = 1;
    b -= car;
    break;
case 'N':
    bn = 1;
    n -= car;
    break;
case 'M':
    bm = 1;
    g -= car;
    break;
case 'G':
    bg = 1;
    g -= car;
    break;
    }

    cout << "Cantidad de carteras: " << endl;
    cin >> car;
    cout << "Color de la cartera (B, N, M o G):" << endl;
    cin >> col;


    carven += car;

    switch (col){
case 'B':
    bb = 1;
    b -= car;
    break;
case 'N':
    bn = 1;
    n -= car;
    break;
case 'M':
    bm = 1;
    m -= car;
    break;
case 'G':
    bg = 1;
    g -= car;
    break;
    }

    cout << "Carteras vendidas: " << carven << endl;
    cout << "Stock Blancas: " << b << endl;
    cout << "Stock Negras: " << n << endl;
    cout << "Stock Marrones: " << m << endl;
    cout << "Stock grises: " << g << endl;

    if (!bb){
        cout << "No se vendieron blancas." << endl;
    }
    if (!bn){
        cout << "No se vendieron negras." << endl;
    }
    if (!bm){
        cout << "No se vendieron marrones." << endl;
    }
    if (!bg){
        cout << "No se vendieron grises." << endl;
    }

    return 0;
}
