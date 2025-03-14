#include <iostream>

using namespace std;

///6) ENUNCIADO: Hacer un programa para ingresar un N valor que indica la cantidad de n£meros
///que componen una lista y luego solicitar se ingresen esos N n£meros. Se pide
///informar cuantos son positivos
///Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
///listar : Cantidad de Positivos: 4
///Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
///Se listar : Cantidad de Positivos: 0

int main()
{
    //cout << "Hello world!" << endl;

    int can, i, num, neg = 0, cer = 0, pos = 0;

    cout << "Ingrese cantidad: " << endl;
    cin >> can;

    for(i = 0; i<can; i++){

        cout << "Ingrese num: " << endl;
        cin >> num;

        if(num == 0){
            cer++;
        }else if(num<0){
            neg++;
        }else{
            pos++;
        }
    }

    cout << "Negativos: " << neg << ". Cero: " << cer << ". Positivos: " << pos << endl;

    return 0;
}
