#include <iostream>
using namespace std;

///5) CONSIGNA: Hacer una funci¢n que reciba un vector de enteros y su tama¤o y luego muestre
///el vector ordenado de forma ascendente, tener en cuenta que el vector enviado
///como argumento no debe ser modificado.

void ordenarVector(int *vecEnteros, int tam);

int main()
{
    int *vecEnteros, tam, numero;

    cout << "Cantidad de numeros a cargar: ";
    cin >> tam;

    vecEnteros = new int[tam];

    if(vecEnteros==nullptr){

        cout << "Problema de asignacion de memoria.." << endl;
        return -1;

    }

    cout << endl;

    for(int a=0; a<tam; a++){

        cout << "Nro. " << a+1 << "/" << tam << ": ";
        cin >> numero;
        vecEnteros[a]=numero;

    }

    ordenarVector(vecEnteros, tam);

    delete [] vecEnteros;

    return 0;
}

void ordenarVector(int *vecEnteros, int tam){

    int *vectorCreciente, aux;

    vectorCreciente = new int[tam];

    if(vectorCreciente==nullptr){ cout << "Problema de asignacion de memoria.." << endl; return ; }

    for(int b=0; b<tam; b++){ vectorCreciente[b]=vecEnteros[b]; }

    for(int d=0; d<tam; d++){

        for(int e=0; e<tam-1; e++){

            if(vectorCreciente[e]>vectorCreciente[e+1]){

                aux=vectorCreciente[e+1];
                vectorCreciente[e+1]=vectorCreciente[e];
                vectorCreciente[e]=aux;

            }

        }

    }

    cout << endl << "Orden creciente: " << endl << endl;

    for(int c=0; c<tam; c++){ cout << vectorCreciente[c] << ", "; }

    cout << endl;

    delete [] vectorCreciente;

}
