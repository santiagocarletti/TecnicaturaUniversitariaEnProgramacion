#include <iostream>
using namespace std;

///18) ENUNCIADO: Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar dos
///n£meros a y b menores a 10. Determinar e informar cu l es el valor m ximo en
///el vector considerando los elementos que est n entre las posiciones a y b.

void cargarVector(int v[10]);
void maxEntreAyB(int vtor[10], int a, int b);

int main()
{
    int vNum[10], primero, segundo;

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    cout << "1§ N£mero: ";
    cin >> primero;
    cout << "2§ N£mero: ";
    cin >> segundo;

    maxEntreAyB(vNum, primero, segundo);

    return 0;
}

void cargarVector(int v[10]){

    int i;

    for(i = 0; i < 10; i++){

        cin >> v[i];

    }

}

void maxEntreAyB(int vtor[10], int a, int b){

    int maximo=vtor[0], o, aux;

    if(b<a){

        aux=b;
        b=a;
        a=aux;

    }

    for(o=0; o<10; o++){

        if(vtor[o]>a && vtor[o]<b && vtor[o]>maximo){

            maximo=vtor[o];

        }

    }

    cout << "M ximo del vector entre " << a << " y " << b << ": " << maximo << endl;

}
