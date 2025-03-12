#include <iostream>
using namespace std;

///CONSIGNA: Una universidad desea registrar las notas de los ex menes finales de las 10 materias de una carrera. Para cada materia, se debe cargar la cantidad de
///alumnos inscriptos, y por cada alumno se debe registrar la siguiente informaci¢n:
///-Legajo: Un n£mero entero mayor a 0, que identifica al alumno de manera £nica.
///-Llamado: Un n£mero entero entre 1 y 3 que indica el llamado en el que el alumno rindi¢ el examen final (1 - Primer llamado, 2 - Segundo llamado, 3 - Tercer llamado).
///
///Modalidad: Un n£mero entero entre 1 y 4 que indica la modalidad del examen (1 - Presencial, 2- Distancia, 3 - H¡brido, 4 - Libre).
///-Nota: Un n£mero entero entre 0 y 10 que representa la nota obtenida en el examen (0 indica que el alumno estuvo ausente).
///La informaci¢n se encuentra agrupada por materia. Se pide calcular e informar lo siguiente:
///1. Materia con m s inscripciones: Determinar cu l de las 10 materias tiene la mayor cantidad de inscripciones.
///2. Modalidad con m s inscripciones: Determinar cu l de las modalidades tiene la mayor cantidad de inscripciones entre todas las materias.
///3. Estad¡sticas por llamado: Para cada llamado, la modalidad de examen que m s inscripciones haya registrado.
///4. Estad¡sticas sobre las materias: Por cada materia, la cantidad de alumnos que se hayan inscripto m s de una vez.

///PENDIENTE: Punto 4

int main()
{
    int vInscrXMateria[10]={}, legajo, llamado, modalidad, nota, materia;

    int mLlamadoModalidad[3][4]={0};

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR" << endl;
    cout << "2_ INFO MAT. CON MAS INSCR." << endl;
    cout << "3_ INFO MODAL. CON MAS INCR." << endl;
    cout << "4_ ESTADISTICAS POR LLAMADO" << endl;
    cout << "5_ ESTADISTICAS SOBRE LAS MATERIAS" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR: " << endl << endl;

            cout << "Legajo: [Salir --> 0]: ";
            cin >> legajo;

            while(legajo!=0){

                cout << "Materia (1-10): ";
                cin >> materia;

                cout << "Llamado: (1, 2 o 3): ";
                cin >> llamado;

                cout << "Modalidad: (1_Pres. / 2_Dist. / 3_Hibr. / 4_Libre): ";
                cin >> modalidad;

                cout << "Nota (0-10): ";
                cin >> nota;

                vInscrXMateria[materia-1]++;

                mLlamadoModalidad[llamado-1][modalidad-1]++;

                cout << endl << "Legajo: [Salir --> 0]: ";
                cin >> legajo;
            }

            break;

        case 2:{
            cout << endl << "INFO MAT. CON MAS INSCR." << endl << endl;

            int maxi = vInscrXMateria[0], ind = 0;

            for(int a=0; a<10; a++){

                if(vInscrXMateria[a]>maxi){

                    maxi = vInscrXMateria[a];
                    ind = a;

                }

            }

            cout << "La materia " << ind+1 << " tuvo mas incripciones (" << maxi << ")" << endl;

            break;
        }

        case 3:{
            cout << endl << "INFO MODAL. CON MAS INCR." << endl << endl;

            int vAcuModalidad[3]={};

            for(int b=0; b<3; b++){

                for(int c=0; c<4; c++){

                    vAcuModalidad[b]+=mLlamadoModalidad[b][c];

                }

            }

            int maxi=vAcuModalidad[0], ind=0;

            for(int d=0; d<3; d++){

                if(vAcuModalidad[d]>maxi){

                    maxi=vAcuModalidad[d];
                    ind=d;

                }

            }

            cout << "La modalidad " << ind+1 << " tuvo mas inscripciones (" << maxi << ")" << endl;

            break;
        }

        case 4:{
            cout << "ESTADISTICAS POR LLAMADO: " << endl << endl;

            for(int e=0; e<3; e++){

                int maxi, ind;

                for(int f=0; f<4; f++){

                    if(f==0){
                        maxi=mLlamadoModalidad[e][f];
                        ind=f;
                    }else if(mLlamadoModalidad[e][f]>maxi){
                        maxi=mLlamadoModalidad[e][f];
                        ind=f;
                    }

                }

                cout << "Llamado " << e+1 << " / Modalidad con mas incr.: " << ind+1 << " (" << maxi << ")" << endl;

            }

            break;
        }

        case 5:

            cout << endl << "ESTADISTICAS SOBRE LAS MATERIAS" << endl << endl;

            for(int g=0; g<10; g++){

                if(vInscrXMateria[g]>1){

                    cout << "Materia " << g+1 << " con mas de una incripcion" << endl;

                }

            }

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}
