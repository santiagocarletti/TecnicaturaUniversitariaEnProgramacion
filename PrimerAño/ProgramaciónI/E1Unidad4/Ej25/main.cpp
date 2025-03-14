#include <iostream>

using namespace std;

///25) ENUNCIADO: Una empresa registr¢ las compras realizadas a sus distintos proveedores
///durante todo el a¤o anterior. Para cada compra se registraron los siguientes
///datos:
///- N£mero de proveedor (n£mero de cuatro cifras no correlativo).
///- D¡a (1 a 31).
///- Mes (1 a 12).
///- Tipo de Factura (Responsable inscripto: "A", Consumidor Final: "B", o Monotributo: "C").
///- Monto de la compra.
///Este lote finaliza con un registro con n£mero de proveedor igual a 0.
///Los registros est n agrupados por n£mero de proveedor. En el lote anterior no
///aparecen registros de los proveedores a los que que no se les hayan realizado
///compras.
///Se pide determinar e informar:
///a) El monto m ximo registrado en una sola compra por cada proveedor y el
///n£mero de proveedor al que se le compr¢.
///b) La inversi¢n total de todo el a¤o discriminada por tipo de factura.
///c) La compra con menor monto registrada durante el mes de Agosto junto
///al tipo de factura de la compra.
///d) La cantidad de compras que se realizaron a cada proveedor.

int main()
{
    int prov=1, dia, mes, monto, provAct;
    char fact;
    //PUNTO B
    int a=0, b=0, c=0;

    //PUNTO C
    int compraMenor=0, factPC;
    bool ago=0;

    while(prov!=0){

    //PUNTO A
    int montoMax, con=1, provA;
    //PUNTO D
    int cantPD=0;

    cout << "===============================" << endl;
    cout << "Proveedor: ";
    cin >> prov;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Tipo de factura (a, b o c): ";
    cin >> fact;
    cout << "Monto: ";
    cin >> monto;

        provAct=prov;

        while(provAct==prov){

        con++;

        if(con==1){
            provA=prov;
            montoMax=monto;
        }else if(monto>montoMax){
            provA=prov;
            montoMax=monto;
        }

        if(fact==a){
            a+=monto;
        }else if(fact==b){
            b+=monto;
        }else{
            c+=monto;
        }

        if(mes==8){
            ago=1;
            compraMenor=monto;
            factPC=fact;
        }else if(mes==8){
                if(monto<compraMenor){
                    compraMenor=monto;
                    factPC=fact;
                }
        }

        cantPD++;

        cout << "===============================" << endl;
        cout << "Proveedor: ";
        cin >> prov;
        cout << "Dia: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;
        cout << "Tipo de factura (a, b o c): ";
        cin >> fact;
        cout << "Monto: ";
        cin >> monto;

        //CIERRA WHILE 2
        }

        cout << "A) Monto maximo: " << montoMax << ". Numero de proveedor: " << provA << endl;

        cout << "D) Proveedor " << provAct << ". " << cantPD << " compras" << endl;

    //CIERRA WHILE 1
    }
    cout << "B) Inversion total en el anio: " << endl;
    cout << "Fact. a = " << a << ". Fact. b = " << b << ". Fact. c = " << c << endl;

    cout << "C) Compra menor en agosto: " << compraMenor << ". Tipo de factura: " << factPC << endl;

    return 0;
}
