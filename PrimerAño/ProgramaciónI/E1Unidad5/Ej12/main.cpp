#include <iostream>
#include <locale>

using namespace std;

///12) ENUNCIADO: Escribir una funci¢n de nombre validarFecha que reciba 3 valores
///correspondientes al d¡a, mes y a¤o, y devuelva 1 si los valores recibidos
///corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la
///funci¢n recibe 30, 2, 2000 deber  devolver 0; y si recibe 12, 2, 1990, deber 
///devolver 1.

    bool validarFecha(int d, int m, int a){

        bool correcto=true;

        if((a%4==0 && a%100!=0) || (a%4==0 && a%400==0)){
                if(d<29){
                    correcto=true;
                }else{
                    correcto=false;
                }
        }
        return correcto;
    }

int main()
{
    setlocale(LC_ALL, "Spanish");

    int dia, mes, anio;
    bool bien;

    cout << "Día: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Año: ";
    cin >> anio;

    bien = validarFecha(dia, mes, anio);

    if(bien){
        cout << "Fecha válida";
    }else{
        cout << "Fecha incorrecta";
    }

    return 0;
}
