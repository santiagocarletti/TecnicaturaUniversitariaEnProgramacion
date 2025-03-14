#include <iostream>

using namespace std;

///1) ENUNCIADO: Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el
///valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda

int main()
{
    //cout << "Hello world!" << endl;

    int h, v, s;

    cout << "Horas trabajadas: ";

    cin >> h;

    cout << "Valor por hora: ";

    cin >> v;

    s = h * v;

    cout << "Sueldo: " << s;

    //cout << s;

    return 0;
}
