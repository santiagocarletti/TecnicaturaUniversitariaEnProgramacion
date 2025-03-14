#include <iostream>

using namespace std;

///19) ENUNCIADO: Este ejercicio lo resolver n en la parte de c¢digo de la materia.
///El costo de un desarrollo de un proyecto de software se calcula en base al
///lenguaje que se necesita:
///
///Nombre | Tipo | Valor hora
///C/C++ | 'C' | $7500
///C# | '#' | $6100
///Python | 'P' | $5400
///Go | 'G' | $5000
///
///Adem s, si el proyecto es marcado como Urgente, se le aumenta un 120 % m s
///al costo del proyecto.
///Le solicitan un programa que permita calcular el costo total de un proyecto
///basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
///no (bool)

int main()
{
    //cout << "Hello world!" << endl;

    int h, t;
    char l;
    bool urg;

    cout << "Ingrese el lenguaje (C, #, P, G): " << endl;
    cin >> l;

    cout << "Ingrese horas: " << endl;
    cin >> h;

    cout << "Es urgente?: (0/1)" << endl;
    cin >> urg;

    switch (l) {
case 'C':
    t = h * 7500;
    break;
case '#':
    t = h * 6100;
    break;
case 'P':
    t = h * 5400;
    break;
case 'G':
    t = h * 5000;
    break;
default:
    cout << "Lenguaje incorrecto" << endl;
    break;
    }

    if(urg) {
        t = t * 120 / 100;
    }

    cout << "El importe total es: " << t << endl;

    return 0;
}
