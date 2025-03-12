#include <iostream>
using namespace std;

#include "Destornillador.h"

Destornillador::Destornillador(string tipoPunta, float peso, float longitud) : Herramienta(peso, longitud){

    setTipoPunta(tipoPunta);
    _nombre = "Destornillador";

}

void Destornillador::setTipoPunta(string tipoPunta){

    _tipoPunta = tipoPunta;

}

string Destornillador::getTipoPunta(){

    return _tipoPunta;

}

void Destornillador::mostrarInformacion(){

    cout << endl << "Nombre: " << _nombre << endl << "Peso: " << _peso << " kg." << endl << "Longitud: " << _longitud << " cm." << endl << "Tipo de punta: " << _tipoPunta << endl;


}
