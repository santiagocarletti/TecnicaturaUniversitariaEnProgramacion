#include <iostream>

using namespace std;

///5) ENUNCIADO: Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
///programa para ingresar por teclado la cantidad de alfajores vendidos de cada
///una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
///Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
///programa calcular  e informar  A: 50%, B: 12,50% y C: 37,50%

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c, tt, pa, pb, pc;

    cout << "Cantidad A: ";
    cin >> a;
    cout << "Cantidad B: ";
    cin >> b;
    cout << "Cantidad C: ";
    cin >> c;

    tt = a + b + c;

    pa = a * 100 / tt;
    pb = b * 100 / tt;
    pc = c * 100 / tt;

    cout << "Porcentaje marca A (%): " << pa << ". Porcentaje marca B (%): " << pb << ". Porcentaje marca C (%): " << pc << endl;

    return 0;
}
