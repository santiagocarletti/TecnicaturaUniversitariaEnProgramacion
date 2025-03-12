#pragma once
using namespace std;

class Cadena{

private:
    char *p;
    int tam;

public:
    Cadena(const char *texto);
    void Mostrar();
    int getTamanio();
    ~Cadena();

};
