#include <iostream>

using namespace std;

///21) ENUNCIADO: Hacer un programa que permita ingresar una lista de números positivos,
///negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
///a 10. Calcular e informar:
///- La cantidad de números que componen la lista.
///Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
///Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7

int main()
{
    int num, dif, con=0, mi=0, ma=0, aux;

    cout << "Ingrese Numero: " << endl;
    cin >> num;

    while(con<3 || dif<=10){

            con++;

        if(con==0){
            mi=num;
            }else if(con==1){

                if(num>mi){
                    ma=num;
                }else{
                    aux=mi;
                    mi=num;
                    ma=aux;
                }
            //cierre if (con==1)
            }else if(num<mi){
                    mi=num;
            }else if(num>ma){
                    ma=num;
            }

            dif=ma-mi;

            cout << "Ingrese Numero: " << endl;
            cin >> num;

    //cierre while
    }

    cout << con << " Numeros ingresados" << endl;

    return 0;
}
