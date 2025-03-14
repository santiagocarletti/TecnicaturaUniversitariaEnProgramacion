#include <iostream>
#include <locale>

using namespace std;

///9) ENUNCIADO: Escribir una funci¢n que reciba un n£mero y retorne 1 si el n£mero recibido es
///perfecto y 0 si no es perfecto.
///Hacer un programa para que, dada una lista de n£meros que finaliza con cero,
///informe cu ntos de ellos eran perfectos. Utilizar la funci¢n solicitada.

bool EsPerfecto(int nro){

    bool Es=0;
    int i, acu=0;

    for(i=1; i<nro; i++){
        if(nro%i==0){
            acu+=i;
        }
    }

    if(acu==nro){
        Es=1;
    }
    return Es;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int n, contador=0;
    bool numPerf;

    cout << "Número: ";
    cin >> n;

    numPerf = EsPerfecto(n);

    if(numPerf){
        cout << "Perfecto";
    }else{
        cout << "No perfecto";
    }

    return 0;
}
