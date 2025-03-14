#include <iostream>
#include <locale>

using namespace std;

///10) ENUNCIADO: Hacer una funci¢n que reciba un c¢digo de naipe (del 1 al 40) y determine el
///n£mero y el palo de la baraja espa¤ola de 40 cartas. La funci¢n debe recibir por
///referencia el n£mero de naipe y el nombre del palo y por valor el c¢digo de naipe.
///Tener en cuenta que:
///Los c¢digos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
///21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.

void Naipes(int cod, int& numNaipe, string& palo){

    if(cod<=10){
        palo="espada";

        if(cod>7){
            numNaipe=(cod+2);
        }else{
            numNaipe=cod;
        }

    }
    if(cod>10&&cod<21){
        palo="basto";
        cod=cod-10;

        if(cod>7){
            numNaipe=(cod+2);
        }else{
            numNaipe=cod;
        }

    }
    if(cod>20&&cod<31){
        palo="copa";
        cod=cod-20;

        if(cod>7){
            numNaipe=(cod+2);
        }else{
            numNaipe=cod;
        }

    }
    if(cod>30){
        palo="oro";
        cod=cod-30;

        if(cod>7){
            numNaipe=(cod+2);
        }else{
            numNaipe=cod;
        }

    }

}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int codigo, numero=0;
    string paloCarta="palo";

    cout << "Código del naipe: ";
    cin >> codigo;

    Naipes(codigo, numero, paloCarta);

    cout << "Carta: " << numero << " de " << paloCarta;

    return 0;
}
