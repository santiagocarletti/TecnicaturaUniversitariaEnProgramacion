#include <iostream>

using namespace std;

///12) ENUNCIADO: Hacer un programa para ingresar una lista de 10 n£meros e informar el m ximo
///de los negativos y el m¡nimo de los positivos.
///Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M ximo Negativo -3. M¡nimo Positivo 2.

int main()
{
    //cout << "Hello world!" << endl;

    int i, num, maxn = 0, minp = 0;

    for(i= 0; i<10; i++){
        cout << "Ingrese numero: " << endl;
        cin >> num;

        if(num>0){

            if(minp==0){
                minp=num;
                }else if(num<minp){
                minp=num;
                }

                        }else if(maxn==0){
                        maxn=num;
                        }else if(num>maxn){
                        maxn=num;
                        }
    }
    cout << "Minimo positivo: " << minp << ". Maximo negativo: " << maxn << endl;

    return 0;
}
