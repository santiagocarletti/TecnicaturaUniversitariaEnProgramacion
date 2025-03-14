#include <iostream>

using namespace std;

///14) ENUNCIADO: Hacer un programa para ingresar por teclado la fecha de nacimiento de una
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
    //cout << "Hello world!" << endl;

    int d, m, a, da, ma, aa, e;

    cout << "Dia nac.: ";
    cin >> d;
    cout << "Mes nac.: ";
    cin >> m;
    cout << "Anio nac.: ";
    cin >> a;

    cout << "Dia actual: ";
    cin >> da;
    cout << "Mes actual: ";
    cin >> ma;
    cout << "anio actual: ";
    cin >> aa;

    if (ma >= m & da >= d) {
        e = aa - a;
    } else {
            e = (aa - a) -1;
    }

    cout << "Edad: " << e;

    return 0;
}
