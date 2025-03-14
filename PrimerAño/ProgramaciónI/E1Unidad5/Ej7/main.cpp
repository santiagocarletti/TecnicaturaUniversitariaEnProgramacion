#include <iostream>
#include <locale>

using namespace std;

///7) ENUNCIADO: Escribir una funci¢n CalcularMaximoAbsoluto que reciba dos n£meros y
///retorne el m ximo absoluto de ambos. Por ejemplo el m ximo absoluto de los
///n£meros -40 y 20 es 40.
///Hacer un programa para ingresar dos n£meros y, utilizando
///CalcularMaximoAbsoluto, emita luego el n£mero mayor absoluto de ambos.

int CalcularMaximoAbsoluto(int n1, int n2){

    int maxAbs;

    if(n1<0){
        n1=n1*(-1);
    }
    if(n2<0){
        n2=n2*(-1);
    }

    if(n1>n2){
        maxAbs=n1;
    }else{
        maxAbs=n2;
    }

    return maxAbs;

}

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num1, num2, mAbs;

    cout << "1º Núm.: ";
    cin >> num1;
    cout << "2º Núm.: ";
    cin >> num2;

    mAbs = CalcularMaximoAbsoluto(num1, num2);

    cout << "Máximo Absoluto = " << mAbs;

    return 0;
}
