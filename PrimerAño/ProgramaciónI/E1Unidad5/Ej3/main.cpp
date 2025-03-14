#include <iostream>
#include <locale>

using namespace std;

///3) ENUNCIADO: Hacer una funci¢n llamada EsPrimo que determine si un n£mero es primo o
///no. La funci¢n debe recibir el n£mero y devolver true si es primo o false si no lo
///es. La funci¢n no debe mostrar nada por pantalla.
///Hacer un programa para ingresar un n£mero y, utilizando EsPrimo, emita luego
///un cartel indicando si el n£mero ingresado es primo o no es primo.

bool EsPrimo(int n){
    bool primo;

    int i, CRC=0;

    for(i=1; i<=n; i++){
        if(n%i==0){
            CRC++;
        }
    }
    if(CRC==2){
        primo = true;
    }else{
        primo = false;
    }

    return primo;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int nro;
    bool primoSi;

    cout << "Ingrese Nro.:";
    cin >> nro;

    primoSi = EsPrimo(nro);

    if(primoSi){
        cout << "El número es primo.";
    }else{
        cout << "El número NO es primo.";
    }

    return 0;
}
