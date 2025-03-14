#include <iostream>

using namespace std;

///8) ENUNCIADO: Hacer un programa para ingresar por teclado 5 grupos compuestos por
///n£meros ordenados de menor a mayor. El final de cada grupo se detecta al
///ingresar un n£mero menor a su anterior.Se debe obtener y emitir:
///a) Para cada uno de los grupos la cantidad de n£meros primos que lo
///componen. Se informa 1 resultado por cada grupo.
///b) El menor n£mero par de cada uno de los grupos. Se informa 1 resultado por
///cada grupo.
///c) El ante£ltimo y £ltimo n£mero positivo de cada uno de los grupos. Se
///informan 2 resultados por cada grupo.
///Ejemplo de c¢mo se conforman los grupos:
///
///Grupo 1: -20, -5, 8
///Grupo 2: 2, 20, 35, 42
///Grupo 3: 12, 22, 23
///Grupo 4: 7, 12, 18, 23, 80
///Grupo 5: 12, 24, 36, -5

int main()
{
    int num, i;

    for(i=0; i<5; i++){

            int parMenor=1, ant=-1, ulti=-1, ult;

            cout << "Numero: ";
            cin >> num;

            if(i==0){
                ult=num;
            }

        while(num>=ult){

            ult=num;

            if(num%2==0){
                if(parMenor==1){
                    parMenor=num;
                }else if(num<parMenor){
                    parMenor=num;
                }
            }

            if(num>0){
                if(ulti==-1){
                    ulti=num;
                }else{
                    ant=ulti;
                    ulti=num;
                }
            }

            cout << "Numero: ";
            cin >> num;

        }

        ult=num;

        cout << "Par menor: " << parMenor << endl;

        if(ant!=-1){
            cout << "Anteultimo: " << ant << endl;
        }
        if(ulti!=-1){
            cout << "Ultimo: " << ulti << endl;
        }

    }

    return 0;
}
