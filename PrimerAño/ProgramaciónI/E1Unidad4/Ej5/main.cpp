#include <iostream>

using namespace std;

///5) ENUNCIADO: Se dispone de una lista de 10 grupos de n£meros enteros separados entre ellos
///por ceros. Se pide determinar e informar:
///a) El n£mero de grupo con mayor porcentaje de n£meros impares positivos
///respecto al total de n£meros que forman el grupo. Se informa 1 resultado al
///final.
///b) Para cada grupo el £ltimo n£mero primo y en qu‚ orden apareci¢ en ese
///grupo, si en un grupo no hubiera n£meros primos informar con un cartel
///aclaratorio. Se informan 2 resultados por cada grupo.
///c) Informar cuantos grupos est n formados por todos n£meros ordenados de
///mayor a menor. Se informa 1 resultado al final.

int main()
{
    int i, grPA, porPA, confinalPC=0;

    for(i=1; i<=3; i++){

        int con=0, porIP, primo, conIP=0,pos, ult, conPC=0, j, num;

        cout << "Número: ";
        cin >> num;

        while(num!=0){

            int conRC=0;

            if(num%2!=0 && num>0){
                conIP++;
                con++;
            }else{
                con++;
            }

            for(j=1; j<=num; j++){

            if(num%j==0){
                conRC++;
            }

            }

            if(conRC==2){
                primo=num;
                pos=con;
            }

            if(con==1){
                ult=num;
                conPC++;
            }else if(num<ult){
                ult=num;
                conPC++;
            }


        cout << "Numero: ";
        cin >> num;

        }

        porIP=conIP*100/con;

        if(i==1){
            grPA=i;
            porPA=porIP;
        }else if(porIP>porPA){
            porPA=porIP;
            grPA=i;
        }

        if(primo==0){
            cout << "No primos" << endl;
        }else{
            cout << "Ultimo primo: " << primo << ". Posicion: " << pos << endl;
            primo=0;
        }

        if(con==conPC){
            confinalPC++;
        }
    }

    cout << "Grupo con mayor porcentaje de numeros impares positivos respecto al total de numeros que forman el grupo" << grPA << endl;

    cout << confinalPC << " grupos estan ordenados de mayor a menor" << endl;

    return 0;
}
