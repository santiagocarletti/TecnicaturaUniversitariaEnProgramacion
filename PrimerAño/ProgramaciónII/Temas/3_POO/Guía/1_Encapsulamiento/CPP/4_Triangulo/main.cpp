#include <iostream>
using namespace std;

#include "Triangulo.h"

///4) CONSIGNA: Crea una clase llamada Triangulo que represente un triángulo. La clase
///debe contener un vector de 3 elementos, donde cada elemento
///corresponde a la longitud de un lado del triángulo. Implementa los
///siguientes métodos:
///- getLado(int numero): Devuelve la longitud del valor del lado
///correspondiente al número proporcionado (1, 2, o 3). Si el número
///es incorrecto (fuera del rango 1-3), devuelve cero.
///- setLado(int numero, float valor): Establece el valor del
///lado correspondiente al número proporcionado (1, 2, o 3). Si el
///número es incorrecto (fuera del rango 1-3), no realiza ninguna
///acción.
///- getTipo(): Devuelve el tipo de triángulo según sus lados:
///- 1 para un triángulo equilátero (todos los lados iguales).
///- 2 para un triángulo isósceles (dos lados iguales).
///- 3 para un triángulo escaleno (todos los lados diferentes).
///- isEscaleno(): Devuelve true si el triángulo es escaleno, false
///en caso contrario.
///- isIsosceles(): Devuelve true si el triángulo es isósceles,
///false en caso contrario.● isEquilatero(): Devuelve true si el triángulo es equilátero,
///false en caso contrario

int main()
{
    Triangulo objTriangulo;

    int lado;
    float longitud;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ ASIGNAR LONGITUD" << endl;
    cout << "2_ OBTENER LONGITUD" << endl;
    cout << "3_ OBTENER TIPO" << endl;
    cout << "4_ ES ESCALENO?" << endl;
    cout << "5_ ES ISOSCELES?" << endl;
    cout << "6_ ES EQUILATERO?" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){

        case 0:
            break;

        case 1:
            cout << endl << "ASIGNAR LONGITUD" << endl << endl;

            int lado;
            float longitud;

            cout << "Lado (1-3): ";
            cin >> lado;

            cout << "Longitud: ";
            cin >> longitud;

            objTriangulo.setLado(lado, longitud);

            break;

        case 2:
            cout << endl << "OBTENER LONGITUD" << endl << endl;

            cout << "Lado: ";
            cin >> lado;

            cout << endl << objTriangulo.getLado(lado) << " cm" << endl;

            break;

        case 3:
            cout << endl << "OBTENER TIPO" << endl << endl;

            cout << objTriangulo.getTipo() << endl;

            break;

        case 4:

            cout << endl << "ES ESCALENO?" << endl << endl;

            if(objTriangulo.isEscaleno()){

                cout << "Si" << endl;

            }else{

                cout << "No" << endl;

            }

            break;

        case 5:

            cout << endl << "ES ISOSCELES?" << endl << endl;

            if(objTriangulo.isIsosceles()){

                cout << "Si" << endl;

            }else{

                cout << "No" << endl;

            }

            break;

        case 6:

            cout << endl << "ES EQUILATERO?" << endl << endl;

            if(objTriangulo.isEquilatero()){

                cout << "Si" << endl;

            }else{

                cout << "No" << endl;

            }

            break;

        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }

    }

    return 0;
}
