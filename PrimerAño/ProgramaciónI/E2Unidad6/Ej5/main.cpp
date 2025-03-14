#include <iostream>
using namespace std;

///5) ENUNCIADO: Leer 10 n£meros y guardarlos en un vector. Determinar e informar cu l es el
///menor de los impares y el mayor de los pares. Suponer que habr  al menos un
///n£mero par y uno impar.

void cargarVector(int v[10]);
int menorImpar(int lista[10]);
int mayorPar(int vect[10]);

int main()
{
    int vNum[10], miImpar, maPar;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    miImpar = menorImpar(vNum);
    cout << "M¡nimo impar: " << miImpar << endl;

    maPar = mayorPar(vNum);
    cout << "M ximo par: " << maPar << endl;

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}


int menorImpar(int lista[10]){

    int minImp = lista[0], x;

    for(x=0; x<10; x++){

        if(lista[x]%2!=0 && lista[x]<minImp){

                minImp = lista[x];

        }

    }

    return minImp;
}

int mayorPar(int vect[10]){

    int mayPar = vect[0], y;

    for(y=0; y<10; y++){

        if(vect[y]%2==0 && vect[y]>mayPar){

            mayPar = vect[y];

        }

    }

    return mayPar;

}
