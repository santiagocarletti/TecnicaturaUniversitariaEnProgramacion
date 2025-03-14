#include <iostream>

using namespace std;

///11) ENUNCIADO: Dada una lista de n£meros compuesta por 10 grupos y cada grupo separado del
///siguiente por un cero, se pide determinar e informar:
///a) Para cada uno de los grupos el m ximo y m¡nimo de los n£meros pares. Se
///informan 2 resultados para cada grupo.
///b) La cantidad de grupos donde se detectan 2 n£meros perfectos
///consecutivos. Se informa 1 resultado al final.
///c) Informar cu ntos grupos est n formados por todos n£meros alternados
///positivos y negativos. Se informa 1 resultado al final.
///Ejemplo 1 de un grupo alternado: 2, -3, 8, -10, 25, -13, 0
///Ejemplo 2 de un grupo alternado: -2, 3, -8, 10, -25, 6, 0

int main()
{
    int i, num, conPB=0;

    for(i=0; i<2; i++){

        int minP=1, maxP=1, aux;

        //PUNTO B
        int j, conB, acuB=0;

        //PUNTO  C
        bool p=0, n=0;
        int conC=0, a=0;

        cout << "Numero: ";
        cin >> num;

        while(num!=0){

                if(num%2==0){
                    if(minP==1){
                        minP=num;
                    }else if(maxP==1){
                        maxP=num;
                    }else if(minP>maxP){
                        aux=minP;
                        minP=maxP;
                        maxP=aux;
                    }
                    if(num<minP){
                        minP=num;
                    }else if(num>maxP){
                        maxP=num;
                    }
                }

                //PUNTO B
                for(j=1; j<=num; j++){
                    if(num%j==0){
                        acuB+=j;
                    }
                }
                if(acuB==num){
                    conB++;
                }else{
                    conB--;
                }
                if(conB==3){
                    conPB++;
                    conB--;
                }

        cout << "Numero: ";
        cin >> num;

        conC++;
        if(conC==1){
            if(num<0){
                n=1;
            }else{
                p=1;
            }
        }

        if(num<0 && p==1){
            a++;
            n=1;
        }else{
            a=0;
        }

        if(num>0 && n==1){
            a++;
        }else{
            p=1;
        }


        //CIERRE WHILE
        }

        cout << "Min. par: " << minP << ". Max. par: " << maxP << endl;

        //PUNTO C

        if(a>0){
            cout << "Alternados" << endl;
        }else{
            cout << "No alternados" << endl;
        }

    }


        //PUNTO B
        cout << "Grupos con dos perf. consec.: " << conPB << endl;

    return 0;
}
