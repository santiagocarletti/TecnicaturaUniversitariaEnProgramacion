#include <iostream>
#include "Producto.h"

using namespace std;

int main()
{

    Producto vProductos[5];

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR PRODUCTOS" << endl;
    cout << "2_ MOSTRAR PRODUCTOS" << endl;
    cout << "3_ GESTIONAR PEDIDOS" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:

            cout << endl;

            for(int a=0; a<5; a++){

                cout << a+1 << "§ PRODUCTO" << endl << "-----------------------" << endl;
                vProductos[a].cargarProducto();

            }

            break;

        case 2:

            for(int b=0; b<5; b++){

                cout << endl << "-----------------------" << endl;
                vProductos[b].mostrarProducto();

            }

            break;

        case 3:
            cout << endl << "GESTIONAR PEDIDOS: " << endl;

            for(int c=0; c<5; c++){

                vProductos[c].gestionarPedido();

            }

            break;

        case 4:
            cout << "Opcion 4: ";
            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}
