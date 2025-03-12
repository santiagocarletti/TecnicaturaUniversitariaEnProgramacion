#pragma once

class Usuario{

private:

    string _nombre;
    string _clave;
    string _rol;

public:

    Usuario(string nombre, string clave, string rol);
    Usuaro();
    string getNombre();
    void setNombre(string nombre);
    string getClave();
    void setClave(string clave);
    string getRol();
    void setRol(string rol);

};
