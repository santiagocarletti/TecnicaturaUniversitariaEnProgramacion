#include <iostream>
using namespace std;

int main()
{
    int vNotas[78]={};

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR NOTAS" << endl;
    cout << "2_ BUSCAR NOTA" << endl;
    cout << "3_ CONTABILIZAR ALUMNOS QUE SUPERARON EL PROMEDIO" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR NOTAS: " << endl << endl;

            int nota;

            for(int a=0; a<78; a++){
                cout << "Nota parcial - Alumno " << a+1 << ": ";
                cin >> nota;

                vNotas[a]=nota;
            }

            break;

        case 2:{
            cout << endl << "BUSCAR NOTA: " << endl << endl;

            int nroAlumno;

            cout << "Ingrese el numero de alumno: ";
            cin >> nroAlumno;

            for(int b=0; b<78; b++){

                if(nroAlumno-1==b){

                    if(vNotas[b]==0){
                        cout << endl << "Nota sin cargar.." << endl;
                        continue;
                    }else{
                        cout << endl << "Alumno numero " << nroAlumno << " // calificacion parcial: " << vNotas[b] << endl;
                        continue;
                    }

                }
            }

            break;
        }

        case 3:{
            cout << endl << "CONTABILIZAR ALUMNOS QUE SUPERARON EL PROMEDIO:" << endl;

            float acuNotas=0, promedio;
            int acuAlumnos=0;

            for(int c=0; c<78; c++){

                acuNotas+=vNotas[c];

            }

            promedio=acuNotas/78;

            for(int d=0; d<78; d++){

                if(vNotas[d]>promedio){
                    acuAlumnos++;
                }

            }

            if(acuNotas==0){
                cout << endl << "Notas sin cargar.." << endl;
            }else{
                cout << endl << acuAlumnos << " alumnos han superado el promedio (" << promedio << ")." << endl;
            }

            break;

        }default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }


    return 0;
}
