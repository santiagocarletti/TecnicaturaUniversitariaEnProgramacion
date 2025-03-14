#include <iostream>

using namespace std;

///23) ENUNCIADO: Hacer un programa para ingresar un n£mero de mes y listar por pantalla a qu‚
///bimestre corresponde ese mes. Tener en cuenta esta lista:
///Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
///Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.
///Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles,
///de forma tal que si en un hipot‚tico caso, hubiera a¤os de 200 meses su
///diagrama no deba ser modificado en tal situaci¢n.
///Recordar tambi‚n que la divisi¢n directa con el operador / genera un resultado
///con fracci¢n. Por ejemplo si mes=7 y usted calcula bimestre=7/2 el resultado
///que obtendr  es bimestre= 3.5, lo cual es incorrecto.

int main()
{
    //cout << "Hello world!" << endl;

    int mes, bi;

    cout << "Ingrese mes: " << endl;
    cin >> mes;

    if (mes % 2 == 0) {
        bi = mes / 2;
    }else{
        bi = (mes + 1) / 2;
    }

    cout << "Bimestre: " << bi << endl;

    return 0;
}
