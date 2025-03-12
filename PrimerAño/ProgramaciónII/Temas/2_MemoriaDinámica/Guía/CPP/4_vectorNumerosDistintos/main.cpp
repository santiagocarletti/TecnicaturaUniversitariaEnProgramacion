#include <iostream>
using namespace std;

///4) CONSIGNA: Hacer una funci¢n que reciba un vector de enteros y su tama¤o y devuelva la
///cantidad de n£meros distintos que se repiten en el vector

int numerosDistintos(int *vecEnteros, int tam);

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

    int distintosRepetidos = numerosDistintos(vecEnteros, tam);

    cout << endl << "Nros. distintos repetidos: " << distintosRepetidos << endl;

    delete [] vecEnteros;

    return 0;
}

int numerosDistintos(int *vecEnteros, int tam){

    bool *vRepetidos = new bool[tam];

    if(vRepetidos==nullptr){ cout << "Problema de asignacion de memoria.."; return -1; }

    for(int c=0; c<tam; c++){vRepetidos[c]=false; }

    bool repetidos;
    int distintosRepetidos=0;

    for(int b=0; b<tam; b++){

        repetidos=false;

        for(int c=0; c<tam; c++){

            if(vecEnteros[b]==vecEnteros[c] && b!=c && !vRepetidos[b]){

                vRepetidos[c]=true;
                repetidos=true;

            }

        }

        if(repetidos){ distintosRepetidos++; }

    }


    delete [] vRepetidos;

    return distintosRepetidos;

}
