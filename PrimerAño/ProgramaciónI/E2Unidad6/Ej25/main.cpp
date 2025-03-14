#include <iostream>
using namespace std;

///25) ENUNCIADO: Una agencia de viajes comercializa 20 planes de turismo, para cada uno de
///ellos se gener¢ un registro con los siguientes datos:
///- N£mero de plan (1 a 20)
///- Precio al contado
///- Precio con tarjeta
///Los precios son por persona, estos datos se ingresan desordenados.
///Existe un segundo lote con las ventas efectuadas durante el mes pasado en los
///8 locales de atenci¢n al p£blico.
///Por cada venta que se concret¢ se dispone de los siguientes datos:
///- N£mero de local (1 a 8)
///- N£mero de plan contratado (1 a 20)
///- Cantidad de personas que viajan
///- C¢digo de pago (1= contado,2= tarjeta)
///Este lote finaliza con un registro con n£mero de local igual a 9. A partir de esta
///informaci¢n se pide:
///a) Informar el total recaudado por la empresa por pago al contado y por pago
///con tarjeta entre todos los locales.
///
///PENDIENTE:
///
///b) Informar cu l fue el plan que eligieron m s personas en total.

void cargarPlanes(int vPl[5], int vPC[5], int vPT[5]);
void cargarVentas(int vPla[5], int vPCon[5], int vPTar[5]);
void calcTotalPorPago(int &contado, int &tarjeta, int pago, int cantidad, int vPla[5], int vPCon[5], int vPTar[5], int plan);
void contarPlanes(int vPersPorPlan[5], int plan, int personas, int local, int vPlan[5]);

int main()
{
    int vNumPlan[5]={}, vPrecioCdo[5], vPrecioTar[5], vLocal[5], vCantidad[5], vPago[5];

    cargarPlanes(vNumPlan, vPrecioCdo, vPrecioTar);

    cargarVentas(vNumPlan, vPrecioCdo, vPrecioTar);

    return 0;
}

void cargarPlanes(int vPl[5], int vPC[5], int vPT[5]){

    int i;

    cout << "CARGAR PLANES: " << endl;

    for(i = 0; i < 5; i++){

        cout << endl << "Nro. de plan: ";
        cin >> vPl[i];

        cout << "Precio al contado: $";
        cin >> vPC[i];

        cout << "Precio con tarjeta: $";
        cin >> vPT[i];

    }

}

void cargarVentas(int vPla[5], int vPCon[5], int vPTar[5]){

    int local, con=0, personas, pago, plan;
    int contado=0, tarjeta=0;
    int vPersPorPlan[5]={};

    cout << endl << "CARGAR VENTAS" << endl;

    cout << endl << "N§ de local (1-8):";
    cin >> local;

    while(local != 9){

        cout << "N§ de plan: ";
        cin >> plan;

        cout << "N§ de personas: ";
        cin >> personas;

        cout << "C¢d. de pago (efvo.: 1 / Tjta.: 2): ";
        cin >> pago;

        calcTotalPorPago(contado, tarjeta, pago, personas, vPla, vPCon, vPTar, plan);

        con++;

        cout << endl << "N§ de local (1-8):";
        cin >> local;

        contarPlanes(vPersPorPlan, plan, personas, local, vPla);

    }

    cout << "Reacaudaci¢n en efvo.: $" << contado << endl;
    cout << "Recaudaci¢n con tarjeta: $" << tarjeta << endl;

}

void calcTotalPorPago(int &contado, int &tarjeta, int pago, int cantidad, int vPla[5], int vPCon[5], int vPTar[5], int plan){

    int j, indPlan;

    for(j=0; j<5; j++){

        if(plan==vPla[j]){

            indPlan=j;

        }

    }

    if(pago==1){

        contado+=vPCon[indPlan]*cantidad;

    }else{

        tarjeta+=vPTar[indPlan]*cantidad;

    }

}

void contarPlanes(int vPersPorPlan[5], int plan, int personas, int local, int vPlan[5]){

    int maxi, y, z, indMax;


    if(local!=9){

        for(y=0; y<5; y++){

            if(plan==vPlan[y]){

                vPersPorPlan[y]+=personas;

            }

        }


    }else{

        for(z=0; z<5; z++){

            if(z==0){

                maxi=vPersPorPlan[z];
                indMax=z;

            }else if(vPersPorPlan[z]>maxi){

                indMax=z;
                maxi=vPersPorPlan[z];

            }

        }

        cout << endl << "El plan m s elegido es el " << vPlan[indMax] << endl;

    }

}
