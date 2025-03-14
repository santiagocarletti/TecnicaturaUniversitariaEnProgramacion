#include <iostream>

using namespace std;

///23) ENUNCIADO: Dada una lista de n£meros que finaliza cuando se ingresa un n£mero divisible
///por 7, informar cual es el ante£ltimo y £ltimo n£mero impar ingresado.
///Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
///Nota: Contemplar la posibilidad que podr¡a no haber n£meros impares en la lista.

int main()
{
    int num, ant, ult, aux;
    bool bant=0, bult=0;

    cout << "Ingrese numero: " << endl;
    cin >> num;

    while(num%7!=0){

        if(num%2!=0){

            if(!bant){
                ant=num;
                bant=1;
            }else{
                if(!bult){
                ult=num;
                bult=1;
                }else{
                ant=ult;
                ult=num;
                }
            }
        }

    cout << "Ingrese numero: " << endl;
    cin >> num;

    //CIERRA WHILE
    }

    if(bult){
        cout << "Anteultimo impar: " << ant << endl;
        cout << "Ultimo impar: " << ult << endl;
    }else{
        if(bant){
            ult=ant;
            cout << "Ultimo impar: " << ult << endl;
        }else{
            cout << "No se ingresaron impares " << endl;
        }
    }

    return 0;
}
