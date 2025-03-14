#include <iostream>

using namespace std;

///12) ENUNCIADO: Se dispone de una lista de 10 grupos de n£meros y cada uno de los grupos
///estar  compuesto por 5 n£meros. Se pide determinar e informar:
///a) Para cada uno de los 10 grupos la cantidad de n£meros positivos, negativos
///y ceros que lo componen. Se informan 3 resultados para cada uno de los 10
///grupos.
///b) Para cada uno de los 10 grupos el £ltimo n£mero primo y en qu‚ orden
///apareci¢ en ese grupo, si en un grupo no hubiera n£meros primos informar
///con un cartel aclaratorio. Se informan 2 resultados para cada uno de los 10
///grupos.
///c) Informar cu ntos n£meros impares hay en total entre los 10 grupos. Se
///informa un resultado al final de todo, es decir no debe informar resultados
///grupo por grupo.

int main()
{
    int impC=0, i;

    for(i=0; i<4; i++){

        int pos=0, neg=0, cero=0, j, pri=0, posic, num;

        for(j=0; j<3; j++){

            int rC=0, k;

            cout << "Numero: " << endl;
            cin >> num;

            if(num>0){
                pos++;
            }else if(num<0){
                neg++;
            }else{
                cero++;
            }

            for(k=1; k<=num; k++){
                if(num%k==0){
                    rC++;
                }
            }
            if(rC==2){
                pri=num;
                posic=j+1;
            }

            if(num%2!=0){
                impC++;
            }

        //CIERRE FOR 2
        }

        if(pri!=0){
        cout << "Ultimo primo: " << pri << ". Pos.: " << posic << endl;
        }else{
        cout << "Sin primos" << endl;
        }

        cout << neg << " negativos, " << cero << " ceros, " << pos << " positivos." << endl;

        //CIERRE FOR 1
        }
        cout << "Total de impares: " << impC << endl;


    return 0;
}
