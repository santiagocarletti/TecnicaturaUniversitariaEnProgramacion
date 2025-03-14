#include <iostream>
#include <locale>

using namespace std;

///6) ENUNCIADO: Hacer una funci�n que reciba un n�mero entero por valor llamado d�a y un
///string llamado nombre por referencia y le asigne el nombre correspondiente
///seg�n el n�mero de d�a. Siendo 0 >>> Domingo y 6 >>> S�bado.

    string NombreCorrecto(int dia, string& nombre){

    switch(dia){
    case 0:
        nombre = "domingo";
        break;
    case 1:
        nombre = "lunes";
        break;
    case 2:
        nombre = "martes";
        break;
    case 3:
        nombre = "mi�rcoles";
        break;
    case 4:
        nombre = "jueves";
        break;
    case 5:
        nombre = "viernes";
        break;
    case 6:
        nombre = "s�bado";
        break;
    }

    return nombre;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int nume;
    string giorno;

    cout << "N�mero d�a: ";
    cin >> nume;

    cout << "D�a equivocado: ";
    cin >> giorno;

    giorno = NombreCorrecto(nume, giorno);

    cout << "D�a: " << nume << " = " << giorno << endl;

    return 0;
}
