#include <iostream>
using namespace std;

///9) ENUNCIADO: Dada una lista de 20 n£meros enteros, cargarlos en un vector. Determinar e
///informar con un cartel aclaratorio si el vector est  ordenado estrictamente en
///forma creciente. Por ejemplo: el vector [1, 3, 5, 7, 9] est  ordenado
///estrictamente. El vector [1, 5, 3, 7] no lo est .

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

    int con = 0, j;

    for(j=0; j<19; j++){

        if(ve[j]<ve[j+1]){

            con++;

        }

    }

    if(con==19){

        cout << "Orden Creciente" << endl;

    }else{

        cout << "Orden No creciente" << endl;

    }

}
