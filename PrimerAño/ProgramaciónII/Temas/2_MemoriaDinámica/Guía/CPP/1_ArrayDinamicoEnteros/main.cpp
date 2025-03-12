#include <iostream>
using namespace std;

///1) CONSIGNA: Escribe un programa que solicite al usuario el tama¤o de un array de enteros, lo
///cree din micamente utilizando new, el usuario debe poder cargar el array y
///mostrarlo, y luego libere la memoria con delete

int main()
{
    int tamanio, *vec;

    cout << "Ingrese el tamanio del vector: ";
    cin >> tamanio;

    vec = new int[tamanio];

    if(vec==NULL){
        cout << "Problema de asignacion de memoria" << endl;
        return -1;
    }

    cout << endl;

    for(int a=0; a<tamanio; a++){

        cout << a+1 << "§ Numero: ";
        cin >> vec[a];

    }

    cout << endl << "Fin de la carga" << endl << endl;

    for(int b=0; b<tamanio; b++){

        cout << b+1 << "§ Numero: " << vec[b] << endl;

    }

    delete [] vec;

    return 0;
}
