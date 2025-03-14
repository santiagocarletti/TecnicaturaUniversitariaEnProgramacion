#include <iostream>
using namespace std;

///20) ENUNCIADO: Dadas dos listas de 5 n£meros cada una y sin n£meros repetidos, cargarlas en
///dos vectores. Generar un tercer vector que contenga los elementos de ambos
///vectores intercalados. Mostrar en pantalla el nuevo vector.
///Vector 1: [8, 10, -3, 5, 7]
///Vector 2: [20, -8, 10, 9, 3]
///Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]

void cargarVector(int v[5]);
void intercalar(int vec1[5], int vec2[5]);

int main()
{
    int vUno[5], vDos[5];

    cout << "CARGAR 1§ VECTOR: " << endl;
    cargarVector(vUno);

    cout << "CARGAR 2§ VECTOR: " << endl;
    cargarVector(vDos);

    intercalar(vUno, vDos);

    return 0;
}

void cargarVector(int v[5]){

    int i;

    for(i = 0; i < 5; i++){

        cin >> v[i];

    }

}

void intercalar(int vec1[5], int vec2[5]){

    int vIntercalados[10], f, g, con=0;

    for(f=0; f<10; f++){

        if(f%2==0){

            vIntercalados[f]=vec1[con];

        }else{

            vIntercalados[f]=vec2[con];
            con++;

        }

    }

    for(g=0; g<10; g++){

        cout << vIntercalados[g] << endl;

    }

}
