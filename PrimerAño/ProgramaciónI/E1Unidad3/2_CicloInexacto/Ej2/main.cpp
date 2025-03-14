#include <iostream>

using namespace std;

///2) ENUNCIADO: Hacer un programa para mostrar por pantalla los n£meros del 1 al 20 salteando
///de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19. Importante: El programa no
///tiene ning£n ingreso de datos.

int main()
{
    int con=1;

    while(con<=20)
    {
        cout << con << endl;
        con+=3;
    }

    return 0;
}
