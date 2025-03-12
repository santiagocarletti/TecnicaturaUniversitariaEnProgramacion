#include <iostream>
using namespace std;

#include "Punto.h"

///6) CONSIGNA: Crea una clase llamada Punto que represente un punto en un plano
///cartesiano. La clase debe contener los siguientes atributos:
///- x (float): Almacena la coordenada en el eje X.
///- y (float): Almacena la coordenada en el eje Y.
///Implementa los siguientes m‚todos p£blicos:
///- Punto(float xInicial, float yInicial): Constructor que
///inicializa las coordenadas x y y del punto.
///- Getters y Setters para cada atributo.
///- calcularDistancia(Punto otroPunto): Devuelve la distancia
///entre el punto actual y otro punto dado. La f¢rmula para calcular la
///distancia entre dos puntos (x1, y1) y (x2, y2) es: sqrt((x2 - x1)^2 + (y2 - y1)^2).
///- mover(float deltaX, float deltaY): Mueve el punto
///sumando deltaX a x y deltaY a y.

int main()
{
    float x, y, x2, y2, x3, y3;

    cout << "Inicializar punto" << endl << endl << "Valor X: ";
    cin >> x;

    cout << endl << "Valor Y: ";
    cin >> y;

    Punto objPunto(x, y);

    Punto objPunto2;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CONOCER COORDENADAS" << endl;
    cout << "2_ CALCULAR DISTANCIA" << endl;
    cout << "3_ MOVER 1§ PUNTO" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){

        case 0:
            break;

        case 1:
            cout << endl << "1_ CONOCER COORDENADAS" << endl << endl;

            cout << "Valor X: " << objPunto.getX() << endl << "Valor Y: " << objPunto.getY() << endl;

            break;

        case 2:
            cout << endl << "2_ CALCULAR DISTANCIA" << endl << endl;

            cout << "Segundo Punto" << endl << endl << "Valor X: ";
            cin >> x2;
            cout << "Valor Y: ";
            cin >> y2;

            objPunto2.setX(x2);
            objPunto2.setY(y2);

            cout << endl << objPunto.calcularDistancia(objPunto2) << endl;

            break;

        case 3:

            cout << endl << "3_ MOVER 1§ PUNTO" << endl << endl;

            cout << "Incrementar X: ";
            cin >> x3;

            cout << "Incrementar Y: ";
            cin >> y3;

            objPunto.mover(x3, y3);

            break;

        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }

    }

    return 0;
}
