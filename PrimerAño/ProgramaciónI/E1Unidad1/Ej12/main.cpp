#include <iostream>

using namespace std;

///12) ENUNCIADO: Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
///Hacer un programa para ingresar la cantidad de huevos que compra un cliente y
///mostrar por pantalla el importe total a pagar.
///Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se
///calcula como suelto.
///Ejemplo A. Si la cantidad ingresada son 15 huevos, el programa calcular  1 caja
///y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
///Ejemplo B. Si la cantidad ingresada son 28 huevos el programa calcular  2
///cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
///Ejemplo C. Si la cantidad ingresada son 8 huevos, el programa calcular : 0 cajas
///y 8 sueltos, es decir $120 x 8 = $960.
///Ejemplo D. Si la cantidad ingresada son 200 huevos, el programa calcular : 16
///cajas y 8 sueltos, es decir $1000 x 20 + $120 x 8 = $20960

int main()
{
    //cout << "Hello world!" << endl;

    int d, s, h, p;

    cout << "Cantidad de huevos" << endl;

    cin >> h;

    d = h / 12;

    s = h % 12;

    p = (d * 1000) + (s * 120);

    cout << "Precio: $" << p << endl;

    return 0;
}
