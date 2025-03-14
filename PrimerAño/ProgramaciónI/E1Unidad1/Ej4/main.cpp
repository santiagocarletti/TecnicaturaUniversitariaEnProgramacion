#include <iostream>

using namespace std;

///4) ENUNCIADO: Hacer un programa para ingresar por teclado la cantidad de asientos totales en
///un avi¢n y la cantidad de pasajes ocupados y luego calcular e informar el
///porcentaje de ocupaci¢n y el porcentaje de no ocupaci¢n del mismo.Ejemplo si el avi¢n tiene
///200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupaci¢n que se informar 
///ser  de un 40% y el porcentaje de no ocupaci¢n ser  de un 60%

int main()
{
    //cout << "Hello world!" << endl;

    int att, po, poroc, porde;

    cout << "Asientos totales: ";

    cin >> att;

    cout << "Pasajes ocupados: ";

    cin >> po;

    poroc = po * 100 / att;

    cout << "Porcentaje de ocupacion: " << poroc << " %" << endl;

    porde = 100 - poroc;

    cout << "Porcentaje de desocupacion: " << porde << " %";

    return 0;
}
