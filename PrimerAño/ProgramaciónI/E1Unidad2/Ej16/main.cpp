#include <iostream>

using namespace std;

///16) ENUNCIADO: Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
///obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
///siguientes condiciones:
///- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
///- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
///- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
///- “Recursa la materia”, si no aprobó ningún examen parcial

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c, d, cua = 0;

    cout << "Ingrese 1era nota: ";
    cin >> a;
    cout << "Ingrese 2da nota: ";
    cin >> b;
    cout << "Ingrese 3ra nota: ";
    cin >> c;
    cout << "Ingrese 4ta nota: ";
    cin >> d;

    if (a > 6 && b > 6 && c > 6 && d > 6){
        cout << "Promociona" << endl;
    }else{
    //OTRO BLOQUE
        if (a > 3){
            cua ++;
        }
        if (b > 3){
            cua ++;
        }
        if (c > 3){
            cua ++;
        }
        if (d > 3){
            cua ++;
        }
        if (cua > 2){
            cout << "Rinde final" << endl;
        }else{
            //EMPIEZA OTRO BLOQUE
            if (cua > 0){
                cout << "Recupera parciales" << endl;
            }else{
                    cout << "Recursa" << endl;
            }
        }
    }

    return 0;
}
