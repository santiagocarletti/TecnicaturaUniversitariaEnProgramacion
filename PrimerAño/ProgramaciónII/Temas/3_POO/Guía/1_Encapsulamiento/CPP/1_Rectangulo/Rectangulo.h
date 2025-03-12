#pragma once

class Rectangulo{

private:

    int _base;
    int _altura;

public:

    Rectangulo(int base, int altura);
    void setBase(int base);
    int getBase();
    void setAltura(int altura);
    int getAltura();
    int calcularArea();
    int calcularPerimetro();

};
