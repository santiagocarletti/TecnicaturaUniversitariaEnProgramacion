#include <iostream>
using namespace std;

#include "Alumno.h"

///CONSIGNA: Cargar un vector de alumnos de 5 y luego. A) Dado un legajo, hacer una funci¢n que devuelva la
///posici¢n del alumno con ese legajo en el vector. Si no existe el legajo tiene que devolver -1.
///B) Dado un nombre que se ingresa por teclado, informar
///la cantidad de veces que ese nombre aparece en el vector de alumnos.
///Opcional: Men£ con Cargar alumnos, Buscar por legajo y contar nombres

int buscarLegajo(Alumno vAlumnos[5], int legajoBuscar);

int main()
{
    Alumno vAlumnos[5];

    int legajoBuscar, contadorNombres=0;

    string nombreContabilizar;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR ALUMNOS" << endl;
    cout << "2_ BUSCAR LEGAJO" << endl;
    cout << "3_ CONTABILIZAR NOMBRE" << endl;
    cout << "4_ MOSTRAR ALUMNOS" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR ALUMNOS: " << endl;

            for(int a=0; a<5; a++){

                string nombre;
                int legajo;

                cout << endl << "Alumno " << a+1 << endl << endl << "Nombre: ";
                cin >> nombre;
                cout << "Legajo: ";
                cin >> legajo;

                vAlumnos[a].setNombre(nombre);
                vAlumnos[a].setLegajo(legajo);

            }

            break;

        case 2:
            cout << endl << "BUSCAR LEGAJO: " << endl << endl;

            cout << "Legajo a buscar: ";
            cin >> legajoBuscar;

            cout << endl << "Indice: " << buscarLegajo(vAlumnos, legajoBuscar) << endl;

            break;

        case 3:
            cout << endl << "CONTABILIZAR NOMBRE: " << endl << endl;

            cout << "Nombre a contabilizar: ";
            cin >> nombreContabilizar;

            for(int d=0; d<5; d++){

                if(nombreContabilizar == vAlumnos[d].getNombre()){

                    contadorNombres++;

                }

            }

            cout << endl << "Nombre encontrado " << contadorNombres << " veces" << endl;

            contadorNombres=0;

            break;

        case 4:

            cout << endl << "MOSTRAR ALUMNOS: " << endl;

            for(int b=0; b<5; b++){

                cout << endl << vAlumnos[b].getNombre() << endl << vAlumnos[b].getLegajo() << endl;

            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}

int buscarLegajo(Alumno vAlumnos[5], int legajoBuscar){

    int indice = -1;

    for(int c=0; c<5; c++){

        if(legajoBuscar == vAlumnos[c].getLegajo()){

            indice = c;
            continue;

        }

    }

        return indice;
}
