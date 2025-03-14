#include <iostream>
#include <locale>

using namespace std;

///13) ENUNCIADO: Escribir una funci¢n llamada calcularPotencia para que, dados dos n£meros
///enteros, calcule y devuelva la potencia del primero a la del segundo. Tener en
///cuenta las siguientes posibilidades:
///calcularPotencia(2, 3) >>> 8
///calcularPotencia(2, 0) >>> 1
///calcularPotencia(2, -3) >>> 0,125

float CalcularPotencia(float primero, float segundo){

    int i;
    float resultado=0;

    if(segundo>0 && segundo!=1){

        for(i=1; i<segundo; i++){
            if(i==1){
                resultado=primero*primero;
            }else{
                resultado=resultado*primero;
            }
        }
    }else{
        if(segundo==0){
            resultado=1;
        }

        if(segundo<0){

            segundo=segundo*-1;

            for(i=1; i<segundo; i++){
            if(i==1){
                resultado=primero*primero;
            }else{
                resultado=resultado*primero;
            }
        }

            resultado=1/resultado;

        }
        if(segundo==1){
            resultado=primero;
        }
    }

    return resultado;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    float n1, n2, res;

    cout << "Primer número: ";
    cin >> n1;
    cout << "Segundo número: ";
    cin >> n2;

    res = CalcularPotencia(n1, n2);

    cout << "Resultado = " << res;

    return 0;
}
