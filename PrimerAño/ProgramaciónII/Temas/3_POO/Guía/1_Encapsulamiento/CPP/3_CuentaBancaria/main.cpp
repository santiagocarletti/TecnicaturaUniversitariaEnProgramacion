#include <iostream>
using namespace std;
#include "cuentaBancaria.h"

///3) CONSIGNA: Crea una clase llamada CuentaBancaria que represente una cuenta
///bancaria. La clase debe tener los siguientes atributos:
///- N£mero de cuenta (entero)
///- Saldo actual (float)
///Implementa los siguientes m‚todos:
///- Un constructor que me permita establecer el n£mero de cuenta y el
///saldo.
///- Un m‚todo depositar(float monto) que incremente el saldo.
///- Un m‚todo retirar(float monto) que disminuya el saldo si
///hay fondos suficientes, caso contrario no hace nada.
///- Un m‚todo obtenerSaldo() que devuelva el saldo actual

int main()
{
    CuentaBancaria objCuenta(123, 1054.55);

    int opcion=10;


    while(opcion!=0){

    cout << endl << "1_ DEPOSITAR" << endl;
    cout << "2_ RETIRAR" << endl;
    cout << "3_ OBTENER SALDO" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){

        case 0:
            break;

        case 1:{
            cout << endl << "DEPOSITAR" << endl << endl;

            float deposito;

            cout << "Saldo a depositar: $";
            cin >> deposito;

            objCuenta.depositar(deposito);

            break;
        }

        case 2:{
            cout << endl << "RETIRAR" << endl << endl;

            float retiro;

            cout << "Saldo a retirar: $";
            cin >> retiro;

            objCuenta.retirar(retiro);

            break;
        }

        case 3:{
            cout << endl << "OBTENER SALDO" << endl << endl;

            cout << "AR$ " << objCuenta.obtenerSaldo() << endl;

            break;
        }

        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }

    }

    return 0;

}
