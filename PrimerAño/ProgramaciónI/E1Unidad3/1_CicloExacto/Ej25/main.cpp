#include <iostream>

using namespace std;

////25) ENUNCIADO: Hacer un programa que permita ingresar el
////legajo y sueldo de 10 empleados y determine:
////- El legajo del empleado con mayor sueldo

int main()
{
    int i, legajo, sueldo, legmax, sueldomax;

    for(i=0; i<10; i++){
        cout << "Ingrese legajo: " << endl;
        cin >> legajo;
        cout << "Sueldo: $" << endl;
        cin >> sueldo;

        if(i==0){
            legmax=legajo;
            sueldomax=sueldo;
        }else if(sueldo>sueldomax){
            sueldomax=sueldo;
            legmax=legajo;
        }
    }

    cout << "Sueldo maximo: $" << sueldomax << ". Legajo: " << legmax << endl;

    return 0;
}
