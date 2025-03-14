#include <iostream>

using namespace std;

///10) ENUNCIADO: Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
///por pantalla a cuantos d¡as y horas equivalen.
///Ejemplo A: si se ingresan 26 horas el programa mostrar  por pantalla que
///equivalen a 1 d¡a y 2 horas.
///Ejemplo B: si se ingresan 72 horas el programa mostrar  por pantalla que
///equivalen a 3 d¡as y 0 horas.
///Ejemplo C: si se ingresan 20 horas el programa mostrar  por pantalla que
///equivalen a 0 d¡as y 20 horas.

int main()
{
    //cout << "Hello world!" << endl;

    int h, d, hr;

    cout << "Ingrese cantidad de horas: " << endl;

    cin >> h;

    d = h / 24;

    hr = h % 24;

    cout << d << " días." << hr << " horas." << endl;

    return 0;
}
