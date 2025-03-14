#include <iostream>

using namespace std;

///26) ENUNCIADO: Hacer un programa que muestre los n£meros primos entre el 1 y el 10000.
///El usuario no debe ingresar nada en este programa.

int main()
{
    int i;

    for(i=1; i<=10000; i++){

        int j, con=0;

        for(j=1; j<=i; j++){
            if(i%j==0){
                con++;
            }
        }
        if(con==2){
            cout << i << endl;
        }
    }
    return 0;
}
