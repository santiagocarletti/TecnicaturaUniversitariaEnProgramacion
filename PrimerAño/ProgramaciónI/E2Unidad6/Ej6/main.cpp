#include <iostream>
using namespace std;

///6) ENUNCIADO: Leer 10 n£meros y guardarlos en un vector. Determinar e informar los dos
///£ltimos n£meros pares en el vector y sus respectivas posiciones en el mismo.
///Suponer que habr  al menos dos n£meros pares.

void cargarVector(int v[10]);
void ultDosPares(int vect[10], int &posicion1, int &posicion2, int &anteultimo, int &ultimo);

int main()
{
    int vNum[10], pos1=0, pos2=0, ant=0, ult=0;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    ultDosPares(vNum, pos1, pos2, ant, ult);
    cout << "Ultimo par: " << ult << ". Posici¢n: " << pos2 << endl;
    cout << "Ante£ltimo par: " << ant << ". Posici¢n: " << pos1 << endl;

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void ultDosPares(int vect[10], int &posicion1, int &posicion2, int &anteultimo, int &ultimo){

    int t;
    bool u=0, a=0;

    for(t=9; t>0; t--){

        if(!u && vect[t]%2==0){

            ultimo=vect[t];
            posicion2=t+1;
            u=1;

        }else if(!a && vect[t]%2==0){

            anteultimo=vect[t];
            posicion1=t+1;
            a=1;

        }

    }

}
