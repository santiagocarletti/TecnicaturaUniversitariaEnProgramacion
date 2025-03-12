#include <iostream>
using namespace std;
#include "Dado.h"

///2) CONSIGNA: Crea una clase llamada Dado que simule el comportamiento de un dado de
///seis caras. La clase debe contener los siguientes atributos:
///- valor (int): Almacena el valor actual del dado (un n£mero entre 1 y
///6).
///Implementa los siguientes m‚todos p£blicos:
///- Dado(): Constructor que inicializa el dado con un valor aleatorio
///entre 1 y 6.
///- lanzar(): Simula el lanzamiento del dado, asignando un nuevo
///valor aleatorio entre 1 y 6 al atributo valor.
///- getValor(): Devuelve el valor actual del dado.
///- esMaximo(): Devuelve true si el valor del dado es 6, y false en
///caso contrario.
///- esMinimo(): Devuelve true si el valor del dado es 1, y false en
///caso contrario.

int main()
{
    Dado objDado;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ LANZAR" << endl;
    cout << "2_ VALOR" << endl;
    cout << "3_ ES MAXIMO?" << endl;
    cout << "4_ ES MINIMO?" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "LANZAR: " << endl << endl;

            objDado.lanzar();

            cout << "Hecho!" << endl;

            break;

        case 2:
            cout << endl << "VALOR: " << endl << endl;

            cout << "Valor: " << objDado.getValor() << endl;

            break;

        case 3:
            cout << endl << "ES MAXIMO?: " << endl << endl;

            if(objDado.esMaximo()){
                cout << "Si" << endl;
            }else{
                cout << "No" << endl;
            }

            break;

        case 4:
            cout << endl << "ES MINIMO?: " << endl << endl;

            if(objDado.esMinimo()){
                cout << "Si" << endl;
            }else{
                cout << "No" << endl;
            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}
