#include <iostream>

using namespace std;

///9) ENUNCIADO: Hacer un programa para ingresar por teclado una cantidad de minutos y
///mostrar por pantalla a cuantas horas y minutos equivalen.
///Ejemplo A: si se ingresan 380 minutos el programa mostrar  por pantalla que
///equivalen a 6 horas y 20 minutos.
///Ejemplo B: si se ingresan 720 minutos el programa mostrar  por pantalla que
///equivalen a 12 horas y 0 minutos.
///Ejemplo C: si se ingresan 50 minutos el programa mostrar  por pantalla que
///equivalen a 0 horas y 50 minutos

int main()
{
    //cout << "Hello world!" << endl;

    int m, h, r;

    cout << "Ingrese los minutos totales: " << endl;

    cin >> m;

    h = m / 60;

    r = m % 60;

    cout << h << " horas. " << r << " Minutos" << endl;


    return 0;
}
