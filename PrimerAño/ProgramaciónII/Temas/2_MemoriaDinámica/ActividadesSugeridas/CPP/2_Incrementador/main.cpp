#include <iostream>
using namespace std;

void incrementar(int& valorIncremento, int& incrementador, int& incrementos);

///CONSIGNA: Hacer un programa que permita representar un Incrementador. Un incrementador es un
///n£mero entero que comienza con un valor inicial y pueda incrementarse a partir de un valor
///de incremento. Tambi‚n deber  llevar la cuenta de la cantidad de veces que increment¢.
///Por ejemplo, si nuestro incrementador comienza en 0 y el valor de incremento es de 50. En
///cada incremento, aumentar  de 50 en 50. Ejemplo: 0, 50, 100, 150, etc.
///Restricciones:
///- El valor del incrementador no puede nunca disminuir.
///- La cantidad de veces que se increment¢ siempre debe aumentar de uno en uno.
///Tampoco puede disminuir.
///- Siempre que el incrementador aumente debe hacerlo por la misma cantidad definida
///en el valor de incremento

int main()
{
    int valorIncremento, incrementador=0, incrementos=0;
    string incrementarOpcion;

    cout << "Valor de incremento: ";
    cin >> valorIncremento;

    cout << endl << "Incrementar? si/no: ";
    cin >> incrementarOpcion;

    while(incrementarOpcion == "si"){

        incrementar(valorIncremento, incrementador, incrementos);

        cout << endl << "Valor actual: " << incrementador << endl << endl << "Cant. de increm.: " << incrementos << endl << endl;

        cout << "Incrementar? si/no: ";
        cin >> incrementarOpcion;
    }

    return 0;
}

void incrementar(int& valorIncremento, int& incrementador, int& incrementos){

    incrementador+=valorIncremento;
    incrementos++;

}
