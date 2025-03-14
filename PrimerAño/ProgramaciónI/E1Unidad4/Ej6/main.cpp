#include <iostream>

using namespace std;

///6) ENUNCIADO: Dada una lista de números todos distintos entre sí y que finaliza con un cero,
///determinar e informar con un cartel aclaratorio si los números primos de la lista
///están ordenados de menor a mayor. Los números primos pueden no ser
///consecutivos, pero sí deben estar ordenados.
///Por ejemplo:
///Ejemplo A: 4, 5, 7, 12, 13, 0. Se emite un cartel que diga “Ordenados” (5, 7 y 13)
///Ejemplo B: 2, 10, 3, 5, 11, 7, 14, 0. Se emite un cartel que diga “Desordenados”
///(2, 3, 5, 11 y 7).

int main()
{
    int i, num, primo=0;
    bool ord=0;

    cout << "Numero: ";
    cin >> num;

    while(num!=0){

        int conRC=0;

        for(i=1; i<=num; i++){

            if(num%i==0){
                conRC++;
            }
        }

        if(conRC==2){
            if(primo==0){
                primo=num;
            }else if(num>primo){
                ord=1;
            }
        }

        cout << "Numero: ";
        cin >> num;
    }

    if(ord){
        cout << "Ordenados";
    }else{
        cout << "Desordenados";
    }

    return 0;
}
