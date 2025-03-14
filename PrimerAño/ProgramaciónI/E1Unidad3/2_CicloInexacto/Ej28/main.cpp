#include <iostream>

using namespace std;

///28) ENUNCIADO: Hacer un programa que contenga un men£ con el siguiente formato:
///Men£ principal
///-----------------------------
///1 - Ingresar medida en metros
///2 - Convertir a cent¡metros
///3 - Convertir a kil¢metros
///4 - Convertir a pulgadas
///5 - Convertir a pies
///-----------------------------
///0 - Salir del programa
///Ingrese opci¢n:
///Al ingresar a la opci¢n 1, nos pedir  una medida (float) en metros que con las
///siguientes opciones del men£ podremos mostrarla convertida a otras unidades.
///El programa debe permitir al usuario ingresar a las opciones las veces que lo
///desee y s¢lo finalizar  al ingresar a la opci¢n 0.

int main()
{
    //ESTA MAL

    float mt;
    int opc=1;

    while(opc!=0){

    cout << endl;
    cout << "Menu principal" << endl;
    cout << "----------------------------------" << endl;
    cout << "1 - Ingresar medida en metros" << endl;
    cout << "2 - Convertir a centimetros" << endl;
    cout << "3 - Convertir a kilometros" << endl;
    cout << "4 - Convertir a pulgadas" << endl;
    cout << "5 - Convertir a pies" << endl;
    cout << "----------------------------------" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << endl;
    cout << "Ingrese opcion: ";
    cin >> opc;

        switch(opc){
    case 1:
        cout << "Ingrese medida en mts.: ";
        cin >> mt;
        break;
    case 2:
        cout << mt * 100 << " centimetros. " << endl;
        break;
    case 3:
        cout << mt / 1000 << " kilometros. " << endl;
        break;
    case 4:
        cout << mt * 39.37008 << " pulgadas." << endl;
        break;
    case 5:
        cout << mt * 3.28084 << " pies." << endl;
        break;
        }

    //CIERRA WHILE
    }

    return 0;
}
