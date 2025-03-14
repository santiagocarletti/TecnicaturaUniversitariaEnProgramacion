#include <iostream>

using namespace std;

///4) ENUNCIADO: Dada una lista de n£meros compuesta por 10 grupos y cada grupo separado del
///siguiente por un cero, se pide determinar e informar:
///a) Para cada uno de los grupos el m ximo de los n£meros pares y el m ximo de
///los n£meros impares. Se informan 2 resultados por cada grupo.
///b) Para cada uno de los grupos el porcentaje de n£meros negativos y n£meros
///positivos. Se informan 2 resultados por cada grupo.
///c) Cu ntos n£meros positivos hab¡a en total entre los 10 grupos. Se informa 1
///resultado al final.

int main()
{
    int num, conPC=0, i;

    for(i=0; i<10; i++){

    bool bp=0, bi=0;
    int parM, impm, conP=0, conN=0;

    cout << "Numero: ";
    cin >> num;

    while(num!=0){

    if(num%2==0){
        if(!bp){
            bp=1;
            parM=num;
        }else if(num>parM){
            parM=num;
        }
    }else if(!bi){
        bi=1;
        impm=num;
    }else if(num<impm){
        impm=num;
    }

    if(num<0){
        conN++;
    }else{
        conP++;
    }

    cout << "Numero: ";
    cin >> num;

    //CIERRA WHILE
    }

    if(bp){
        cout << "El mayor numero par en este grupo es: " << parM << endl;
    }else{
        cout << "No se ingresaron numeros pares en este grupo" << endl;
    }

    if(bi){
        cout << "El menor numero impar de este grupo es: " << impm << endl;
    }else{
        cout << "No se ingresaron numeros impares en este grupo" << endl;
    }

    conPC+=conP;

    cout << "Porcentaje de numeros negativos de este grupo: %" << conN*100/(conN+conP) << endl;
    cout << "Porcentaje de numeros positivos de este grupo: %" << conP*100/(conN+conP) << endl;

    //CIERRA FOR
    }

    cout << "Numeros positivos totales: " << conPC << endl;

    return 0;
}
