#include <iostream>

using namespace std;

///12) ENUNCIADO: Hacer un programa para ingresar tres n£meros diferentes y determinar e
///informar el n£mero del medio.
///Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
///N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
///N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
///N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c, m;

    cout << "1er numero: ";
    cin >> a;
    cout << "2do numero: ";
    cin >> b;
    cout << "3er numero: ";
    cin >> c;

    if ((a > b & a < c) || (a > c & a < b))
    {
        m = a;
    }
    else if ((a < b & b < c) || (b > c & b < a))
    {
        m = b;
    }
    else
    {
        m = c;
    }

    cout << "Numero medio: " << m;

    return 0;
}
