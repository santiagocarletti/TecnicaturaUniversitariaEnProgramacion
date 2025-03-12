#include <iostream>
using namespace std;

#include "cuentaBancaria.h"

CuentaBancaria::CuentaBancaria(int nroCuenta, float saldoActual){

    _nroCuenta = nroCuenta;
    _saldoActual = saldoActual;

}

void CuentaBancaria::depositar(float montoDeposito){

    _saldoActual += montoDeposito;

}

void CuentaBancaria::retirar(float montoRetiro){

    if(_saldoActual - montoRetiro >= 0){

        _saldoActual -= montoRetiro;

    }

}

float CuentaBancaria::obtenerSaldo(){

    return _saldoActual;

}
