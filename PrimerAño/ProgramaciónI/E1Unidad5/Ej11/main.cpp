#include <iostream>
#include <locale>

using namespace std;

///11) ENUNCIADO: Hacer una funci¢n llamada contarDigitos que reciba por valor un n£mero
///entero y determine y devuelva la cantidad de d¡gitos del n£mero. Por ejemplo,
///si se recibe el n£mero 840 debe devolver 3.
///Hacer un programa que, a partir de un n£mero que ingresa el usuario, informe
///por pantalla la cantidad de d¡gitos del n£mero ingresado.

    ContarDigitos(string numero){

            int digitos;

            digitos=numero.size();

            return digitos;
    }

int main()
{
    setlocale(LC_ALL, "Spanish");

//    int digitos;
//    string num;
//
//    cout << "Número: ";
//    cin >> num;
//
//    digitos=num.size();
//
//    cout << digitos;

    int caracteres;
    string nombreNum;

    cout << "Número: ";
    cin >> nombreNum;

    caracteres = ContarDigitos(nombreNum);

    cout << caracteres << " caracteres." << endl;

    return 0;
}
