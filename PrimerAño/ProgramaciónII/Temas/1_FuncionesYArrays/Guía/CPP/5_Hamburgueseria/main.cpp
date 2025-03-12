#include <iostream>
using namespace std;

///CONSIGNA: La mundialmente conocida hamburguesería Coco’s Burger desea registrar la
///información de las ventas de la primera semana de Agosto 2023 de su local
///ubicado en Canelones, Uruguay.
///Por cada venta se registra:
///• Código de hamburguesa (entero de 1 a 5)
///• Día (entero de 1 - Lunes a 7 - Domingo)
///• Cantidad vendida (entero)
///• Tipo de Acompañamiento ('B' – con batatas / 'P' – con papas / 'C' – Aros de
///cebolla / 'X' – sin acompañamiento)
///Pueden existir varios registros de ventas para la misma hamburguesa. El fin de
///la carga de datos se indica con un código de hamburguesa igual a 0.
///A este lote se le precede otro ordenado por número de hamburguesa con la
///siguiente información:
///• Código de hamburguesa (1 a 5)
///• Precio (float)
///• Stock al comienzo de la semana (entero)
///Se pide determinar e informar:
///A) Por cada hamburguesa, la cantidad de unidades vendidas y el total recaudado.
///B) La hamburguesa más vendida el viernes.
///C) Los días que se vendieron hamburguesas acompañadas de Batatas pero
///no se vendieron hamburguesas acompañadas de Aros de Cebolla.
///D) Las hamburguesas que lograron un sold out (vendieron todo)
///E) Por cada día y acompañamiento, la cantidad de hamburguesas vendidas.

int elegirAcompanamiento();
int elegirDia();

int main()
{
    int mStockCantidadVendidaPorCodigoHamburguesa[2][5] = {{100, 100, 100, 100, 100},{}};
    float vPrecioPorCodigoHamburguesa[5]{5.5, 10.5, 8.5, 9, 6.5};

    ///Matriz: 7 Filas (dias) // Columnas 0-4 (Codigo hamburguesa) // Columnas 5-8 (Tipo de acompanamiento)
    int mDiaHamburguesaAcompanamiento[7][9]={};

    bool vAcompanamiento[4]={};
    string vNombreDia[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ REGISTRAR VENTA" << endl;
    cout << "2_ VER VENTAS POR HAMBURGUESA" << endl;
    cout << "3_ HAMBURGUESA MAS VENDIDA EL VIERNES" << endl;
    cout << "4_ DIAS CON VENTA DE BATATA Y NO CEBOLLA COMO ACOMP." << endl;
    cout << "5_ HAMBURGUESAS CON SOLD OUT" << endl;
    cout << "6_ VENTAS POR DIA Y ACOMPANAMIENTO" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "REGISTRAR VENTA" << endl << endl;

            int codHamburguesa, dia, cantidadVendida, tipoAcompanamiento;

            cout << "Codigo de hamburguesa (Salir = 0): ";
            cin >> codHamburguesa;

            while(codHamburguesa!=0){

                dia=elegirDia();

                cout << endl << "Cantidad vendida: ";
                cin >> cantidadVendida;

                tipoAcompanamiento=elegirAcompanamiento();

                mStockCantidadVendidaPorCodigoHamburguesa[1][codHamburguesa-1]+=cantidadVendida;
                mDiaHamburguesaAcompanamiento[dia-1][codHamburguesa-1]+=cantidadVendida;
                mDiaHamburguesaAcompanamiento[dia-1][tipoAcompanamiento+4]+=cantidadVendida;

                cout << endl << "Codigo de hamburguesa (Salir = 0): ";
                cin >> codHamburguesa;

            }

            break;

        case 2:
            cout << endl << "VER VENTAS POR HAMBURGUESA" << endl << endl;

            for(int a=0; a<5; a++){

                cout << "Hamburguesa " << a+1 << ": " << mStockCantidadVendidaPorCodigoHamburguesa[1][a] << " unidades vendidas. Recaudacion: $" <<
                mStockCantidadVendidaPorCodigoHamburguesa[1][a]*vPrecioPorCodigoHamburguesa[a] << endl << endl;

            }

            break;

        case 3:{
            cout << endl << "HAMBURGUESA MAS VENDIDA EL VIERNES" << endl << endl;

            int maxViernes=mDiaHamburguesaAcompanamiento[4][0];
            int indViernes=0;

            for(int d=1; d<5; d++){

                if(mDiaHamburguesaAcompanamiento[4][d]>maxViernes){
                    maxViernes=mDiaHamburguesaAcompanamiento[4][d];
                    indViernes=d;
                }

            }

        cout << "La hamburguesa con codigo: " << indViernes+1 << " fue la mas vendida el viernes" << endl;

            break;
        }

        case 4:

            cout << endl << "DIAS CON VENTA DE BATATA Y NO CEBOLLA COMO ACOMP." << endl << endl;

            for(int e=0; e<7; e++){

                for(int f=5; f<8; f++){

                    if(mDiaHamburguesaAcompanamiento[e][f]!=0){
                        vAcompanamiento[f-5]=true;
                    }

                }

                if(vAcompanamiento[0] && !vAcompanamiento[2]){
                    cout << vNombreDia[e] << endl;
                }

                for(int g=0; g<4; g++){vAcompanamiento[g]=false; }
            }

            break;

        case 5:

            cout << endl << "HAMBURGUESAS CON SOLD OUT" << endl << endl;

            for(int i=0; i<5; i++){

                if(mStockCantidadVendidaPorCodigoHamburguesa[1][i]>=mStockCantidadVendidaPorCodigoHamburguesa[0][i]){

                        cout << "Hamburguesa - Codigo: " << i+1 << endl;

                }

            }

            break;

        case 6:

            cout << endl << "VENTAS POR DIA Y ACOMPANAMIENTO" << endl << endl;

            for(int j=0; j<7; j++){

                cout << vNombreDia[j] << ": " << endl << endl;

                for(int k=5; k<9; k++){

                    cout << "Acompanamiento " << k-4 << ": " << mDiaHamburguesaAcompanamiento[j][k] << " ventas" << endl;

                }

                cout << endl;
            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}

int elegirAcompanamiento(){

    char eleccion;
    int numeroEleccion=5;

    while(numeroEleccion==5){

        cout << endl << "B >> Batatas" << endl << "P >> Papas" << endl << "C >> Aros de cebolla" << endl << "X >> Sin acompanamiento" << endl << endl;
        cin >> eleccion;

        switch(eleccion){

        case 'B':
            numeroEleccion=1;
            break;

        case 'P':
            numeroEleccion=2;
            break;

        case 'C':
            numeroEleccion=3;
            break;

        case 'X':
            numeroEleccion=4;
            break;

        default:
            cout << endl << "Opcion incorrecta.." << endl;
            numeroEleccion=5;
            break;
        }
    }

    return numeroEleccion;
}

int elegirDia(){

    int dia=8;

    while(dia<1 || dia>7){

        cout << endl << "1_ Lunes" << endl << "2_ Martes" << endl << "3_ Miercoles" << endl << "4_ Jueves" << endl << "5_ Viernes" << endl << "6_ Sabado" << endl << "7_ Domingo" <<  endl << endl;
        cin >> dia;

        if(dia<1 || dia>7){cout << endl << "Opcion incorrecta.." << endl; }

    }

    return dia;
}
