#include <iostream>
using namespace std;
#include <ctime>

///26) ENUNCIADO: Una empresa con varias sucursales, dispone de un primer lote de registros con
///la siguiente informaci¢n:
///- N£mero de art¡culo (1 a 25)
///- Precio Unitario
///Este lote se encuentra desordenado.
///Dispone de un segundo lote con la informaci¢n de las ventas que se efectuaron
///en cada una de las sucursales, con la siguiente informaci¢n:
///- N£mero de art¡culo (1 a 25)
///- N£mero de sucursal (1 a 5)
///- Cantidad vendida
///Puede haber m s de un registro para el mismo art¡culo y para la misma
///sucursal.
///El £ltimo registro se indica con n£mero de art¡culo igual a cero.
///Se pide determinar e informar:
///a) Cantidad total vendida por cada art¡culo.

///PENDIENTE:
///b) Monto total recaudado por la empresa.
///c) N£mero de sucursal que m s art¡culos vendi¢ en total. (sin discriminar por art¡culo)

void cargarPrecios(int vecArt[25], int vecPre[25]);
void cargarVentas(int acuArt[25], int vectorAr[25]);

int main()
{
    srand(time(0));

    int vArt[25]={}, vPrecio[25], vAcumuladorArt[25]={};

    cargarPrecios(vArt, vPrecio);

    cargarVentas(vAcumuladorArt, vArt);

    return 0;
}

void cargarPrecios(int vecArt[25], int vecPre[25])
{

    int i, j, k, l, artAleatorio, con=0;
    bool vBand[25]= {false};

    artAleatorio=(rand()%25)+1;

    while(con<25)
    {

        if(!vBand[artAleatorio])
        {

            vecArt[con]=artAleatorio;
            vBand[artAleatorio]=true;
            con++;

        }

        artAleatorio=(rand()%25)+1;

    }

    for(i=0; i<25; i++)
    {

        vecPre[i]=(rand()%5)+1;

    }

    ///PRUEBA

    int m;

    for(m=0; m<25; m++)
    {

        cout << "Art. " << vecArt[m] << ": $" << vecPre[m] << endl;

    }

}

void cargarVentas(int acuArt[25], int vectorAr[25])
{

    int artAle, sucAle, canAle, s, con=0, g, p;

    if(con!=4)
    {

        artAle=(rand()%25)+1;
        cout << endl << "Art.: " << artAle << endl;
        con++;


        while(artAle!=0)
        {

            sucAle=(rand()%5)+1;
            cout << "Sucursal: " << sucAle << endl;

            canAle=(rand()%10)+1;
            cout << "Cantidad: " << canAle << endl << endl;

            ///PUNTO A

            for(g=0; g<25; g++){

                if(artAle==vectorAr[g]){

                    acuArt[g]+=canAle;

                }

            }

            if(con!=4)
            {

                artAle=(rand()%25)+1;
                cout << endl << "Art.: " << artAle << endl;
                con++;

            }
            else
            {

                artAle=0;

            }

        }
    }

    ///PUNTO A
    for(p=0; p<25; p++){

        cout << "Art. " << vectorAr[p] << ", " << acuArt[p] << " unidades vendidas" << endl;

    }

}
