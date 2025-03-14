#include <iostream>
using namespace std;
#include "funciones.h"

void mostrarMenu(int &opc){

    cout << "-------------------------------------" << endl;
    cout << "EMBAUCADO                           |" << endl;
    cout << "-------------------------------------" << endl;
    cout << "                                    |" << endl;
    cout << "1- JUGAR" << "                            |" << endl;
    cout << "2- ESTADISTICAS" << "                     |" << endl;
    cout << "3- CREDITOS" << "                         |" << endl;
    cout << "                                    |" << endl;
    cout << "0- SALIR" << "                            |" << endl;
    cout << "                                    |" << endl;
    cout << "------------------------------------|" << endl;
    cout << endl;

    cout << "OPCION: ";
    cin >> opc;
    cout << "-------------------------------------" << endl;

}

void determinarContrincantes(string& jugador1, string& jugador2){

    string confirma;

    do
    {
        cout << "------------------------------------------------" << endl;
        cout << "EMBAUCADO" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "ANTES DE COMENZAR, DEBEN REGISTRAR SUS NOMBRES: " << endl << endl;
        cout << "NOMBRE DEL JUGADOR 1: ";
        cin >> jugador1;
        cout << "NOMBRE DEL JUGADOR 2: ";
        cin >> jugador2;
        cout << endl << "¿CONFIRMAR NOMBRES? (S/N): ";
        cin >> confirma;

        if(confirma != "S")
        {
            cout << "------------------------------------------------" << endl;
            cout << "INGRESAR AMBOS NOMBRES Y CONFIRMAR.." << endl;
            cout << "------------------------------------------------" << endl;
        }

    }

    while(confirma != "S");

}

void cargarMazoDeCartas(string vecCartas[], int vecPuntajeCartas[]){

    int i;

    for(i=0; i<20; i++){

        switch(i){

        case 0:
            vecCartas[i]="10 DE CORAZONES (10 PUNTOS)";
            vecPuntajeCartas[i]=10;
            break;
        case 1:
            vecCartas[i]="J DE CORAZONES (11 PUNTOS)";
            vecPuntajeCartas[i]=11;
            break;
        case 2:
            vecCartas[i]="Q DE CORAZONES (12 PUNTOS)";
            vecPuntajeCartas[i]=12;
            break;
        case 3:
            vecCartas[i]="K DE CORAZONES (15 PUNTOS)";
            vecPuntajeCartas[i]=15;
            break;
        case 4:
            vecCartas[i]="A DE CORAZONES (20 PUNTOS)";
            vecPuntajeCartas[i]=20;
            break;
        case 5:
            vecCartas[i]="10 DE DIAMANTES (10 PUNTOS)";
            vecPuntajeCartas[i]=10;
            break;
        case 6:
            vecCartas[i]="J DE DIAMANTES (11 PUNTOS)";
            vecPuntajeCartas[i]=11;
            break;
        case 7:
            vecCartas[i]="Q DE DIAMANTES (12 PUNTOS)";
            vecPuntajeCartas[i]=12;
            break;
        case 8:
            vecCartas[i]="K DE DIAMANTES (15 PUNTOS)";
            vecPuntajeCartas[i]=15;
            break;
        case 9:
            vecCartas[i]="A DE DIAMANTES (20 PUNTOS)";
            vecPuntajeCartas[i]=20;
            break;
        case 10:
            vecCartas[i]="10 DE PICAS (10 PUNTOS)";
            vecPuntajeCartas[i]=10;
            break;
        case 11:
            vecCartas[i]="J DE PICAS (11 PUNTOS)";
            vecPuntajeCartas[i]=11;
            break;
        case 12:
            vecCartas[i]="Q DE PICAS (12 PUNTOS)";
            vecPuntajeCartas[i]=12;
            break;
        case 13:
            vecCartas[i]="K DE PICAS (15 PUNTOS)";
            vecPuntajeCartas[i]=15;
            break;
        case 14:
            vecCartas[i]="A DE PICAS (20 PUNTOS)";
            vecPuntajeCartas[i]=20;
            break;
        case 15:
            vecCartas[i]="10 DE TREBOLES (10 PUNTOS)";
            vecPuntajeCartas[i]=10;
            break;
        case 16:
            vecCartas[i]="J DE TREBOLES (11 PUNTOS)";
            vecPuntajeCartas[i]=11;
            break;
        case 17:
            vecCartas[i]="Q DE TREBOLES (12 PUNTOS)";
            vecPuntajeCartas[i]=12;
            break;
        case 18:
            vecCartas[i]="K DE TREBOLES (15 PUNTOS)";
            vecPuntajeCartas[i]=15;
            break;
        case 19:
            vecCartas[i]="A DE TREBOLES (20 PUNTOS)";
            vecPuntajeCartas[i]=20;
            break;
        }

    }

}

void GenerarNaipes(int vecCodigosValores[]){

    int i, numValorAleatorio, contador=0;
    bool vectorBanderas[20];

    for(i=0;i<20;i++){
        vectorBanderas[i]=false;
    }

     numValorAleatorio = (rand()%20);

     while(contador<10){
        if(!vectorBanderas[numValorAleatorio]){
            vecCodigosValores[contador]=numValorAleatorio;
            vectorBanderas[numValorAleatorio]=true;
            contador++;
        }

        numValorAleatorio = (rand()%20);

     }

}

void Repartir(int vecCodigosValores[], string vecCartas[], int vecCartasJugador1Ronda[], int vecCartasJugador2Ronda[], string nombreJugador1, string nombreJugador2){

    int i;
    string palo, carta;

      cout << "-------------------------------------" << endl;
      cout << "MANO DEL JUGADOR 1: " << nombreJugador1 << endl;

      for(i=0; i<5; i++){
         obtenerNaipe(vecCodigosValores[i], carta, vecCartas);
         vecCartasJugador1Ronda[i]=vecCodigosValores[i];
         cout << i+1 << ") " << carta << endl;
      }

      cout << "-------------------------------------" << endl;

      cout << "Mano del Jugador 2: " << nombreJugador2 << endl;

      for(i=0; i<5; i++){
         obtenerNaipe(vecCodigosValores[i+5], carta, vecCartas);
         vecCartasJugador2Ronda[i]=vecCodigosValores[i+5];
         cout << i+1 << ") " << carta << endl;
      }

      cout << "-------------------------------------" << endl;

}

void obtenerNaipe(int codigo, string& carta, string vecCartas[]){

    carta = vecCartas[codigo];

}

void ManejarEmbaucadora(string &nombre, int ronda, string nombreJugador1, string nombreJugador2, int puntajeTotalJugador1, int puntajeTotalJugador2, bool &menos20J1, bool &menos20J2){

    string eleccion;
    bool cambioRondaUno = false;

    DarVueltaEmbaucadora(nombre);

    if(ronda==2 && puntajeTotalJugador1>19){
        cout << nombreJugador1 << ", QUIERES SACAR OTRA EMBAUCADORA POR 20 PUNTOS?: (S/N): ";
        cin >> eleccion;

        if(eleccion == "S"){
            DarVueltaEmbaucadora(nombre);
            cambioRondaUno = true;
            menos20J1=true;
        }

    }

    if(ronda==2 && puntajeTotalJugador2>19 && !cambioRondaUno){
        cout << nombreJugador2 << ", QUIERES SACAR OTRA EMBAUCADORA POR 20 PUNTOS?: (S/N): ";
        cin >> eleccion;

        if(eleccion == "S"){
            DarVueltaEmbaucadora(nombre);
            menos20J2=true;
        }

    }

    cambioRondaUno=false;

    if(ronda==3 && puntajeTotalJugador2>19){
        menos20J2=false;

        cout << nombreJugador2 << ", QUIERES SACAR OTRA EMBAUCADORA POR 20 PUNTOS?: (S/N): ";
        cin >> eleccion;

        if(eleccion == "S"){
            DarVueltaEmbaucadora(nombre);
            cambioRondaUno = true;
            menos20J2=true;
        }

    }

    if(ronda==3 && puntajeTotalJugador1>19 && !cambioRondaUno){
        menos20J1=false;

        cout << nombreJugador1 << ", QUIERES SACAR OTRA EMBAUCADORA POR 20 PUNTOS?: (S/N): ";
        cin >> eleccion;

        if(eleccion == "S"){
            DarVueltaEmbaucadora(nombre);
            menos20J1=true;
        }

    }

}

void DarVueltaEmbaucadora(string &nombre){

    int codigo;
    codigo = 1+(rand()%4);

    if (codigo <= 0)
    {
        nombre = "ERROR!";
    }
    else if (codigo == 1)
    {
        nombre = "CORAZONES";
    }
    else if (codigo == 2)
    {
        nombre = "DIAMANTES";
    }
    else if (codigo == 3)
    {
        nombre = "PICAS";
    }
    else
    {
        nombre = "TREBOLES";
    }

    cout << endl << "-------------------------------------" << endl;
    cout << "CARTA EMBAUCADORA: " << nombre << "         " << endl;
    cout << "-------------------------------------" << endl << endl;
}


int calcularPuntajeDeRonda(string figura, int vecCartasDelJugador[], int vecPuntajeCartas[]){

    int numNoSumaPuntaje=0, i, puntaje=0;

    if(figura =="CORAZONES"){
         numNoSumaPuntaje = 0;
    }else if(figura == "DIAMANTES"){
         numNoSumaPuntaje = 5;
    }else if(figura=="PICAS"){
         numNoSumaPuntaje = 10;
    }else{
         numNoSumaPuntaje = 15;
    }

    for(i=0;i<5;i++){
        if(vecCartasDelJugador[i] < numNoSumaPuntaje || vecCartasDelJugador[i] > numNoSumaPuntaje+4){
            puntaje += vecPuntajeCartas[vecCartasDelJugador[i]];
        }
    }

    return puntaje;

}

int calcularPuntajeTotal(int vecPuntajesRondasJugador[]){
    int total;
    total = vecPuntajesRondasJugador[0]+vecPuntajesRondasJugador[1]+vecPuntajesRondasJugador[2];

    return total;

}

void modificarPuntajeRondaAnterior(int ronda, bool menos20, int vecPuntajesRondasJugador[]){
      if(menos20){
        ///si viene ronda 2, hay que cambiar el valor que guardamos el vecPuntajeRondasJugador en posicion 0, por eso restamos 2
        /// si viene ronda 3, hay que cambiar el valor que guardamos el vecPuntajeRondasJugador en posicion 1, por eso restamos 2
        vecPuntajesRondasJugador[ronda-2]-=20;
        menos20 = false;
    }

}

void determinarGanador(string nombreJugador1, string nombreJugador2, int totalPuntosJugador1, int totalPuntosJugador2, int vecPuntajesRondasJugador1[], int vecPuntajesRondasJugador2[], string &ganadorHistorico, int &ptsGanadorHistorico){

   string ganador;
   int ptsGanador, i, mejorRondaJ1 = vecPuntajesRondasJugador1[0], mejorRondaJ2 = vecPuntajesRondasJugador2[0];

   if(totalPuntosJugador1>totalPuntosJugador2){
        ganador = nombreJugador1;
        ptsGanador = totalPuntosJugador1;
        cout << "GANADOR: " << ganador << " CON " << ptsGanador << " PUNTOS DE VICTORIA! "  << endl << endl;
   }else if(totalPuntosJugador2>totalPuntosJugador1){
        ganador = nombreJugador2;
        ptsGanador = totalPuntosJugador2;
        cout << "GANADOR: " << ganador<< " CON " << ptsGanador << " PUNTOS DE VICTORIA! "  << endl << endl;
   }else if(totalPuntosJugador1==totalPuntosJugador2){

        for(i=1; i<2; i++){

          if(vecPuntajesRondasJugador1[i]>mejorRondaJ1){
                mejorRondaJ1=vecPuntajesRondasJugador1[i];
          }

          if(vecPuntajesRondasJugador2[i]>mejorRondaJ2){
                mejorRondaJ2=vecPuntajesRondasJugador2[i];
          }

        }

        if(mejorRondaJ1>mejorRondaJ2){
            ganador = nombreJugador1;
            ///Registro de puntos para 'Estadisticas':
            ptsGanador=totalPuntosJugador1;
        }else{
            ganador = nombreJugador2;
            ///Registro de puntos para 'Estadisticas':
            ptsGanador=totalPuntosJugador2;
        }

        cout << "GANADOR POR DESEMPATE: " << ganador << endl << endl;
   }

   ///Estadisticas
   if(ptsGanadorHistorico==0){
        ganadorHistorico=ganador;
        ptsGanadorHistorico=ptsGanador;
   }else if(ptsGanador>ptsGanadorHistorico){
        ptsGanadorHistorico=ptsGanador;
        ganadorHistorico=ganador;
   }

}

void resetearValores(int &ronda, int &totalPuntosJugador1, int &totalPuntosJugador2, int vecPuntajesRondasJugador1[], int vecPuntajesRondasJugador2[]){

    int i;
    ronda = 1;
    totalPuntosJugador1 = 0;
    totalPuntosJugador2 = 0;

    for(i=0; i <3; i++){
        vecPuntajesRondasJugador1[i] = 0;
        vecPuntajesRondasJugador2[i] = 0;
    }

}

void mostrarCreditos(){
    cout << "----------------------------------------------" << endl;
    cout << "| CREDITOS                                   |" << endl;
    cout << "|                                            |" << endl;
    cout << "|---------------------------------------------" << endl;
    cout << "| GRUPO 4                                    |" << endl;
    cout << "|---------------------------------------------" << endl;
    cout << "|                                            |" << endl;
    cout << "| GARCIA, MARIA LOURDES // LEGAJO Nº 30354   |" << endl;
    cout << "| CARLETTI, SANTIAGO // LEGAJO Nº 30275      |" << endl;
    cout << "| LUPPINI, RAUL OSCAR // LEGAJO Nº 30439     |" << endl;
    cout << "|                                            |" << endl;
    cout << "----------------------------------------------" << endl << endl;
}

void mostrarEstadisticas(int ptsGanadorHistorico, string ganadorHistorico){
    if(ptsGanadorHistorico!=0){
        cout << endl << "-----------------------------------------------------" << endl;
        cout << "GANADOR HISTORICO: " << ganadorHistorico << ", CON " << ptsGanadorHistorico << " PUNTOS OBTENIDOS." << endl;
        cout << "-----------------------------------------------------" << endl << endl;
        }else{
            cout << endl << "-----------------------------------------------------" << endl;
            cout << "NO SE REGISTRAN PARTIDAS PREVIAS " << endl;
            cout << "-----------------------------------------------------" << endl << endl;
        }

}

void mostrarTabla(int vecPuntajesRondasJugador1[], int vecPuntajesRondasJugador2[], int totalPuntosJugador1, int totalPuntosJugador2, string nombreJugador1, string nombreJugador2){
    cout << "--------------------------------------" << endl;
    cout << "EMBAUCADO                            |" << endl;
    cout << "--------------------------------------" << endl;
    cout << "[RONDA]:    1    |    2    |    3    |"<< endl;
    cout << "-----------------|---------|---------|" << endl;
    cout << "            " << vecPuntajesRondasJugador1[0] << "   |    " << vecPuntajesRondasJugador1[1] << "   |    " << vecPuntajesRondasJugador1[2] << "   |" << "   <<<  JUGADOR 1 (" << nombreJugador1 << ")" << endl;
    cout << "-----------------|---------|---------|" << endl;
    cout << "            " << vecPuntajesRondasJugador2[0] << "   |    " << vecPuntajesRondasJugador2[1] << "   |    " << vecPuntajesRondasJugador2[2] << "   |" << "   <<<  JUGADOR 2 (" << nombreJugador2 << ")" << endl;
    cout << "--------------------------------------" << endl;
    cout << "[TOTAL]:         | JUG. 1  | JUG. 2  |" << endl;
    cout << "--------------------------------------" << endl;
    cout << "                 |    " << totalPuntosJugador1 <<"  |    "<< totalPuntosJugador2 << "  |" << endl;
    cout << "--------------------------------------" << endl << endl;
}
