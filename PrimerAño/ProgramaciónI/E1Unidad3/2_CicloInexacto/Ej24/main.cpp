#include <iostream>

using namespace std;

///24) ENUNCIADO: Se dispone de la informaci¢n de los ex menes rendidos por algunos
///estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
///- Legajo del estudiante (entero)
///- C¢digo de materia (entero)
///- Nota (float)
///La finalizaci¢n de la carga de datos se indica con un legajo de estudiante mayor
///a 30000. Calcular e informar:
///- La nota promedio entre todos los estudiantes.
///- El legajo del estudiante con menor nota.
///- La cantidad de ex menes rendidos para la materia 10.
///- El porcentaje de aprobados y no aprobados.
///NOTA: Un examen se considera aprobado con nota >= 6
///NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.

int main()
{
    int leg, codMat, con=0, legNMin, conM10=0, conA=0, conD=0;
    float nota, sumNota=0, notaMin;
    bool menNota=0;

    cout << "Legajo: ";
    cin >> leg;
    cout << "Codigo Materia: ";
    cin >> codMat;
    cout << "Nota: ";
    cin >> nota;

    while(leg<30000)
    {

        con++;
        sumNota+=nota;

        if(con==1 && menNota==0)
        {
            notaMin=nota;
            legNMin=leg;
        }
        else if(nota<notaMin)
        {
            notaMin=nota;
            legNMin=leg;
            menNota=1;
        }

        if(codMat==10)
        {
            conM10++;
        }

        if(nota>5)
        {
            conA++;
        }
        else
        {
            conD++;
        }


        cout << "Legajo: ";
        cin >> leg;
        cout << "Codigo Materia: ";
        cin >> codMat;
        cout << "Nota: ";
        cin >> nota;

        //CIERRA WHILE
    }

    cout << "Nota promedio entre todos los estudiantes: " << sumNota/con << endl;
    cout << "El estudiante con legajo num: " << legNMin << " tiene la menor nota (" << notaMin << ")." << endl;
    cout << "Examenes rendidos para la materia con codigo 10: " << conM10 << endl;
    cout << "Aprobados: " << conA*100/con << "%." << endl;
    cout << "Desaprobados: " << conD*100/con << "%." << endl;

    return 0;
}
