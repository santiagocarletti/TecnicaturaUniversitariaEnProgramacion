#include <iostream>

using namespace std;

///11) ENUNCIADO: Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
///ingresa un cero, informar el m ximo de los negativos y el m¡nimo de los positivos.
///Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
///M ximo Negativo: -3.
///M¡nimo Positivo: 2.

int main()
{
    int n, ne=0, po=0;

    cout << "Numero: ";
    cin >> n;

    while(n!=0)
    {
        if(n<0)
        {
            if(ne==0)
            {
                ne=n;
            }
            else if(n>ne)
            {
                ne=n;
            }
        }
        else if(po==0)
        {
            po=n;
        }

    else if(n<po)
    {
        po=n;
    }

    cout << "Numero: ";
    cin >> n;

    }

    cout << "Mayor negativo: " << ne << ". Menor positivo: " << po << endl;

    return 0;
}
