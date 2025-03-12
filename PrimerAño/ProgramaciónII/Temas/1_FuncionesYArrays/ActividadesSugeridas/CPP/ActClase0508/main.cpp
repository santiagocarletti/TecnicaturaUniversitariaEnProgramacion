#include <iostream>
using namespace std;

///CONSIGNA: LAS AUTORIDADES DE LA CARRERA TUP DE LA UTN ESTÁN REALIZANDO UN ANÁLISIS DE LOS
///CURSOS VIRTUALES DE LAS DISTINTAS MATERIAS.
///POR CADA UNA DE LAS 20 MATERIAS DE LA CARRERA TIENE LA SIGUIENTE INFORMACIÓN
///-NÚMERO DE MATERIA (ENTRE 1 Y 20), NOMBRE, CANTIDAD DE ALUMNOS INSCRIPTOS, CANTIDAD DE PROFESORES
///
///ADEMÁS POR CADA INGRESO DE LOS ESTUDIANTES AL AULA VIRTUAL SE REGISTRA LO SIGUIENTE:
///-LEGAJO, FECHA DE ACCESO (DÍA Y MES), NÚMERO DE LA MATERIA A LA QUE INGRESO, CANTIDAD DE HORAS (NÚMERO REAL)
///EL FIN DE LOS DATOS SE INDICA CON UN NÚMERO DE LEGAJO IGUAL A 0.
///SE QUIERE RESPONDER LAS SIGUIENTES PREGUNTAS:
///a)LAS MATERIAS QUE NO TUVIERON ACCESO DE ALUMNOS NUNCA
///b)LA MATERIA QUE MÁS CANTIDAD DE HORAS REGISTRO DE ACCESO DE ALUMNOS
///c)POR CADA MATERIA Y DÍA DE MARZO, LA CANTIDAD DE ACCESOS DE ALUMNOS A LAS AULAS VIRTUALES.
///-HACER UN PROGRAMA EN EL MARCO DE UN PROYECTO DE CODEBLOCK CON UN MENÚ CON OPCIONES PARA CARGAR LOS DATOS,
///MOSTRAR CADA PUNTO Y SALIR DEL PROGRAMA.
///
///AGREGAR LAS SIGUIENTES PREGUNTAS AL EJERCICIO:
///d) LA CANTIDAD DE MATERIAS CON ACCESOS
///e) POR CADA MATERIA LA CANTIDAD DE ALUMNOS POR PROFESOR
///f) POR CADA MATERIA Y DÍA DE MARZO, LA CANTIDAD DE HORAS DE ACCESOS DE ALUMNOS A LAS AULAS VIRTUALES.

int main()
{
    ///HARCODE INFORMACION DE MATERIAS
    string vNombresMaterias[20]={"Matemática", "Física", "Química", "Biología", "Historia", "Geografía", "Arte", "Música", "Literatura", "Inglés", "Filosofía", "Ética", "Cívica", "Economía", "Computación", "Programación", "Deportes", "Astronomía", "Teatro", "Fotografía"};
    int mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[20][36];

    for(int a=0; a<20; a++){
        for(int b=0; b<36; b++){
            mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[a][b]=0;
        }
    }

    ///Profesores por materia
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[0][2]=1;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[1][2]=3;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[2][2]=2;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[3][2]=4;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[4][2]=1;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[5][2]=3;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[6][2]=1;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[7][2]=2;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[8][2]=4;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[9][2]=3;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[10][2]=1;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[11][2]=2;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[12][2]=3;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[13][2]=2;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[14][2]=1;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[15][2]=4;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[16][2]=2;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[17][2]=1;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[18][2]=4;
    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[19][2]=3;

    ///  Declaracion e inicializacion - Acumulador punto f
    int mHorasInscriptasPorDiaDeMarzo[20][31];
    for(int k=0; k<20; k++){

        for(int m=0; m<31; m++){

            mHorasInscriptasPorDiaDeMarzo[k][m]=0;

        }

    }

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ CARGAR" << endl;
    cout << "2_ MATERIAS SIN ACCESOS" << endl;
    cout << "3_ MATERIA CON MAS HS REQUERIDAS" << endl;
    cout << "4_ ACCESOS POR MATERIA MES DE MARZO" << endl;
    cout << "5_ CANTIDAD DE MATERIAS CON ACCESOS" << endl;
    cout << "6_ CANTIDAD DE ALUMNOS POR PROFESOR" << endl;
    cout << "7_ HORAS POR MATERIA Y DIA DE MARZO" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:
            cout << endl << "CARGAR" << endl << endl;

            int legajo, dia, mes, nroMateria, cantHoras;

            cout << "Legajo: ";
            cin >> legajo;

            while(legajo!=0){

                cout << "Dia (DD): ";
                cin >> dia;
                cout << "Mes (MM): ";
                cin >> mes;
                cout << "Nro. de materia: ";
                cin >> nroMateria;
                cout << "Cantidad horas: ";
                cin >> cantHoras;

                mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[nroMateria-1][1]++;
                mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[nroMateria-1][4]+=cantHoras;

                if(mes==03){
                    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[nroMateria-1][dia+4]++;

                    ///Punto f
                    mHorasInscriptasPorDiaDeMarzo[nroMateria-1][dia-1]+=cantHoras;

                }

                cout << endl << "Legajo: ";
                cin >> legajo;
            }

            break;

        case 2:
            cout << endl << "MATERIAS SIN ACCESOS: " << endl << endl;

            for(int a=0; a<20; a++){
                if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[a][1]==0){
                    cout << vNombresMaterias[a] << endl;
                }
            }

            break;

        case 3:{
            cout << endl << "MATERIA CON MAS HS REQUERIDAS: " << endl << endl;

                int maxi=-1, ind;

                for(int b=0; b<20; b++){
                    if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[b][4]>0){
                        maxi=mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[b][4];
                        ind=b;
                    }
                }

                cout << vNombresMaterias[ind] << ", con un total de " << maxi << " horas requeridas" << endl;

            break;
        }
        case 4:{
            cout << endl << "ACCESOS POR MATERIA MES DE MARZO: " << endl;

                for(int c=0; c<20; c++){

                    cout << endl << endl << vNombresMaterias[c] << endl << endl;

                    for(int d=0; d<31; d++){

                            if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[c][d+5]!=0){

                                cout << "Dia " << d+1 << ": " << mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[c][d+5] << endl;

                            }

                    }

                }

                cout << endl << endl;

            break;
        }
        case 5:{

            cout << endl << "CANTIDAD DE MATERIAS CON ACCESOS: " << endl;

                int contador=0;

                for(int e=0; e<20; e++){

                    if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[e][1]!=0)
                        contador++;

                }

                cout << endl << contador << " materia(s)";

                if(contador>0){

                    cout << ": (";

                        for(int f=0; f<20; f++){

                            if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[f][1]!=0)
                                cout << vNombresMaterias[f] << ", ";

                        }
                        cout << ")";
                }

                cout << endl;

            break;
        }
        case 6:{

            cout << endl << "CANTIDAD DE ALUMNOS POR PROFESOR: " << endl << endl;

            for(int g=0; g<20; g++){

                if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[g][2]>
                   mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[g][1]){

                    cout << vNombresMaterias[g] << " cuenta con mas profesores que alumnos" << endl;

                }

            }

            cout << endl;

            for(int h=0; h<20; h++){

                if(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[h][2]<=
                   mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[h][1]){

                    cout << vNombresMaterias[h] << ": Relacion Alumnos:Profesor = " <<
                    float(mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[h][1])/
                    mNumMateriaCantInscripcionesCantProfesoresNroAccesosAcuHsTotalesDiasMarzo[h][2] <<
                    ":1" << endl;

                }

            }

            break;
        }
        case 7:{

            cout << endl << "HORAS POR MATERIA Y DIA DE MARZO: " << endl;

            for(int j=0; j<20; j++){

                cout << endl << endl << vNombresMaterias[j] << endl;

                for(int i=0; i<31; i++){

                    if(mHorasInscriptasPorDiaDeMarzo[j][i]!=0){

                        cout << endl << "Dia " << i+1 << ": " << mHorasInscriptasPorDiaDeMarzo[j][i] << " horas inscriptas";

                    }

                }

            }

            cout << endl;

            break;
        }
        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}
