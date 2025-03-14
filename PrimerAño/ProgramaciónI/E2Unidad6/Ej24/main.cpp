#include <iostream>
using namespace std;

///24) ENUNCIADO: Una empresa que fabrica 200 art¡culos tiene la siguiente informaci¢n para cada
///uno de las ventas del mes anterior:
///- C¢digo de Art¡culo (1 a 200)
///- D¡a (1 a 31)
///- Cantidad vendida
///Puede haber m s de un registro para el mismo art¡culo. El lote finaliza con un
///registro con n£mero de art¡culo igual a cero. Se pide determinar e informar:
///a) Informar para cada c¢digo de art¡culo la cantidad total vendida en el mes.
///b) Informar los d¡as en los que no hubo ventas.
///c) Informar los c¢digos de los art¡culos cuyas ventas en cantidad son mayores al promedio.

void cargarVentas(int vArticulo[200], bool vDia[31], int vCantidad[200]);
void informarCantidadXArticulo(int vCant[200]);
void infDiasSinVtas(bool vD[31]);
void infMayoresAlPromedio(int vCa[200]);

int main()
{
    int vArt[200];
    bool vD[31]={false};
    int vCan[200]={0};

    cargarVentas(vArt, vD, vCan);

    informarCantidadXArticulo(vCan);

    infDiasSinVtas(vD);

    infMayoresAlPromedio(vCan);

    return 0;
}

void cargarVentas(int vArticulo[200], bool vDia[31], int vCantidad[200]){

    int con=1, t, art, dia, can;

    for(t=0; t<10; t++){

        vArticulo[t]=t+1;

    }

    cout << endl << "VENTA " << con << endl;
    cout << "Art¡culo: ";
    cin >> art;

    while(art!=0){

        cout << "D¡a: ";
        cin >> dia;
        vDia[dia-1]=true;

        cout << "Cantidad: ";
        cin >> can;
        vCantidad[art-1]+=can;
        con++;

        cout << endl << "VENTA " << con << endl;
        cout << "Art¡culo: ";
        cin >> art;

    }

}

void informarCantidadXArticulo(int vCant[200]){

    int f;

    for(f=0; f<200; f++){

        cout << "Art. " << f+1 << ": " << vCant[f] << " unidades vendidas" << endl;

    }

}

void infDiasSinVtas(bool vD[31]){

    int t;

    cout << "DIAS SIN VENTAS: " << endl << endl;

    for(t=0; t<31; t++){

        if(!vD[t]){

            cout << t+1 << ", ";

        }

    }

}

void infMayoresAlPromedio(int vCa[200]){

    int i, q, total=0, promedio, contador=0;

    for(i=0; i<200; i++){

        if(vCa[i]!=0){

            total+=vCa[i];
            contador++;

        }

    }

    promedio=total/contador;

    cout << endl << "ART's CON VTAS. SUPERIORES AL PROMEDIO: " << endl << endl;

    for(q=0; q<200; q++){


        if(vCa[q]>promedio){

            cout << q+1 << endl;

        }

    }

}
