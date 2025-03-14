#include <iostream>
using namespace std;

///23) ENUNCIADO: Una empresa posee un grupo de 15 vendedores para atender a sus clientes.
///Por cada venta realizada se genera un registro con la siguiente informaci¢n:
///- N£mero de vendedor (1 a 15)
///- Importe de la venta (en $)
///Un vendedor puede realizar m s de una venta. El £ltimo registro se indica con
///n£mero de vendedor igual a 0.
///Se pide determinar e informar:
///a) El n£mero de vendedor que m s vendi¢ en total (en $).
///b) Cada uno de los n£meros de vendedores que no hayan realizado ventas.
///c) El total recaudado por la empresa por todas las ventas efectuadas por sus vendedores.

void cargarVentas(int vVen[15], int vImp[15]);
void mejorVendedor(int vImpor[15]);
void vendedoresCeroVentas(int vMonto[15]);
void calcularTotal(int vFacturas[15]);

int main()
{
    int vVendedores[15]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int vImportes[15]={0};

    cargarVentas(vVendedores, vImportes);

    mejorVendedor(vImportes);

    vendedoresCeroVentas(vImportes);

    calcularTotal(vImportes);

    return 0;
}

void cargarVentas(int vVen[15], int vImp[15]){

    int ven, imp, con=1;

    cout << endl << "VENTA " << con << endl;
    cout << "Vendedor: ";
    cin >> ven;

    while(ven!=0){

        cout << "Importe: ";
        cin >> imp;
        vImp[ven-1]+=imp;
        con++;

        cout << "VENTA " << con << endl;
        cout << "Vendedor: ";
        cin >> ven;

    }

}

void mejorVendedor(int vImpor[15]){

    int x, vendedor, impMax=vImpor[0];

    for(x=0; x<15; x++){

        if(vImpor[x]>=impMax){

            impMax=vImpor[x];
            vendedor=x+1;

        }

    }

    cout << "La mayor venta ($" << impMax << ") la registr¢ el vendedor N§" << vendedor << endl;

}

void vendedoresCeroVentas(int vMonto[15]){

    int z;

    cout << endl << "VENDEDORES SIN FACTURACION" << endl << endl;

    for(z=0; z<15; z++){

        if(vMonto[z]==0){

            cout << z+1 << endl;
        }

    }

}

void calcularTotal(int vFacturas[15]){

    int y, total=0;

    for(y=0; y<15; y++){

        total+=vFacturas[y];

    }

    cout << endl << "Recaudaci¢n total: $" << total << endl;

}
