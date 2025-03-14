#include <iostream>

using namespace std;

///19) ENUNCIADO: Se define como divisores propios de un n£mero a aquellos que son sus
///divisores excluyendo al n£mero en s¡ mismo.
///Ejemplo A. Los divisores propios del 4 son: 1 y 2.
///Ejemplo B. Los divisores propios del 12 son; 1, 2, 3, 4 y 6.
///Se define a un n£mero como perfecto cuando la suma de todos sus divisores
///propios coincide con el n£mero en s¡ mismo.
///Ejemplo A: 6 es n£mero perfecto pues 1+2+3=6
///Ejemplo B: 28 es n£mero perfecto pues 1+2+4+7+14=28
///Ejemplo: 12 no es n£mero perfecto pues 1+2+3+4+6=16
///Hacer un programa para ingresar un n£mero y luego informar con un cartel
///aclaratorio si el mismo es un n£mero perfecto o no es un n£mero perfecto.

int main()
{
   int num, con=1, rc=0, acu=0;

   cout << "Ingrere numero: " << endl;
   cin >> num;

   while(con<num){

    if(num%con==0){
        rc++;
        acu+=con;
    }

    con++;

   }

   if(acu==num){
    cout << "Numero perfecto" << endl;
   }else{
    cout << "Numero no perfecto" << endl;
   }

    return 0;
}
