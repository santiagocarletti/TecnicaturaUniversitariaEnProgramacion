#include <iostream>

using namespace std;

///6) CONSIGNA: Hacer un programa para que un comercio ingrese por teclado la recaudaci¢n en
///pesos para cada una de las cuatro semanas del mes. El programa debe listar la
///recaudaci¢n promedio por semana y el porcentaje de recaudaci¢n por semana.
///Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listar  como recaudaci¢n
///promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%

int main()
{
    //cout << "Hello world!" << endl;

    int s1, s2, s3, s4, rp, ps1, ps2, ps3, ps4, rt;

    cout << "Recaudación semana 1: ";
    cin >> s1;
    cout << "Recaudación semana 2: ";
    cin >> s2;
    cout << "Recaudación semana 3: ";
    cin >> s3;
    cout << "Recaudación semana 4: ";
    cin >> s4;

    rp = (s1 + s2 + s3 + s4) / 4;
    cout << "Recaudación promedio (%): " << rp;

    rt = s1 + s2 + s3 + s4;

    ps1 = s1 * 100 / rt;
    ps2 = s2 * 100 / rt;
    ps3 = s3 * 100 / rt;
    ps4 = s4 * 100 / rt;

    cout << "Porcentaje semana 1: " << ps1 << endl;
    cout << "Porcentaje semana 2: " << ps2 << endl;
    cout << "Porcentaje semana 3: " << ps3 << endl;
    cout << "Porcentaje semana 4: " << ps4 << endl;

    //cout << ""
    return 0;
}
