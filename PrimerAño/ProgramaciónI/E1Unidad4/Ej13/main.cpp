#include <iostream>

using namespace std;

///13) ENUNCIADO: Se dispone de una lista de 10 grupos de n£meros y cada uno de los grupos
///estar  compuesto por 5 n£meros. Se pide determinar e informar:
///a) Para cada uno de los 10 grupos el promedio de los n£meros que lo
///componen. Se informa un resultado para cada uno de los 10 grupos.
///b) Determinar e informar el valor m¡nimo de todos los grupos, indicando en cu l
///grupo se encontr¢ y su posici¢n relativa en el mismo. Se informan 2
///resultados al final de todo.
///c) Indicar cu l de los 10 grupos tiene el mayor de los promedios y cu l es ese
///valor promedio. Se informan 2 resultados al final de todo.

int main()
{
    int num, i, mini, posB, grB, promM, grC;

    for(i=0; i<=3; i++){

        int j, conA=0, acuA=0, promA;

        for(j=0; j<=2; j++){

        conA++;

        cout << "Numero: ";
        cin >> num;

        acuA+=num;

        if(i==0 && j==0){
            mini=num;
            posB=j+1;
            grB=i+1;

        }else if(num<mini){
            mini=num;
            posB=j+1;
            grB=i+1;
        }

        //CIERRA FOR 2
        }

        promA=acuA/conA;

        cout << "Promedio: " << promA << endl;

        if(i==0){
            promM=promA;
            grC=i+1;
        }else if(promA>promM){
            promM=promA;
            grC=i+1;
        }

    //CIERRA PRIMER FOR
    }
    cout << "Valor minimo: " << mini << ". Posicion: " << posB << ". Grupo: " << grB << endl;

    cout << "Promedio mayor: " << promM << ". Grupo: " << grC << endl;

    return 0;
}
