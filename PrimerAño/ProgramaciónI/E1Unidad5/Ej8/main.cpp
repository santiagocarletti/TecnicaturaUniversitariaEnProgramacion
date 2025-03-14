#include <iostream>
#include <locale>

using namespace std;

///8) ENUNCIADO: Escribir una funci¢n que reciba el valor de un a¤o y retorne 1 si el mismo es
///bisiesto y 0 si es un a¤o no bisiesto. Recordar que son a¤os bisiestos los
///divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se
///incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisiblepor 4. El a¤o 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible
///por 4. Y el a¤o 2000 fue bisiesto por ser divisible por 400, aun siendo divisible por 100.
///Hacer un programa para ingresar una lista de 10 valores de a¤os y contar
///cuantos son bisiestos. Utilizar la funci¢n solicitada.

bool EsBisiesto(int anno){

    bool Es=0;

    if((anno%4==0 && anno%100!=0) || (anno%4==0 && anno%400==0)){
            Es=1;
        }
        return Es;
    }

int main()
{
    setlocale(LC_ALL, "Spanish");

    int anio, i, con=0;
    bool siEs;

    for(i=1; i<=4; i++){

        cout << "Ingrese año: ";
        cin >> anio;

        siEs = EsBisiesto(anio);

        if(siEs){
            con++;
        }

        }

        cout << con << " años bisiestos ingresados.";

    return 0;
}
