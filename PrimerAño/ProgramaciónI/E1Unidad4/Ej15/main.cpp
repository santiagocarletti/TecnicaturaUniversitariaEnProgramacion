#include <iostream>

using namespace std;

///15) ENUNCIADO: Se dispone de una lista de 20 grupos de n£meros y cada uno de los grupos
///estar  compuesto por 10 n£meros. Se pide determinar e informar:
///a) Informar cu ntos grupos est n formados por todos n£meros alternados
///perfectos y no perfectos. Se informa 1 resultado al final.
///Ejemplo 1 de un grupo alternado: 6, 12, 28, 18, 6, 13, 6, 15
///Ejemplo 2 de un grupo alternado: 12, 6, 15, 496, 25, 28, 15, 6
///b) Para cada uno de los grupos el porcentaje de n£meros primos y no primos.
///Se informan 2 resultados para cada grupo.
///c) La cantidad de grupos donde se detectan 4 n£meros primos consecutivos.
///Se informa un resultado al final.

int main()
{
    int i, altA=0, pC3=0;

    for(i=0; i<=3; i++){

        bool p=0, i=0, pr=0;
        int conA=0, num, j, priB=0, pC, pC2=0;

        for(j=0; j<=3; j++){

                int k, acuA=0, l, rC=0;

                cout << "Numero: " << endl;
                cin >> num;

                for(k=1; k<num; k++){

                    if(num%k==0){
                        acuA+=k;
                    }
                //CIERRE FOR K
                }

                if(acuA==num){
                    if(i){
                        conA++;
                        p=1;
                    }else{
                        p=1;
                    }
                }else if(p){
                    conA++;
                    i=1;
                }else{
                    i=1;
                }

                //PUNTO B
                for(l=1; l<=num; l++){
                    if(num%l==0){
                        rC++;
                    }
                }
                if(rC==2){
                    priB++;
                    //PUNTO C
                    if(!pr){
                        pr=1;
                        pC=j;
                    }else if(j-pC==1){
                        pC2++;
                        pC=j;
                    }else{
                        pC2=0;
                        pC=j;
                    }
                    }

        //CIERRE FOR J
        }
        //SEPARADOR GRUPOS
        cout << "================" << endl;

        //PUNTO A
        if(j-conA<2){
            altA++;
        }

        //PUNTO B
        cout << "Porc. Primos: " << priB*100/j << ". Porc. No Primos: " << (j-priB)*100/j << endl;

        //PUNTO C
        if(pC2==2){
            pC3++;
        }

    //CIERRE FOR I
    }
    cout << "Grupos alternados per./imp.: " << altA << endl;

    //PUNTO C
    cout << "Grupos con 2 primos consec.: " << pC3 << endl;

    return 0;
}
