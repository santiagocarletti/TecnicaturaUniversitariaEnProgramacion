#include <iostream>

using namespace std;

///20) ENUNCIADO: Hacer un programa en el que se ingrese la edad y
///altura de 5 personas. Luego, calcular e informar:
///- La cantidad de personas mayores a 30 a¤os que midan m s de 1.8
///metros.
///- El promedio de altura de las personas mayores a 30 a¤os.
///- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
///- La cantidad de personas cuya edad sea de 20, 30 o 40 a¤os.

int main()
{
    //cout << "Hello world!" << endl;

    int e1, e2, e3, e4, e5, a1, a2, a3, a4, a5, crangoa = 0, coned = 0;
    float cm30 = 0, atm30 = 0, prom;

    cout << "Ingrese edad 1: " << endl;
    cin >> e1;
    cout << "Ingrese edad 2: " << endl;
    cin >> e2;
    cout << "Ingrese edad 3: " << endl;
    cin >> e3;
    cout << "Ingrese edad 4: " << endl;
    cin >> e4;
    cout << "Ingrese edad 5: " << endl;
    cin >> e5;

    cout << "Ingrese altura 1: " << endl;
    cin >> a1;
    cout << "Ingrese altura 2: " << endl;
    cin >> a2;
    cout << "Ingrese altura 3: " << endl;
    cin >> a3;
    cout << "Ingrese altura 4: " << endl;
    cin >> a4;
    cout << "Ingrese altura 5: " << endl;
    cin >> a5;

    if (e1 > 30 && a1 > 179) {
        cm30++;
        atm30+= a1;
    }
    if (e2 > 30 && a2 > 179) {
        cm30++;
        atm30+= a2;
    }
    if (e3 > 30 && a3 > 179) {
        cm30++;
        atm30+= a3;
    }
    if (e4 > 30 && a4 > 179) {
        cm30++;
        atm30+= a4;
    }
    if (e5 > 30 && a5 > 179) {
        cm30++;
        atm30+= a5;
    }

    prom = atm30 / cm30;

    if (a1 > 169 && a1 < 190) {
        crangoa ++;
    }
    if (a2 > 169 && a2 < 190) {
        crangoa ++;
    }
    if (a3 > 169 && a3 < 190) {
        crangoa ++;
    }
    if (a4 > 169 && a4 < 190) {
        crangoa ++;
    }
    if (a5 > 169 && a5 < 190) {
        crangoa ++;
    }

    if (e1 == 20 || e1 == 30 || e1 == 40) {
        coned ++;
    }
    if (e2 == 20 || e2 == 30 || e2 == 40) {
        coned ++;
    }
    if (e3 == 20 || e3 == 30 || e3 == 40) {
        coned ++;
    }
    if (e4 == 20 || e4 == 30 || e4 == 40) {
        coned ++;
    }
    if (e5 == 20 || e5 == 30 || e5 == 40) {
        coned ++;
    }

    cout << "May. de 30 que miden más de 180 cm: " << cm30 << endl;
    cout << "Prom. altura may. de 30: " << prom << endl;
    cout << "Personas entre 170 y 180 cm de altura: " << crangoa << endl;
    cout << "Personas de 20, 30 o 40 anios: " << coned << endl;

    return 0;
}
