#include <iostream>
#include <locale>

using namespace std;

///4) ENUNCIADO: Hacer una funci¢n llamada EsPrimoSophieGermain que reciba un n£mero
///entero y determine si el mismo es un n£mero primo de Sophie Germain. Debe
///devolver verdadero si lo es y falso si no lo es.
///NOTA: En teor¡a de n£meros, se dice que un n£mero natural es un n£mero
///primo de Sophie Germain, si el n£mero n es primo y 2*n+1 tambi‚n lo es.Ejemplo:
///El n£mero 2 es n£mero primo de Sophie Germain porque:
///2 es primo
///2*2+1 >>> 5 es primo.
///Hacer un programa para ingresar un n£mero un n£mero y, utilizando
///EsPrimoSophieGermain, emita luego un cartel indicando si el n£mero
///ingresado es primo Sophie Germain o no lo es.

bool EsPrimoSG(int n){
    bool primoSG=0;

    int i, j, CRC=0, sophie, CRC2=0;

    for(i=1; i<=n; i++){
        if(n%i==0){
            CRC++;
        }
    }
    if(CRC==2){
        sophie=(2*n)+1;
        for(j=1; j<=sophie; j++){
            if(sophie%j==0){
                CRC2++;
            }
        }
        if(CRC2==2){
            primoSG=true;
        }
    }

    return primoSG;
}

int main()
{
    setlocale(LC_ALL, "Spanish");


    int nro;
    bool Germain;

    cout << "Ingrese Nro.: ";
    cin >> nro;

    Germain = EsPrimoSG(nro);

    if(Germain){
        cout << "Primo Sophie Germain.";
    }else{
        cout << "No primo Sophie Germain.";
    }

    return 0;
}
