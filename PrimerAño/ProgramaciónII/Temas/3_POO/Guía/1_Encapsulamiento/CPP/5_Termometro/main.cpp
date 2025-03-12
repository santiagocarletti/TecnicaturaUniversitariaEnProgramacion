#include <iostream>
using namespace std;

#include "Termometro.h"

///5) CONSIGNA: Crea una clase llamada Termometro que represente un term¢metro
///digital. La clase debe contener los siguientes atributos:
///- temperatura (float): Almacena la temperatura actual medida por
///el term¢metro.
///- unidad (char): Almacena la unidad de medida de la temperatura
///('C' para Celsius, 'F' para Fahrenheit).
///Implementa los siguientes m‚todos:
///- Termometro(float tempInicial, char unidadInicial):
///Constructor que inicializa la temperatura y la unidad de medida.
///- get y set de temperatura.
///- cambiarUnidad(char nuevaUnidad): Cambia la unidad de
///medida entre Celsius y Fahrenheit. Si la nueva unidad es diferente
///de la actual, convierte la temperatura a la nueva unidad.
///- F¢rmula de conversi¢n de Celsius a Fahrenheit: (C * 9/5)
///+ 32
///- F¢rmula de conversi¢n de Fahrenheit a Celsius: (F - 32) * 5/9
///- getUnidad(): Devuelve la unidad actual de medida

int main()
{
    float temp;
    char unid, nvaUnidad;

    cout << "Temperatura: ";
    cin >> temp;

    cout << endl << "Unidad de medida: (c/f): ";
    cin >> unid;

    Termometro objTermometro(temp, unid);

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CONOCER TEMPERATURA" << endl;
    cout << "2_ CAMBIAR UNIDAD" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){

        case 0:
            break;

        case 1:
            cout << endl << "1_ CONOCER TEMPERATURA" << endl << endl;

            cout << objTermometro.getUnidad() << " " << objTermometro.getTemperatura() << endl;

            break;

        case 2:
            cout << endl << "2_ CAMBIAR UNIDAD" << endl << endl;

            cout << "Nueva unidad: ";
            cin >> nvaUnidad;

            objTermometro.cambiarUnidad(nvaUnidad);

            break;

        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }

    }

    return 0;
}
