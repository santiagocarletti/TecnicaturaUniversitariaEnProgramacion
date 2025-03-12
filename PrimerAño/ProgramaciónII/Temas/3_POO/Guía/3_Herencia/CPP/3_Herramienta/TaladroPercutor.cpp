#include <iostream>
using namespace std;

#include "TaladroPercutor.h"

TaladroPercutor::TaladroPercutor(int golpesPorMinuto, float potencia, float peso, float longitud) : Taladro(potencia, peso, longitud){

    setGolpesPorMinuto(golpesPorMinuto);
    _nombre = "Taladro Percutor";

}

void TaladroPercutor::setGolpesPorMinuto(int golpesPorMinuto){

    _golpesPorMinuto = golpesPorMinuto;

}

int TaladroPercutor::getGolpesPorMinuto(){

    return _golpesPorMinuto;

}

void TaladroPercutor::mostrarInformacion(){

    cout << endl << "Nombre: " << _nombre << endl << "Peso: " << _peso << " kg." << endl << "Longitud: " << _longitud << " cm." << endl << "Potencia: " << _potencia << " watts." << endl << "Golpes por minuto: " << _golpesPorMinuto << endl;


}
