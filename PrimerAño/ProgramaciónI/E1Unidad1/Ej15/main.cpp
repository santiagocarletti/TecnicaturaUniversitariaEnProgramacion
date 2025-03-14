#include <iostream>

using namespace std;

///15) ENUNCIADO: La amplitud t‚rmica es la diferencia entre la temperatura m xima y la
///temperatura m¡nima en una zona y tiempo determinado. Dada la temperatura
///m xima y la temperatura m¡nima de San Fernando de ayer, calcular y mostrar la
///amplitud t‚rmica.
///NOTA: El usuario ingresar  como temperatura m xima un valor mayor o igual al
///de la temperatura m¡nima

int main()
{
    //cout << "Hello world!" << endl;

    int mi, ma, amp;

    cout << "Minima: ";
    cin >> mi;

    cout << "Maxima: ";
    cin >> ma;

    amp = ma - mi;

    cout << "Amplitud termica: " << amp << endl;

    return 0;
}
