#include <iostream>

using namespace std;

///ENUNCIADO: Hacer un programa para ingresar por teclado la fecha de nacimiento de una
///persona, ingresando d¡a, mes y a¤o como 3 datos individuales. Luego ingresar
///la fecha actual ingresando d¡a, mes y a¤o como 3 datos individuales. Calcular
///luego la edad en a¤os de esa persona y listar por pantalla.
///Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
///es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci‚n los cumple en
///diciembre.
///Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
///es 26/2/2019 la edad de esa persona es 19.
///Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
///es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 d¡as para cumplir los 19 a¤os.

int main()
{
    int diaN, mesN, anioN, diaA, mesA, anioA, edad;

    cout << "Ingrese el dia de nacimiento: " << endl;
    cin >> diaN;
    cout << "Ingrese el mes de nacimiento: " << endl;
    cin >> mesN;
    cout << "Ingrese el anio de nacimiento: " << endl;
    cin >> anioN;
    cout << "Ingrese el dia actual: " << endl;
    cin >> diaA;
    cout << "Ingrese el mes actual: " << endl;
    cin >> mesA;
    cout << "Ingrese el anio actual: " << endl;
    cin >> anioA;

    edad = anioA - anioN;

    if(mesN>mesA){
        edad--;
    }else if(mesN==mesA){
        if(diaN>diaA){
            edad--;
        }
    }

    cout << "La edad es: " << edad << endl;

    return 0;
}
