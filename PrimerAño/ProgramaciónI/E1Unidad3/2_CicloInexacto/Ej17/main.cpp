#include <iostream>

using namespace std;

///17) ENUNCIADO: Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
///ingresan dos n£meros positivos consecutivos, y luego informar el m ximo.
///Cuando se ingresa el segundo n£mero positivo consecutivo el mismo debe ser
///descartado.
///Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listar  M ximo 20.
///En este caso, el segundo n£mero positivo consecutivo, el 10, no se analiza, s¢lo
///sirve para finalizar el ingreso.
///Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listar  M ximo 55.
///En este caso, el segundo n£mero positivo consecutivo, el 120, no se analiza,
///s¢lo sirve para finalizar el ingreso.

int main()
{
    int num, con=0, maxi;

    cout << "Numero: " << endl;
    cin >> num;

    while(con<2){

            if(num>0){
                if(con==0){
                    maxi=num;
                    con++;
                }else if(num>maxi){
                    con++;
                    maxi=num;
                }
            }

            cout << "Numero: " << endl;
            cin >> num;

            if(num>0){
                con++;
            }else{
                con=0;
            }

    //CIERRA WHILE
    }

    cout << "El maximo es el: " << maxi << endl;

    return 0;
}
