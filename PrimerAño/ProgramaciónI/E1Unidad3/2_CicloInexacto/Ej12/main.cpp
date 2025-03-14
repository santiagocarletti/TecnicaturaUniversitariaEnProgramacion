#include <iostream>

using namespace std;

///12) ENUNCIADO: Dada una lista de n£meros que finaliza cuando se ingresa un cero, informar cual
///es el primer y segundo n£mero impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9

int main()
{
    int num, p=0, s=0;

    cout << "Numero: ";
    cin >> num;

    while(num!=0){

        if(num%2!=0){
            if(p==0 && s==0){
                p=num;
            }else if(p!=0 && s==0){
                s=num;
            }
        }

        cout << "Numero: ";
        cin >> num;

    //A continuación dierra while
    }

    cout << "Primero: " << p << ". Segundo: " << s << endl;

    return 0;
}
