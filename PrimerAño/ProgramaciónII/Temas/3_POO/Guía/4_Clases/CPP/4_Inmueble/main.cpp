#include <iostream>
using namespace std;

#include "Inmueble.h"
#include "Casa.h"
#include "CasaQuinta.h"
#include "Departamento.h"
#include "Local.h"
#include "Terreno.h"

///La inmobiliaria Gonzalez&Lara S.A. desea un programa que permita registrar todos los inmuebles
///que hay disponibles para compra o alquiler.
///Los inmuebles pueden ser: Casas, Casas quintas, Departamentos, Locales y Terrenos.
///Para las casas se registra la siguiente informaci¢n:
///Atributo --- Tipo de dato
///C¢digo de inmueble entero
///Calle cadena de 50 caracteres
///N£mero cadena de 6 caracteres
///Localidad cadena de 50 caracteres
///AntigÅedad construcci¢n entero
///Superficie total m2 float
///Superficie cubierta m2 float
///Habitaciones int
///Precio venta float
///Precio alquiler float
///Apellido del due§o cadena de 50 caracteres
///Nombre del due§o cadena de 50 caracteres
///DNI del due§o cadena de 12 caracteres
///Celular del due§o cadena de 15 caracteres
///
///Para las casas quintas se registra la siguiente informaci¢n
///Atributo --- Tipo de dato
///C¢digo de inmueble entero
///Calle cadena de 50 caracteres
///N£mero cadena de 6 caracteres
///Localidad cadena de 50 caracteres
///AntigÅedad construcci¢n entero
///Superficie total m2 float
///Superficie cubierta m2 float
///Pileta bool
///Quincho bool
///Habitaciones int
///Precio venta float
///Precio alquiler float
///Apellido del due§o cadena de 50 caracteres
///Nombre del due§o cadena de 50 caracteres
///DNI del due§o cadena de 12 caracteres
///Celular del due§o cadena de 15 caracteres
///Para los departamentos se registra la siguiente informaci¢n:
///Atributo Tipo de dato
///C¢digo de inmueble entero
///Calle cadena de 50 caracteres
///N£mero cadena de 6 caracteres
///Piso cadena de 3 caracteres
///Departamento cadena de 3 caracteres
///Localidad cadena de 50 caracteres
///AntigÅedad construcci¢n entero
///Superficie total m2 float
///Superficie cubierta m2 float
///Habitaciones int
///Superficie balc¢n m2 float
///Con cochera bool
///Costo expensa float
///Precio venta float
///Precio alquiler float
///Apellido del due§o cadena de 50 caracteres
///Nombre del due§o cadena de 50 caracteres
///DNI del due§o cadena de 12 caracteres
///Celular del due§o cadena de 15 caracteres
///Para los locales se registra la siguiente informaci¢n:
///Atributo Tipo de dato
///C¢digo de inmueble entero
///Calle cadena de 50 caracteres
///N£mero cadena de 6 caracteres
///Localidad cadena de 50 caracteres
///AntigÅedad construcci¢n entero
///Superficie total m2 float
///Superficie estacionamiento m2 float
///Zona comercial bool
///Precio venta float
///Precio alquiler float
///Apellido del due§o cadena de 50 caracteres
///Nombre del due§o cadena de 50 caracteres
///DNI del due§o cadena de 12 caracteres
///Celular del due§o cadena de 15 caracteres
///
///Para los terrenos se registra la siguiente informaci¢n:
///Atributo --- Tipo de dato
///C¢digo de inmueble entero
///Calle cadena de 50 caracteres
///N£mero cadena de 6 caracteres
///Localidad cadena de 50 caracteres
///Ancho en metros float
///Largo en metros float
///Superficie construible m2 float
///Precio venta float
///Precio alquiler float
///Apellido del due§o cadena de 50 caracteres
///Nombre del due§o cadena de 50 caracteres
///DNI del due§o cadena de 12 caracteres
///Celular del due§o cadena de 15 caracteres
///
///Dise§ar las clases que considere necesarias para poder representar las casas, casas quintas,
///departamentos, locales y terrenos que se encuentran tanto a la venta como en alquiler. Teniendo
///en cuenta que:
///- Si un inmueble est† disponible para la venta es porque registra un precio de venta mayor a
///cero de lo contrario su valor es $ 0.
///- Si un inmueble est† disponible para alquiler es porque registra un precio de alquiler mayor a
///cero de lo contrario su valor es $ 0.
///Hacer un programa que solicite el tipo de inmueble (1 - Casa, 2 - Casa quinta, 3 - Departamento, 4 -
///Local o 5 - Terreno) y luego solicite los datos del mismo y los muestre por pantalla

int main()
{
    int opcion=10;

    while(opcion!=0){

    cout << endl << "Tipo de inmueble: " << endl;
    cout << endl << "1_ CASA" << endl;
    cout << "2_ CASA QUINTA" << endl;
    cout << "3_ DEPARTAMENTO" << endl;
    cout << "4_ LOCAL" << endl;
    cout << "5_ TERRENO" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:{
            cout << endl << "CASA: " << endl << endl;

            Casa objCasa;

            objCasa.setCasa();

            objCasa.mostrarCasa();

            break;
        }

        case 2:{
            cout << endl << "CASA QUINTA: " << endl << endl;

            CasaQuinta objCasaQuinta;

            objCasaQuinta.setCasaQuinta();

            objCasaQuinta.mostrarCasaQuinta();

            break;
        }

        case 3:{
            cout << endl << "DEPARTAMENTO: " << endl << endl;

            Departamento objDpto;

            objDpto.setDepartamento();

            objDpto.mostrarDepartamento();

            break;
        }

        case 4:{
            cout << endl << "LOCAL: " << endl << endl;

            Local objLocal;

            objLocal.setLocal();

            objLocal.mostrarLocal();

            break;
        }

        case 5:{
            cout << endl << "TERRENO: " << endl << endl;

            Terreno objTerreno;

            objTerreno.setTerreno();

            objTerreno.mostrarTerreno();

            break;
        }

        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}
