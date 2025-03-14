#include <iostream>
using namespace std;

///4) ENUNCIADO: Leer 10 n£meros y guardarlos en un vector. Determinar e informar cu l es el
///valor m ximo absoluto del vector. Por ejemplo 20, -43 y 5, el m ximo absoluto es -43.

void cargarVector(int v[10]);
void infMaxAbsoluto(int lista[10]);

int main()
{
    int vNum[10];

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    infMaxAbsoluto(vNum);

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void infMaxAbsoluto(int lista[10]){

    int maxi = lista[0], m, p;

    for(m = 0; m<10; m++){

        if(lista[m]<0){

            if(lista[m]*-1>maxi){
                maxi=lista[m]*-1;
                p=m;
            }

        }else if(lista[m]>maxi){

            maxi = lista[m];
            p=m;

        }

    }

    cout << "El valor m ximo absoluto es: " << lista[p] << endl;

}
