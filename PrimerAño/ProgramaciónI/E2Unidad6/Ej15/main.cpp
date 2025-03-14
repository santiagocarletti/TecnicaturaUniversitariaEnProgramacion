#include <iostream>
using namespace std;

///15) ENUNCIADO: Dada una lista de 5 n£meros, cargarlos en un vector. Armar luego otro vector
///de 9 elementos donde por cada 2 elementos del vector original intercale el
///promedio de ellos. Por ejemplo: [2, 4, 6, 8, 10], el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].

void cargarVector(int v[5]);
void intercalar(int vt[5], int vNine[9]);


int main()
{
    int vNum[5], vNueve[9];

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    intercalar(vNum, vNueve);

    return 0;
}

void cargarVector(int v[5]){

    int i;

    for(i = 0; i < 5; i++){

        cin >> v[i];

    }

}

void intercalar(int vt[5], int vNine[9]){

    int i, j, con=0, prom;

    for(i=0; i<9; i++){

        prom = (vt[con]+vt[con-1])/2;

        if(i%2==0){

            vNine[i]=vt[con];
            con++;

        }else{

            vNine[i]=prom;

        }

    }

    for(j=0; j<9; j++){

        cout << vNine[j] << endl;

    }

}
