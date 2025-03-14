#include <iostream>

using namespace std;

///25) ENUNCIADO: El festival Larapalooza, el mejor festival musical del mundo, brindar  una serie
///de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
///registre los artistas que participar n. Por cada artista se registr¢:
///- N£mero de artista (entero)
///- Integrantes (entero)
///- Jornada (1, 2 o 3)
///- Duraci¢n del show en minutos (entero)
///La informaci¢n no se encuentra ordenada bajo ning£n criterio. La carga de
///datos se finaliza con un n£mero de artista igual a cero. Calcular e informar:
///- El n£mero de artista que realice el show m s largo de la jornada 1.
///- La cantidad de solistas (artistas de 1 integrante) que participaron en
///cada una de las jornadas. (se muestran tres resultados).
///- La jornada m s extensa (en minutos totales).
///- Duraci¢n promedio de show por artista (se muestra un resultado).

int main()
{
    int nArt, integ, jor, dur, durPA, artPA, con=0, sol1=0, sol2=0, sol3=0, acu1=0, acu2=0, acu3=0, acuPD=0;

    cout << "Numero de artista: ";
    cin >> nArt;
    cout << "Integrantes: ";
    cin >> integ;
    cout << "Numero de jornada: ";
    cin >> jor;
    cout << "Duracion: ";
    cin >> dur;

    while(nArt!=0){

    con++;

    if(jor==1){
        if(con==1){
            durPA=dur;
            artPA=nArt;
        }else if(dur>durPA){
            durPA=dur;
            artPA=nArt;
        }
    }

    if(integ==1){
        switch(jor){
    case 1:
        sol1++;
        break;
    case 2:
        sol2++;
        break;
    case 3:
        sol3++;
        break;
        }
    }

    switch(jor){
case 1:
    acu1+=dur;
    break;
case 2:
    acu2+=dur;
    break;
case 3:
    acu3+=dur;
    break;
    }

    acuPD+=dur;

    cout << "Numero de artista: ";
    cin >> nArt;
    cout << "Integrantes: ";
    cin >> integ;
    cout << "Numero de jornada: ";
    cin >> jor;
    cout << "Duracion: ";
    cin >> dur;

    //CIERRA WHILE
    }

    cout << "Artista con show mas largo de la 1ra jornada: " << artPA << endl;
    cout << "Solistas jornada 1: " << sol1 << ". Solistas jornada 2: " << sol2 << ". Solistas jornada 3: " << sol3 << endl;

    if(acu1>acu2 && acu1>acu3){
        cout << "La jornada 1 fue la mas extensa." << endl;
    }else if(acu2>acu1 && acu2>acu3){
        cout << "La jornada 2 fue la mas extensa." << endl;
    }else{
        cout << "La jornada 3 fue la mas extensa." << endl;
    }

    cout << "Duración promedio de cada show: " << acuPD/con << endl;

    return 0;
}
