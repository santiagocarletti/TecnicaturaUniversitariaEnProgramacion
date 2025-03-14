#include <iostream>

using namespace std;

///14) ENUNCIADO: Dada una lista de 7 números enteros informar cual es el primer, el segundo, el
///anteúltimo y el último número impar ingresado.
///Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
///Anteúltimo impar: 9 y Último impar: 5.

int main()
{
    //cout << "Hello world!" << endl;

        int i, num, uno=0, dos=0, seis=0, siete=0;

        for(i=1; i<8; i++){
        cout << "Ingrese numero: " << endl;
        cin >> num;

        if(num%2!=0){

            if(uno==0){
                uno=num;
            }else if(dos==0){
                dos=num;
            }else if(seis==0){
                seis=num;
            }else if(siete==00){
                siete=num;
            }

        }
        }

        cout << "Primer impar: " << uno << ". Segundo impar: " << dos << ". Ante·ltimo impar: " << seis << ". Ultimo impar: " << siete << endl;

    return 0;
}
