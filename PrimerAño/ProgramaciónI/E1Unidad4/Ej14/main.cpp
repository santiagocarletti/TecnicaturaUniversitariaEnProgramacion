#include <iostream>
#include <locale>

using namespace std;

///14) ENUNCIADO: Dada una lista de n£meros compuesta por grupos, cada grupo separado del
///siguiente por un cero, ingresando un n£mero cero cuando no hay m s grupos,
///se pide determinar e informar:
///a) Para cada uno de los grupos el m ximo de los n£meros negativos y el
///m¡nimo de los n£meros positivos. Se informan 2 resultados por cada grupo.
///b) Para cada uno de los grupos el porcentaje de n£meros pares y n£meros
///impares. Se informan 2 resultados por cada grupo.
///c) Cu ntos n£meros primos hab¡a en total entre los grupos. Se informa 1
///resultado al final.

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num, aC=0, conPri=0;

    while(aC<2){

    int mNeg=0, minP=0, cp=0, ci=0, cb=0;

    cout << "Número: ";
    cin >> num;

        while(num!=0){

            int rC=0, i;

            aC=0;

            //PUNTO A
            if(num<0){
                if(mNeg==0){
                    mNeg=num;
                }else if(num>mNeg){
                    mNeg=num;
                }
            }else if(minP==0){
                minP=num;
            }else if(minP>num){
                minP=num;
            }

            //PUNTO B
            cb++;
            if(num%2==0){
                cp++;
            }else{
                ci++;
            }

            //PUNTO C
            for(i=1; i<=num; i++){
                if(num%i==0){
                    rC++;
                }
            }
            if(rC==2){
                conPri++;
            }

            cout << "Número: ";
            cin >> num;
        //CIERRE DEL SEGUNDO WHILE
        }
        if(num==0){
            aC++;
        }

        //PUNTO A
        cout << "Máximo Negativo: " << mNeg << ". Mínimo Positivo: " << minP << endl;

        //Punto B
        cout << "Porc. Pares: " << (cp*100/cb) << "%. Porc. Impares: " << (ci*100/cb) << "%." << endl;

    //CIERRE DEL PRIMER WHILE
    }

    cout << "Total de números primos: " << conPri << endl;

    return 0;
}
