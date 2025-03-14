#pragma once
#include <string>
using namespace std;
void mostrarMenu(int &opc);
void cargarMazoDeCartas(string vecCartas[], int vecPuntajeCartas[]);
void determinarContrincantes(string &jugador1, string &jugador2);
void obtenerNaipe(int codigo, string &carta, string vecCartas[]);
void DarVueltaEmbaucadora(string &nombre);
void GenerarNaipes(int vecCodigosValores[]);
void Repartir(int vecCodigosValores[], string vecCartas[], int vecCartasJugador1Ronda1[], int vecCartasJugador2Ronda1[], string nombreJugador1, string nombreJugador2);
int calcularPuntajeDeRonda(string figura, int vecCartasDelJugador[], int vecPuntajeCartas[]);
void ManejarEmbaucadora(string &nombre, int ronda, string nombreJugador1, string nombreJugador2, int puntajeTotalJugador1, int puntajeTotalJugador2, bool &menos20J1, bool &menos20J2);
int calcularPuntajeTotal(int vecPuntajesRondasJugador[]);
void modificarPuntajeRondaAnterior(int ronda, bool menos20, int vecPuntajesRondasJugador[]);
void determinarGanador(string nombreJugador1, string nombreJugador2, int totalPuntosJugador1, int totalPuntosJugador2, int vecPuntajesRondasJugador1[], int vecPuntajesRondasJugador2[], string &ganadorHistorico, int &ptsGanadorHistorico);
void resetearValores(int &ronda, int &totalPuntosJugador1, int &totalPuntosJugador2, int vecPuntajesRondasJugador1[], int vecPuntajesRondasJugador2[]);
void mostrarCreditos();
void mostrarEstadisticas(int ptsGanadorHistorico, string ganadorHistorico);
void mostrarTabla(int vecPuntajesRondasJugador1[], int vecPuntajesRondasJugador2[], int totalPuntosJugador1, int totalPuntosJugador2, string nombreJugador1, string nombreJugador2);
