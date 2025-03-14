#include <iostream>

using namespace std;

///13) ENUNCIADO: Dada una lista de n£meros que finaliza cuando se ingresa un cero, informar cual
///es el primer y £ltimo n£mero impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.

int main()
{
    int num, p=0, s=0;

    cout << "Numero: ";
    cin >> num;

    while(num!=0)
    {

        if(num%2!=0)
        {
            if(p==0)
            {
                p=num;
            }
            else if(p!=0)
            {
                s=num;
            }
        }

        cout << "Numero: ";
        cin >> num;

        //A continuación dierra while
    }

    cout << "Primero: " << p << ". Ultimo: " << s << endl;

    return 0;
}
