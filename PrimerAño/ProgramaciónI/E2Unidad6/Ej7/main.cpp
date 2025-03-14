#include <iostream>
using namespace std;

///7) ENUNCIADO: Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0,
///1, 0, 1, 0, 1, 0, 1, 0. Luego mostrar los números por pantalla. EL USUARIO NO
///INGRESA NINGÚN VALOR EN ESTE PROGRAMA.

void cargar1y0(int ve[10]);
void mostrarV(int vec[10]);

int main()
{
    int vBooleano[10];

    cargar1y0(vBooleano);

    mostrarV(vBooleano);

    return 0;
}

void cargar1y0(int ve[10]){

    int e;

    for(e=0; e<10; e++){

        if(e%2==0){

            ve[e]=1;

        }else{

            ve[e]=0;

        }

    }

}

void mostrarV(int vect[10]){

    int y;

    for(y=0; y<10; y++){

        cout << vect[y] << endl;

    }

}
