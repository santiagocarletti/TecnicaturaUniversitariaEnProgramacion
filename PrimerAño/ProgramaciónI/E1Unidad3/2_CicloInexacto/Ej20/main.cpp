#include <iostream>

using namespace std;

///20) ENUNCIADO: Dada una lista de números que finaliza cuando se ingresa un cero, informar el
///primer número par ingresado y su ubicación en la lista y el último de los
///números primos y su ubicación en la lista.
///Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.
///Último primo: 13 ubicación 6.
///Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7.
///Último primo: 13 ubicación 5.

int main()
{
    int num, pp, upp=0, up, uup, con=1;

    cout << "Numero: " << endl;
    cin >> num;

    while(num!=0){

            int con2=1, rc=0;

            if(upp==0){

                if(num%2==0){
                    upp=con;
                    pp=num;
                }
            }

            while(con2<num){

            if(num%con2==0){
                rc++;
                con2++;
            }else{
                con2++;
            }

            //cierre 2do while
            }

            if(rc==1){
                up=num;
                uup=con;
            }

            con++;

            cout << "Numero: " << endl;
            cin >> num;

    //cierra 1er while
    }

    cout << "Primer par: " << pp << ". Ubicacion: " << upp << endl;
    cout << "Ultimo primo: " << up << ". Ubicacion: " << uup << endl;

    return 0;
}
