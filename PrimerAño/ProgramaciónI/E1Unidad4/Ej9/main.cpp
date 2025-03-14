#include <iostream>

using namespace std;

///9) ENUNCIADO: Hacer un programa para ingresar los valores de los pesos de distintas
///encomiendas que se deben enviar a distintos clientes y que finaliza cuando se
///ingresa un peso negativo. Se deben agrupar las encomiendas en camiones que
///pueden transportar hasta 200 kilos en total.
///Ejemplo:
///Camion 1: 10, 20, 140
///Camion 2: 70, 100
///Camion 3: 40, 10, 50, 80
///Camion 4: 90, 30, 40
///Camion 5: 50, -10
///Se pide determinar e informar:
///a) El n£mero de cada cami¢n y peso total de encomiendas. Cami¢n 1: 170 kg,
///Cami¢n 2: 170 kg, etc.
///b) El n£mero de cami¢n que transporta mayor cantidad de encomiendas. En el
///ejemplo anterior ser¡a el Cami¢n 3 con 4 encomiendas.

int main()
{
    int camion=1, peso, camionMax, encMax;

    cout << "Peso: ";
    cin >> peso;

    while(peso>0){

        int acu=0, con=0;

        while(acu+peso<200 && peso>0){

            acu+=peso;
            con++;

            cout << "Peso: ";
            cin >> peso;
        }

        cout << "Camion: " << camion << ". Peso: " << acu << endl;


        if(camion==1){
            camionMax=camion;
            encMax=con;
        }else if(con>encMax){
            encMax=con;
            camionMax=camion;
        }

        camion++;

    }

    cout << "El camion: " << camionMax << ". Lleva mas encomiendas (" << encMax << ")." << endl;

    return 0;
}
