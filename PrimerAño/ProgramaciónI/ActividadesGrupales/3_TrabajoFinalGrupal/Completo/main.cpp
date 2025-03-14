#include <iostream>
using namespace std;
#include <ctime>
#include "funciones.h"
#include <locale>

int main()
{
    setlocale(LC_ALL, "Spanish");
    srand(time(0));
    int opc, ronda = 1;
    string vecCartas[20], nombreJugador1, nombreJugador2, paloEmbaucadora, nombreGanador, salir;
    int vecPuntajeCartas[20], vecCodigosValores[10], puntajeGanador;
    /// vectores para guardar datos de una mano de un jugador en una ronda
    int vecCartasJugador1Ronda[5], vecCartasJugador2Ronda[5];
    int vecPuntajesRondasJugador1[3]= {}, vecPuntajesRondasJugador2[3]= {};
    int totalPuntosJugador1 = 0, totalPuntosJugador2 = 0;
    ///Variables para descuento de puntos por cambio de 'Embaucadora'
    bool menos20J1 = false, menos20J2 = false;
    ///variables para 'Estadísticas'
    string ganadorHistorico;
    int ptsGanadorHistorico=0;

    while(true){

        system("cls");
        mostrarMenu(opc);

        switch(opc){

        case 1:
            system("cls");
            cargarMazoDeCartas(vecCartas, vecPuntajeCartas);
            determinarContrincantes(nombreJugador1, nombreJugador2);
            system("cls");
            GenerarNaipes(vecCodigosValores);
            cout << "RONDA #1 | " << nombreJugador1 << " VERSUS " << nombreJugador2 << endl;
            Repartir(vecCodigosValores, vecCartas, vecCartasJugador1Ronda, vecCartasJugador2Ronda, nombreJugador1, nombreJugador2);
            ManejarEmbaucadora(paloEmbaucadora, ronda, nombreJugador1, nombreJugador2, totalPuntosJugador1, totalPuntosJugador2, menos20J1, menos20J2);
            cout << "-------------------------------------" << endl;
            cout << "PUNTAJES 1ª RONDA: " << endl << endl;
            vecPuntajesRondasJugador1[0]=calcularPuntajeDeRonda(paloEmbaucadora, vecCartasJugador1Ronda, vecPuntajeCartas);
            vecPuntajesRondasJugador2[0]=calcularPuntajeDeRonda(paloEmbaucadora, vecCartasJugador2Ronda, vecPuntajeCartas);
            cout << nombreJugador1 << " : " << vecPuntajesRondasJugador1[0] << " PUNTOS." << endl;
            cout << nombreJugador2 << " : " << vecPuntajesRondasJugador2[0] << " PUNTOS." << endl;
            cout << "-------------------------------------" << endl;
            cout << endl << "-------------------------------------" << endl;
            cout << "PUNTAJE TOTAL: " << endl << endl;
            totalPuntosJugador1 = calcularPuntajeTotal(vecPuntajesRondasJugador1);
            totalPuntosJugador2 = calcularPuntajeTotal(vecPuntajesRondasJugador2);
            cout << nombreJugador1 << " : " << totalPuntosJugador1 << endl;
            cout << nombreJugador2 << " : " << totalPuntosJugador2 << endl;
            cout << "-------------------------------------" << endl << endl;

            ronda++;

            system("pause");
            system("cls");

            /// pasamos a la siguiente ronda...
            GenerarNaipes(vecCodigosValores);
            cout << "RONDA #2 | " << nombreJugador1 << " VERSUS " << nombreJugador2 << endl;
            Repartir(vecCodigosValores, vecCartas, vecCartasJugador1Ronda, vecCartasJugador2Ronda, nombreJugador1, nombreJugador2);
            ManejarEmbaucadora(paloEmbaucadora, ronda, nombreJugador1, nombreJugador2, totalPuntosJugador1, totalPuntosJugador2, menos20J1, menos20J2);
            cout << endl << "-------------------------------------" << endl;
            cout << "PUNTAJES 2ª RONDA: " << endl << endl;
            vecPuntajesRondasJugador1[1]=calcularPuntajeDeRonda(paloEmbaucadora, vecCartasJugador1Ronda, vecPuntajeCartas);
            vecPuntajesRondasJugador2[1]=calcularPuntajeDeRonda(paloEmbaucadora, vecCartasJugador2Ronda, vecPuntajeCartas);
            cout << nombreJugador1 << " : " << vecPuntajesRondasJugador1[1] << " PUNTOS." << endl;
            cout << nombreJugador2 << " : " << vecPuntajesRondasJugador2[1] << " PUNTOS." << endl;
            cout << "-------------------------------------" << endl;
            modificarPuntajeRondaAnterior(ronda, menos20J1, vecPuntajesRondasJugador1);
            modificarPuntajeRondaAnterior(ronda, menos20J2, vecPuntajesRondasJugador2);
            cout << endl << "-------------------------------------" << endl;
            cout  << "PUNTAJE TOTAL: " << endl << endl;
            totalPuntosJugador1 = calcularPuntajeTotal(vecPuntajesRondasJugador1);
            totalPuntosJugador2 = calcularPuntajeTotal(vecPuntajesRondasJugador2);
            cout << nombreJugador1 << " : " << totalPuntosJugador1 << endl;
            cout << nombreJugador2 << " : " << totalPuntosJugador2 << endl;
            cout << "-------------------------------------" << endl << endl;

            ronda++;

            system("pause");
            system("cls");

            /// pasamos a la siguiente ronda...
            GenerarNaipes(vecCodigosValores);
            cout << "RONDA #3 | " << nombreJugador1 << " versus " << nombreJugador2 << endl;
            Repartir(vecCodigosValores, vecCartas, vecCartasJugador1Ronda, vecCartasJugador2Ronda, nombreJugador1, nombreJugador2);
            ManejarEmbaucadora(paloEmbaucadora, ronda, nombreJugador1, nombreJugador2, totalPuntosJugador1, totalPuntosJugador2, menos20J1, menos20J2);
            cout << endl << "-------------------------------------" << endl;
            cout << "PUNTAJES 3ª RONDA: " << endl << endl;
            vecPuntajesRondasJugador1[2]=calcularPuntajeDeRonda(paloEmbaucadora, vecCartasJugador1Ronda, vecPuntajeCartas);
            vecPuntajesRondasJugador2[2]=calcularPuntajeDeRonda(paloEmbaucadora, vecCartasJugador2Ronda, vecPuntajeCartas);
            cout << nombreJugador1 << " : " << vecPuntajesRondasJugador1[2] << " PUNTOS." << endl;
            cout << nombreJugador2 << " : " << vecPuntajesRondasJugador2[2] << " PUNTOS." << endl;
            cout << "-------------------------------------" << endl;
            modificarPuntajeRondaAnterior(ronda, menos20J1, vecPuntajesRondasJugador1);
            modificarPuntajeRondaAnterior(ronda, menos20J2, vecPuntajesRondasJugador2);
            cout << endl << "-------------------------------------" << endl;
            cout << "PUNTAJE TOTAL: " << endl << endl;
            totalPuntosJugador1 = calcularPuntajeTotal(vecPuntajesRondasJugador1);
            totalPuntosJugador2 = calcularPuntajeTotal(vecPuntajesRondasJugador2);
            cout << nombreJugador1 << " : " << totalPuntosJugador1 << endl;
            cout << nombreJugador2 << " : " << totalPuntosJugador2 << endl;
            cout << "-------------------------------------" << endl;

            cout << endl;
            cout << "¡VER GANADOR/A!" << endl << endl;
            system("pause");
            system("cls");
            mostrarTabla(vecPuntajesRondasJugador1, vecPuntajesRondasJugador2, totalPuntosJugador1, totalPuntosJugador2, nombreJugador1, nombreJugador2);
            determinarGanador(nombreJugador1, nombreJugador2, totalPuntosJugador1, totalPuntosJugador2, vecPuntajesRondasJugador1, vecPuntajesRondasJugador2, ganadorHistorico, ptsGanadorHistorico);
            resetearValores(ronda, totalPuntosJugador1, totalPuntosJugador2, vecPuntajesRondasJugador1, vecPuntajesRondasJugador2);

            system("pause");

            break;

        case 2:
            system("cls");
            mostrarEstadisticas(ptsGanadorHistorico, ganadorHistorico);
            system("pause");
            break;
        case 3:
            system("cls");
            mostrarCreditos();
            system("pause");
            break;
        case 0:
            system("cls");
            cout << " ¿DESEA SALIR DEL JUEGO? (S/N) ";
            cin >> salir;
            if(salir == "S"){
                return 0;
            }else{
                cout << " VOLVER AL MENU PRINCIPAL. ";
                system("pause");
            }

            break;
        default:
            cout << "OPCION INCORRECTA" << endl;
            system("pause");
            break;

        }

    }

}
