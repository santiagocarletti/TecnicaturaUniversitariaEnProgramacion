#include <iostream>

using namespace std;

///22) ENUNCIADO: Dada una lista de 7 números enteros informar el primer número par ingresado y
///su ubicación en la lista y el último de los números primos y su ubicación en la
///lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
///Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
///Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
///Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.

int main()
{
    //cout << "Hello world!" << endl;

    int num, i, pp=0, pospp, primo, posultpri;

    for(i=1; i<8; i++){

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    int con=0, j;

    if(pp==0){
        if(num%2==0){
            pp=num;
            pospp=i;
        }
    }

    for(j=1; j<=num; j++){
        if(num%j==0){
            con++;
        }
    }

    if(con==2){
        primo=num;
        posultpri=i;
    }

    }

    cout << "Primer par: " << pp << ". Posicion: " << pospp << endl;
    cout << "Ult. primo: " << primo << ". Posicion: " << posultpri << endl;

    return 0;
}
