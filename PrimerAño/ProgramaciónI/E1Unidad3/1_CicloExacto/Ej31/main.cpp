#include <iostream>

using namespace std;

///31) ENUNCIADO: Hacer un programa para ingresar 10 n£meros, luego informar los 2 mayores
///valores ingresados, aclarando cual es el m ximo y cu l es el segundo m ximo
///descartando los n£meros repetidos.
///Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado ser  78 y 55.
///Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado ser  -3 y -8.
///Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado ser  20 y 14.
///En el ejemplo C el valor 20 aparece dos veces, pero s¢lo se considera una vez.

int main()
{
    //cout << "Hello world!" << endl;

    int num, i, men, may;

    for(i=0; i<10; i++){
        cout << "Ingrese numero: " << endl;
        cin >> num;

        if(num!=men && num!=may){

        if(i==0){
            men=num;
        }if(i==1 && num>men){
            may=num;
        }else{
            may=men;
            men=num;
        }

            if(num>may){
                may=num;
            }else if(num>men){
                men=num;
            }
        }
    }
    cout << "Primer mayor: " << may << ". Segundo: " << men << endl;

    return 0;
}
