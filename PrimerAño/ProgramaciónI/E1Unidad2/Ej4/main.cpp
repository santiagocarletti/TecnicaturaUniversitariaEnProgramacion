#include <iostream>

using namespace std;

///4) ENUNCIADO: Hacer un programa para ingresar por teclado dos n�meros y luego informar por
///pantalla la diferencia entre ambos.
///Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
///Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
///Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
///Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO
///porque la diferencia absoluta siempre es un valor positivo.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, r;

    cout << "Ingrese 1er numero: ";
    cin >> a;

    cout << "Ingrese 2do numero :";
    cin >> b;

    r = a - b;

    if (r < 0){
        cout << r * (-1);
    } else{
        cout << r;
    }

    return 0;
}
