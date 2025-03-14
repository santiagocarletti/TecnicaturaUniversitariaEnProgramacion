#include <iostream>

using namespace std;

///24) ENUNCIADO: Hacer un programa que permita ingresar
///el sueldo de 10 empleados y determine:
///- El sueldo m ximo.
///- El sueldo m¡nimo.
///- El sueldo promedio.
///- Cantidad de sueldos mayores a $50000.

int main()
{
    float sueldo, minimo, maximo, total=0, may50=0, i, promedio;

    for(i=0; i<10; i++){

        cout << "Sueldo: $" << endl;
        cin >> sueldo;

        if(i==0){
            minimo = sueldo;
            maximo = sueldo;
        }

        if(sueldo<minimo){
            minimo=sueldo;
        }

        if(sueldo>maximo){
            maximo=sueldo;
        }

        total+=sueldo;

        if(sueldo>50000){
            may50++;
        }
    }

    promedio=total/10;

    cout << "Sueldo minimo $" << minimo << ". Sueldo maximo: ($)" << maximo << ". Sueldo promedio: " << promedio << ". Mayores a $50k: " << may50 << endl;

    return 0;
}
