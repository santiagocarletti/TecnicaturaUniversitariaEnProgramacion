#include <iostream>
using namespace std;

///21) ENUNCIADO: Hacer un programa para ingresar las encuestas de edad efectuadas a 200
///personas y luego listar la cantidad de personas en cada rango de edad según la
///siguiente tabla.
///Década 0. (Edad 1-9) Cantidad de encuestados: 99
///Década 1. (Edad 10-19) Cantidad de encuestados: 99
///…………………………………………………………………………………………………………………
///Década 9. (Edad 90-99) Cantidad de encuestados: 99

void cargarEdades(int v[20]);
void detRango(int vEd[20]);

int main()
{
    int vEdades[20];

    cout << "EDAD DE LOS ENCUESTADOS: " << endl;
    cargarEdades(vEdades);

    detRango(vEdades);

    return 0;
}

void cargarEdades(int v[20]){

    int i, rango;

    for(i = 0; i < 20; i++){

        cin >> v[i];

    }

}

void detRango(int vEd[20]){

    int vRan[10]={0}, u, p, ran;

    for(u=0; u<20; u++){

        ran = vEd[u]/10;

        vRan[ran]++;

    }

    for(p=0; p<10; p++){

        cout << "Década " << p << ": (" << p*10 << "-" << (p*10)+9 << "): " << vRan[p] << " encuestados" << endl;

    }

}
