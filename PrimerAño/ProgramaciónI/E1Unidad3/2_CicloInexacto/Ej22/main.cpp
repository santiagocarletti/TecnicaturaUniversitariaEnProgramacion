#include <iostream>

using namespace std;

///22) ENUNCIADO: Hacer un programa que permita ingresar una lista de números positivos,
///negativos o cero hasta que se ingrese el 5º número par.
///Calcular e informar:
///- La cantidad de ternas de números negativos ingresados de manera
///consecutiva.
///Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2

int main()
{
    int num, par=0, conter=0, teract=0;
    bool antneg=0;

    cout << "Numero: " << endl;
    cin >> num;

    while(par<5){

    if(num%2==0){
        par++;
    }

    if(num<0){
        if(antneg==1){
            teract++;
            antneg=1;
        }else{
            teract++;
            antneg=1;
        }

        if(teract==3){
            conter++;
        }

    //CIERRE 1ER IF
    }else{
        teract=0;
        antneg=0;
    }

    if(par<5){
        cout << "Numero: " << endl;
        cin >> num;
    }

    //CIERRA WHILE
    }

    cout << conter << " ternas de negativos. " << endl;

    return 0;
}
