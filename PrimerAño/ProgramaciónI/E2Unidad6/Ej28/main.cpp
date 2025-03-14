#include <iostream>
using namespace std;
#include <ctime>

///28) ENUNCIADO: Un negocio de venta de libros cuenta con los siguientes lotes de información:
///Un primer lote cuenta con los datos de los libros que este negocio vende. Cada
///registro contiene:
///- Código de Libro (1 a 200)
///- Tema (1 a 20)
///- Precio
///Este lote cuenta con un total de 200 registros y se ingresa desordenado.
///Un segundo lote con los datos de las ventas del último mes. Cada registro
///contiene los siguientes datos:
///- Código de Libro (1 a 200)
///- Número de Vendedor (1 a 10)
///- Día de la venta (1 a 31)
///Puede haber varios registros para el mismo código de libro y para el mismo
///vendedor. Este lote finaliza con un registro con código de libro igual a cero.
///Se pide determinar e informar:
///a) Indicar por separado la recaudación total para cada uno de las 31 días.
///b) Cuál es el número de vendedor con mayor recaudación total por ventas.
///c) Cuál es el número de tema más vendido.
///NO SE PUEDE UTILIZAR NINGÚN SWITCH CON MÁS DE 3 SALIDAS.

void cargarPrimerLote(int vCodLibro[200], int vTema[200], int vPrecio[200]);
void cargarVentas(int vCodLibro[200], int vNumVen[10], int vDiaVenta[31], int vPrecio[200], int vTema[200]);

int main()
{
    srand(time(0));

    int vCodLibro[200]={0};
    int vTema[20];
    int vPrecio[200];
    int vNumVen[10];
    int vDiaVenta[31];

    cargarPrimerLote(vCodLibro, vTema, vPrecio);

    cargarVentas(vCodLibro, vNumVen, vDiaVenta, vPrecio, vTema);

    return 0;
}

void cargarPrimerLote(int vCodLibro[200], int vTema[200], int vPrecio[200]){

    int con=0, a, codAle;
    bool yaLa=0;

    while(con<200){

        codAle=(rand()%200)+1;

        for(a=0; a<=con; a++){

            if(codAle==vCodLibro[a]){

                yaLa=1;

            }

        }

        if(vCodLibro[con]==0 && !yaLa){

            vCodLibro[con]=codAle;
            con++;

        }

            yaLa=0;
    }

    vTema[con]=(rand()%20)+1;
    vPrecio[con]=(rand()%100)+1;

}

void cargarVentas(int vCodLibro[200], int vNumVen[10], int vDiaVenta[31], int vPrecio[200], int vTema[200]){

    int coAleatorio, veAleatorio, diAleatorio, con=0;

    coAleatorio=(rand()%200);

    while(coAleatorio!=0){

        veAleatorio=(rand()%10)+1;
        diAleatorio=(rand()%31)+1;
        coAleatorio=(rand()%200);

        con++;

        if(con==20){

            coAleatorio=0;
        }
    }
}
