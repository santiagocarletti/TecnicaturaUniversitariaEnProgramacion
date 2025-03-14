#include <iostream>

using namespace std;

///10) ENUNCIADO: Dada una lista de números compuesta por grupos donde cada grupo está
///separado del siguiente por un cero, y la lista de números finaliza cuando se
///ingresan dos ceros consecutivos, se pide determinar e informar:
///a) La cantidad de grupos en los que se detecten un total de 4 o más números
///primos consecutivos. Se informa 1 resultado al final.
///b) Para cada uno de los grupos en los que se haya detectado números
///negativos, el mayor y el segundo mayor de los mismos y en qué posiciónestaban dentro del subgrupo. En los grupos sin negativos, informar “Grupo sin
///negativos”. Se informan 4 resultados por cada grupo.
///c) El mayor número primo de todos los grupos, informando además en cual
///grupo y en qué posición del mismo fue detectado. Se informan 3 resultados al final.
///Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.

int main()
{
    //Punto B y C: Pendiente
    int num, con=0, conA=0, conC=0, mPrimo, posC, grC;

    while(con<2){

        int pri=0, conB=0, nomay=0, may=0, pNomay, pMay, aux, pAux, conNeg=0;

        cout << "Numero: ";
        cin >> num;

        if(num==0){
            con++;
        }else{
            con=0;
        }

        while(num!=0){

        int rC=0, i;

        conB++;
        conC++;

        for(i=1; i<=num; i++){

            if(num%i==0){
                rC++;}
            }

            if(rC==2){
                pri++;

                //PUNTO C
                if(conC==1){
                    mPrimo=num;
                    posC=conC;
                    grC=con+1;
                }else if(num>mPrimo){
                    mPrimo=num;
                    posC=conC;
                    grC=con+1;
                }

            }else{
                pri=0;
            }

            if(pri>=4){
                conA++;
            }

            //PUNTO B
            if(num<0){
                conNeg++;
                if(conNeg==1){
                    may=num;
                    pMay=conB;
                }else if(conNeg==2){
                    nomay=num;
                    pNomay=conB;
                    if(nomay>may){
                    aux=nomay;
                    nomay=may;
                    may=aux;
                    pAux=pNomay;
                    pNomay=pMay;
                    pMay=pAux;
                }
                }
                if(num>may){
                    if(may>nomay){
                        nomay=num;
                        pNomay=conB;
                    }
                    may=num;
                    pMay=conB;
                }else if(num>nomay){
                    nomay=num;
                }
            }

        cout << "Numero: ";
        cin >> num;
        }
        con++;
        //PUNTO A
        cout << "========== CAMBIO DE GRUPO ==========" << endl;

        //PUNTO B
        cout << "Mayor negativo: " << may << ", posicion: " << pMay << endl;
        cout << "Segundo mayor negativo: " << nomay << ", posicion: " << pNomay << endl;
    }

    cout << conA << " grupo(s) contiene(n) mas de 3 primos consecutivos." << endl;

    //PUNTO C
    cout << "Mayor primo: " << mPrimo << ". Pos.: " << posC << ". Grupo: " << grC << endl;

    return 0;
}
