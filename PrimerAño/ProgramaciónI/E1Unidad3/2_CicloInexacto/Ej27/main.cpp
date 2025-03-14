#include <iostream>

using namespace std;

///27) ENUNCIADO: Una Universidad dispone de diez aulas para acomodar a una cantidad de
///asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se
///necesita un programa que solicite la cantidad de asistentes a la charla y
///determine la cantidad total de aulas necesarias para acomodarlos a todos.
///Por ejemplo:
///Si los asistentes son 120 se necesitarán 2 aulas.
///Si los asistentes son 123 se necesitarán 3 aulas.
///Si los asistentes son 40 se necesitará 1 aula.
///DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo.

int main()
{
    int asist, capac=60, aulas=0;

    cout << "Cantidad de asistentes: " << endl;
    cin >> asist;

    while(asist>0){

        asist-=capac;
        aulas++;

    }

    cout << aulas << " aula(s)." << endl;

    return 0;
}
