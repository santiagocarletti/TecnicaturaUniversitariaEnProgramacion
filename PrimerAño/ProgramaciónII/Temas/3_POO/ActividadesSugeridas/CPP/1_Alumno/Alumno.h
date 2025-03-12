#pragma once

class Alumno{

private:

    string _nombre;
    int _legajo;

public:

    Alumno(string nombre, int legajo);
    Alumno();
    void setNombre(string nombre);
    string getNombre();
    void setLegajo(int legajo);
    int getLegajo();

};
