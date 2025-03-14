#include <iostream>

using namespace std;

///22) ENUNCIADO: Una f brica de caramelos dispone de un presupuesto inicial para inaugurar su
///sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
///siguientes costos:
///- Costo de alquiler de $10000
///- Costo por caramelo producido de $2.50
///- Costo por mantenimiento cada 100 caramelos de $5000
///Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
///mes, informar:
///- "El presupuesto es suficiente para cubrir los costos de $XXXX"
///- "El presupuesto no es suficiente, necesita un cr‚dito de $XXXX"

int main()
{
    //cout << "Hello world!" << endl;

    int pi, can, pre;

    cout << "Ingrese el presupuesto inicial: " << endl;
    cin >> pi;

    cout << "Ingrese la cantidad de caramelos: " << endl;
    cin >> can;

    pre = (can * 2.5) + 100000 + (can / 1000) * 50000;

    if (pi > pre) {
        cout << "Presupuesto suficiente para: $" << pre << endl;
    }else{
        pre = pre - pi;
        cout << "Presupuesto no suficiente. Se necesita credito de: $" << pre;
    }

    return 0;
}
