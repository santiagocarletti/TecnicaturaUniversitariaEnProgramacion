#include <iostream>

using namespace std;

///28) ENUNCIADO: La cuenta corriente de la famosa cantante Lady Lara ha registrado 14
///movimientos durante la semana pasada. Por cada movimiento se registr¢:
///- N£mero de movimiento
///- D¡a
///- Tipo ('E' - Extracci¢n / 'D' - Dep¢sito)
///- Importe
///Existe un registro por movimiento. Se desea calcular e informar:
///- El saldo final de la cuenta.
///- El porcentaje de movimientos de extracci¢n y el porcentaje de dep¢sito.
///- El dep¢sito de mayor importe indicando tambi‚n d¡a y n£mero de
///movimiento.
///- La cantidad de movimientos del d¡a 10.

int main()
{
    //cout << "Hello world!" << endl;

        int nmov, dia, imp, saldo=0, ext=0, dep=0, pore, pord, depmax=0, diadepm, movmax, mov10=0, i;
        char tipo;

        for(i=0; i<5; i++){
            cout << "Dia: " << endl;
            cin >> dia;
            cout << "Tipo ('E'/'D'): " << endl;
            cin >> tipo;
            cout << "Importe: " << endl;
            cin >> imp;
            cout << "==================================" << endl;

            nmov=i+1;

            if(tipo=='E'){
                saldo+=(imp*-1);
                ext++;
            }else{
                saldo+=imp;
                dep++;

                if(depmax==0 || dep>depmax){
                    depmax=imp;
                    diadepm=dia;
                    movmax=nmov;
                }

            }

            if(dia==10){
                mov10++;
            }

    }

    cout << "Saldo: $" << saldo << endl;
    pore=ext*100/5;
    pord=dep*100/5;
    cout << "Depositos: %" << pord << endl;
    cout << "Extracciones: %" << pore << endl;
    cout << "Deposito maximo: $" << depmax << "Dia: " << diadepm << "Movimiento numero: " << movmax << endl;
    cout << "Movimientos del dia 10: " << mov10 << endl;

    return 0;
}
