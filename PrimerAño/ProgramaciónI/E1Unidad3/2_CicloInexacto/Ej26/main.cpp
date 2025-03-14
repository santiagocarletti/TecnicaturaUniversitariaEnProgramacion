#include <iostream>

using namespace std;

///26) ENUNCIADO: Un n£mero Simon¡rico es un n£mero positivo divisible por 15 y a la vez divisible
///por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
///n£meros Simon¡ricos. El usuario no debe ingresar nada.

int main()
{
    int con=1;

    while(con<1001){

        if(con%15==0 && con%3==0 && con%6!=0){
            cout << con << endl;
        }

        con++;

    }

    return 0;
}
