#include <iostream>
using namespace std;

///22) ENUNCIADO: Una empresa comercializa 20 tipos de art¡culos y por cada venta realizada
///genera un registro con los siguientes datos:
///- N£mero de Art¡culo (1 a 20)
///- Cantidad Vendida
///Puede haber varios registros para el mismo art¡culo y el £ltimo registro se indica
///cuando se ingresa un n£mero de art¡culo igual a 0. Se pide determinar e
///informar:
///a) El n£mero de art¡culo que m s se vendi¢ en total.
///b) Los n£meros de art¡culos que no registraron ventas.
///c) Cu ntas unidades se vendieron del n£mero de art¡culo 10.

void cargarVentas(int vArt[20], int vCan[20]);
void artMasVendido(int vecA[20], int vecC[20]);
void artSinVentas(int vCantidades[20]);
void contarArt10(int vCa[20]);

int main()
{
    int vArt[20]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int vCan[20]={0};

    cout << "CARGAR VENTAS: " << endl;
    cargarVentas(vArt, vCan);

    artMasVendido(vArt, vCan);

    artSinVentas(vCan);

    contarArt10(vCan);

    return 0;
}

void cargarVentas(int vArt[20], int vCan[20]){

    int articulo, cantidad, con=1;

    cout << endl << "Venta " << con << endl;
    cout << "Art¡culo: ";
    cin >> articulo;

    while(articulo!=0){

        cout << "Cantidad: ";
        cin >> cantidad;
        vCan[articulo-1]+=cantidad;

        con++;

        cout << endl << "Venta " << con << endl;
        cout << "Art¡culo: ";
        cin >> articulo;

    }

}

void artMasVendido(int vecA[20], int vecC[20]){

    int i, mVentas=vecC[0], mArticulo;

    for(i=0; i<20; i++){

        if(vecC[i]>=mVentas){

            mVentas=vecC[i];
            mArticulo=vecA[i];

        }

    }

    cout << endl << "El art¡culo " << mArticulo << " fue el m s vendido (" << mVentas << " unidades)" << endl;

}

void artSinVentas(int vCantidades[20]){

    int j;

    cout << endl << "ARTICULOS SIN VENTAS: " << endl << endl;

    for(int j=0; j<20; j++){

        if(vCantidades[j]==0){

            cout << j+1 << endl;

        }

    }

}

void contarArt10(int vCa[20]){

    cout << endl << "Art¡culo 10: " << vCa[9] << " ventas" << endl;

}
