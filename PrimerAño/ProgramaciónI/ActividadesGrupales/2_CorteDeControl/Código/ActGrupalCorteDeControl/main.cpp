#include <iostream>
#include <locale>

using namespace std;

/*
Una empresa registr� las ventas que realiz� durante el mes anterior.
Para cada venta se tienen los siguientes datos:

� N�mero de art�culo (1 a 10)�
� D�a (1 a 31)
� Cantidad de art�culos vendidos
� Precio de costo.
� Precio de venta.�

Este lote finaliza con un registro con n�mero de art�culo igual a cero. Los registros
est�n agrupados por n�mero de art�culo.�Se pide determinar e informar:

a) El n�mero del art�culo qu� m�s ganancia haya recaudado.�

b) La cantidad total de art�culos vendidos en cada quincena sin tener en cuenta
los art�culos de los que no se hayan registrado ventas.

c) Teniendo en cuenta la cantidad total de ventas, informar el
porcentaje de ventas para la primera semana del mes.

d) La cantidad de ventas del art�culo 5 el d�a 16 del mes.
De no detectar ventas, indicarlo con un cartel aclaratorio.
*/

int main()
{
    setlocale(LC_ALL, "Spanish");

    int na, d, cav, naAct;
    float pc, pv;

    //DECLARACION DE VARIABLES PUNTO A
    bool bpa = false;
    int naMaxGanancia;
    float maxGanancia=0, acuGanancias;

    //DECLARACION DE VARIABLES PUNTO B
    int quincenaUno=0, quincenaDos=0;

    //DECLARACION DE VARIABLES PUNTO C
    int cventastotales=0, ventassemana1=0;
    float porcentaje;

    //DECLARACION DE VARIABLES PUNTO D
    int cvArticulo5=0;

    cout << "N�mero de art�culo: " << endl;
    cin >> na;

    while(na!=0)
    {

        naAct=na;

        //PUNTO A
        acuGanancias=0;

        //APERTURA PRIMER WHILE
        while(na==naAct)
        {
            //SE COMPLETA EL INGRESO DE UNA VENTA
            cout << "D�a (DD.): " << endl;
            cin >> d;
            cout << "Cantidad vendida del art�culo: " << endl;
            cin >> cav;
            cout << "Precio de compra: " << endl;
            cin >> pc;
            cout << "Precio de venta: " << endl;
            cin >> pv;
            cout << "=================================" << endl;

            //CONTADOR PUNTO C
            cventastotales++;

            //PUNTO A
            acuGanancias += (cav * pv) - (cav * pc);

            //PUNTO B
            if(d<=15)
            {
                quincenaUno+=cav;
            }
            else
            {
                quincenaDos+=cav;
            }

            //Punto C
            if(d<=7)
            {
                ventassemana1++;
            }

            //PUNTO D
            if(na==5 && d==16)
            {
                cvArticulo5+=cav;
            }

            // SE PIDE EL NUMERO DE ARTICULO NUEVO, LUEGO SE COMPLETA EL RESTO DEL INGRESO
            cout << "N�mero de art�culo: " << endl;
            cin >> na;

        //CIERRE DEL SEGUNDO WHILE
        }

        //PUNTO A
        if(!bpa)
        {
            bpa = true;
            maxGanancia = acuGanancias;
            naMaxGanancia = naAct;
        }
        else if(acuGanancias >= maxGanancia)
        {
            maxGanancia = acuGanancias;
            naMaxGanancia = naAct;
        }

    //CIERRE DEL PRIMER WHILE
    }

    //FIN DEL PROCESO DE TODAS LAS VENTAS
    //EGRESO RESULTADO PUNTO A
    cout << "El art�culo Nro. " << naMaxGanancia << " gener� la mayor ganancia." << endl;

    //EGRESO RESULTADO PUNTO B
    cout << "Art�culos vendidos en la primera quincena: " << quincenaUno << " unidades." << endl;
    cout << "Art�culos vendidos en la segunda quincena: " << quincenaDos << " unidades." << endl;

    //EGRESO RESULTADO PUNTO C
    porcentaje = ((float)ventassemana1 * 100) / cventastotales;
    cout << "Las ventas de la primera semana representan un " << porcentaje << "% del total del mes." << endl;

    //EGRESO RESULTADO PUNTO D
    if(cvArticulo5!=0)
    {
        cout << "Se vendieron " << cvArticulo5 << " unidades del art�culo 5 el d�a 16." << endl;
    }
    else
    {
        cout << "No se registraron ventas del art�culo 5 para el d�a 16" << endl;
    }

    return 0;
}
