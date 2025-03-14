#include <iostream>

using namespace std;

///11) ENUNCIADO: Hacer un programa para ingresar por teclado una cantidad de minutos y
///mostrar por pantalla a cu ntos d¡as, horas y minutos equivalen.
///Ejemplo A: si se ingresan 1520 minutos el programa mostrar  por pantalla que
///equivalen a 1 d¡a, 1 hora y 20 minutos.
///Ejemplo B: si se ingresan 480 minutos el programa mostrar  por pantalla que
///equivalen a 0 d¡a, 8 horas y 0 minutos.

int main()
{

    int m, d, h, m2;

    cout << "Minutos" << endl;

    cin >> m;

    d = m / 1440;

    h = (m/60) % 24;

    m2 = m % 60;
    //("MinutosDos")

    cout << d << " dia(s). " << h << " hora(s). " << m2 << " minuto(s)" << endl;

    return 0;
}
