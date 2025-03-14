#include <iostream>

using namespace std;

///30) ENUNCIADO: Dada una lista de 7 números enteros todos distintos entre sí determinar e
///informar con un cartel aclaratorio si los números primos ingresados en la
///misma están ordenados de menor a mayor. Los números primos pueden no ser
///consecutivos, pero sí estar ordenados.
///Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que
///los números primos están ordenados: 5, 7, 13, 19.
///Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya
///que los números primos no están ordenados: 3, 5, 11, 7.

int main()
{
    //cout << "Hello world!" << endl;

    int num, i, con=0, ultimo=0;
    bool c=1;

    for(i=0; i<7; i++){

        cout << "Ingrese numero: " << endl;
        cin >> num;

        int j, conj=0;

        for(j=1; j<=num; j++){
            if(num%j==0){
                conj++;
            }
        }

        if(c){

        if(conj==2 && ultimo==0){
            ultimo=num;
        }else if(conj==2 && num>ultimo){
            ultimo=num;
            c=1;
        }else if(conj==2 && num<ultimo){
            c=0;
        }
    }
    }

    if(c){
        cout << "Ordenados." << endl;
    }else{
        cout << "Desordenados." << endl;
    }

    return 0;
}
