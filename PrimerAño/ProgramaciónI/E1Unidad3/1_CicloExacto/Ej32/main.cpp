#include <iostream>

using namespace std;

///32) ENUNCIADO: Se ingresa una lista de 10 números enteros y se pide determinar si la lista está
///formada por todos números alternados entre pares e impares o impares y pares.
///Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
///Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
///Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.

int main()
{
    int num, i;
    bool a=1;
    char t;

    for(i=0; i<10; i++){
        cout << "Ingrese numero: " << endl;
        cin >> num;

        if(a){

            if(i!=0){

                if(num%2==0){

                    if(t=='i'){
                        a=1;
                        t='p';
                    }else{
                        a=0;
                        t='p';
                    }

                }else if(t=='p'){
                    a=1;
                    t='i';
                }else{
                    a=0;
                    t='i';
                }

            }else if(num%2==0){
                t='p';
            }else{
                t='i';
            }

        }

    }

    if(a){
        cout << "Alternados" << endl;
    }else{
        cout << "No alternados" << endl;
    }

    return 0;
}
