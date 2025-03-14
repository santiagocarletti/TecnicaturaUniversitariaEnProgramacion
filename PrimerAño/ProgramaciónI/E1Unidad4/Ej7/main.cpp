#include <iostream>

using namespace std;

///7) ENUNCIADO: Se dispone de una lista de 10 grupos de n£meros enteros separados entre ellos
///por ceros. Se pide determinar e informar:
///a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
///b) Determinar e informar el valor m¡nimo de todos los grupos, indicando en qu‚
///grupo se encontr¢ y su posici¢n relativa en el mismo. Se informan 3 resultados
///al final.
///c) El mayor de los promedios y a que grupo pertenec¡a. Se informan 2
///resultados al final.

int main()
{
    int num, i, mini, posPB, grPB, pMayor, grPC;

    for(i=1; i<=3; i++){

        int con=0, acuA=0, prom;

        cout << "Numero: ";
        cin >> num;

        while(num!=0){

            con++;
            acuA+=num;

            if(i==1){
                mini=num;
                posPB=con;
                grPB=i;
            }else if(num<mini){
                mini=num;
                posPB=con;
                grPB=i;
            }

        cout << "Numero: ";
        cin >> num;

        //CIERRE WHILE
        }

        prom=acuA/con;

        cout << "Promedio grupo: " << i << ": " << prom << endl;

        if(i==1){
            pMayor=prom;
            grPC=i;
        }else if(prom>pMayor){
            pMayor=prom;
            grPC=i;
        }

    //CIERRE FOR
    }

    cout << "Valor minimo: " << mini << ". Grupo: " << grPB << ". Posicion en el grupo: " << posPB << endl;

    cout << "Porcentaje mayor: " << pMayor << ". Grupo: " << grPC << endl;

    return 0;
}
