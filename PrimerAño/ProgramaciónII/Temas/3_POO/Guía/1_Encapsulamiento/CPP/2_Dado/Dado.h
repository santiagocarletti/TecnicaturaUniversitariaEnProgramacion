#pragma once

class Dado{

private:

    int _valor;

public:

    Dado();
    int getValor();
    bool esMaximo();
    bool esMinimo();
    void lanzar();
};
