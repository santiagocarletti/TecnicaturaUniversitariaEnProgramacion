#include <iostream>
using namespace std;

///10) ENUNCIADO: Dada una lista de 20 números, cargarlos en un vector. Determinar e informar la
///cantidad de “rupturas” que tiene el vector con respecto a un orden
///estrictamente creciente. Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.

void cargarVector(int v[20]);
void verOrden(int ve[20]);

int main()
{
    int vNum[20];

    cout << "CARGAR VECTOR: " << endl;
    cargarVector(vNum);

    verOrden(vNum);

    return 0;
}

void cargarVector(int v[20]){

    int i;

    for(i = 0; i < 20; i++){

        cin >> v[i];

    }

}

void verOrden(int ve[20]){

    int con = 0, rupturas = 0, j, anteriorRup;
    bool r=0;

    for(j=0; j<19; j++ && !r){

        if(ve[j]>ve[j+1]){

            rupturas++;
            r=1;
            anteriorRup = ve[j];

        }else if(anteriorRup>ve[j+1]){

            rupturas++;
            r=1;

        }else{

            r=0;

            if(ve[j]>ve[j+1]){

                rupturas++;

            }

        }

    }

    cout << "Hubieron " << rupturas << " rupturas.." << endl;

}
