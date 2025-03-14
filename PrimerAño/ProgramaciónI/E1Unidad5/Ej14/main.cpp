#include <iostream>
#include <locale>

using namespace std;

///14) ENUNCIADO: Hacer una funci¢n llamada esNumeroArmstrong que reciba un n£mero entero
///y devuelva true si el n£mero enviado es un N£mero Armstrong y false si no lo es.
///NOTA: Un n£mero N es un n£mero Armstrong si la suma de sus cifras elevadas
///a la cantidad de cifras del n£mero da como resultado N.
///Por ejemplo:
///371 tiene 3 cifras.
///Luego:
///3(exp3) + 7(exp3) + 1(exp3) >>> 371
///27 + 343 + 1 >>> 371

bool EsAmnstrong(float primero)
{
    bool siEs;
    int j, acu=0;
    string numEnLetras = to_string(primero);
    int tamanio = numEnLetras.size();

    for(j=0; j<tamanio; j++){

    int i;
    float resultado=0, segundo=tamanio;

    if(segundo>0 && segundo!=1)
    {

        for(i=1; i<segundo; i++)
        {
            if(i==1)
            {
                resultado=primero*primero;
            }
            else
            {
                resultado=resultado*primero;
            }
        }
    }
    else
    {
        if(segundo==0)
        {
            resultado=1;
        }

        if(segundo<0)
        {

            segundo=segundo*-1;

            for(i=1; i<segundo; i++)
            {
                if(i==1)
                {
                    resultado=primero*primero;
                }
                else
                {
                    resultado=resultado*primero;
                }
            }

            resultado=1/resultado;

        }
        if(segundo==1)
        {
            resultado=primero;
        }
    }
        acu+=resultado;
    }
    if(acu==primero){
        siEs=1;
    }else{
        siEs=0;
    }
    return siEs;
}

int main()
{
    setlocale(LC_ALL, "Spanish");

    //string numEnLetras;
    int numero;
    bool amnstrong;
    //char caracter;

    cout << "Número: ";
    cin >> numero;

    //caracter = numEnLetras[2];

    //cout << caracter;

    amnstrong = EsAmnstrong(numero);

    if(amnstrong){
        cout << "Es número Amnstrong.";
    }else{
        cout << "No es número Amnstrong.";
    }

    return 0;
}
