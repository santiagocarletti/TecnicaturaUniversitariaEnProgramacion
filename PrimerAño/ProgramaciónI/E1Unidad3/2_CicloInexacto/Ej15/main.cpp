#include <iostream>

using namespace std;

///15) ENUNCIADO: Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
///ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
///m ximo y cu l el que le sigue.
///Ejemplo: 10, 8, 12, 14, 3, 0 el resultado ser  14 y 12.
///Ejemplo: 14, 8, 12, 14, 3, 0 el resultado ser  14 y 14.
///Ejemplo: -4, -8, -12, -20, -2, 0 el resultado ser  -2 y -4

int main()
{
    int num, m1=0, m2=0;

    cout << "Numero: ";
    cin >> num;

    while(num!=0)
    {

        if(m1==0)
        {
            m1=num;
        }
        else if(m2==0)
        {
            m2=num;
        }
        else if(num>m1)
        {
            if(m1>m2){
                m2=m1;
                m1=num;
            }
        }
        else if(num>m2)
        {
            m2=num;
        }

        cout << "Numero: ";
        cin >> num;

        //sig. cierra while
    }

    if(m1<m2){
        cout << "Maximo: " << m2 << ". Le sigue el: " << m1 << endl;
    }else{
        cout << "Maximo: " << m1 << ". Le sigue el: " << m2 << endl;
    }

    return 0;
}
