#pragma once

class Triangulo{

private:

    float _vectorLongitudes[3]={};

public:

    void setLado(int numero, float valor);
    float getLado(int numero);
    int getTipo();
    bool isEscaleno();
    bool isIsosceles();
    bool isEquilatero();

};
