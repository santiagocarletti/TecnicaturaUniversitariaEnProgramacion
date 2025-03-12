#pragma once

class Punto{

private:

    float _x;
    float _y;

public:

    Punto(float x, float y);
    Punto();
    float getX();
    void setX(float x);
    float getY();
    void setY(float y);
    float calcularDistancia(Punto otroPunto);
    void mover(float deltaX, float deltaY);

};
