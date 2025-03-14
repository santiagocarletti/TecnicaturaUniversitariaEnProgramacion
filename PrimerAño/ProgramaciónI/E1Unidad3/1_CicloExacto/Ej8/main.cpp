#include <iostream>

using namespace std;

///8) ENUNCIADO: Hacer un programa para ingresar una lista de 10 n£meros, luego informar el
///porcentaje de positivos, negativos, y ceros.

int main()
{
    //cout << "Hello world!" << endl;

        float n = 0, c = 0, p = 0, pp = 0, nn = 0, num, i;


    for(i = 0; i<10; i++){

        cout << "Ingrese numero: " << endl;
        cin >> num;

        if(num < 0){
            n++;
            nn+=num;
        }else if(num > 0){
            p++;
            pp+=num;
        }else{
            c++;
        }
    }

    cout << "Neg.: " << n << ". Pos.: " << p << "Cero: " << c << endl;
    cout << "Porc. neg.: " << (nn/n) << ". Porc. pos.: " << (pp/p) << endl;

    return 0;
}
