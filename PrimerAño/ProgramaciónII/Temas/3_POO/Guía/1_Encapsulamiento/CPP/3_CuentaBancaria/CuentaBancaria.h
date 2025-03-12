#pragma once

class CuentaBancaria{

private:

    int _nroCuenta;
    float _saldoActual;

public:

    CuentaBancaria(int nroCuenta, float saldoActual);
    void depositar(float montoDeposito);
    void retirar(float montoRetiro);
    float obtenerSaldo();

};
