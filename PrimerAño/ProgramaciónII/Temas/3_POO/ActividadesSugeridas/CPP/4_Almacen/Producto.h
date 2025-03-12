#pragma once

class Producto{

private:

    int _codigo;
    std::string _nombre;
    float _precio;
    int _stockActual;
    int _stockMinimo;

public:

    Producto();
    Producto(int cod, std::string nom, float pre, int stActual, int stMinimo);
    int getCodigo();
    void setCodigo(int codigo);
    std::string getNombre();
    void setNombre(std::string nombre);
    void setPrecio(float precio);
    float getPrecio();
    int getStockActual();
    void setStockActual(int stockActual);
    int getStockMinimo();
    void setStockMinimo(int stockMinimo);

    void cargarProducto();
    void mostrarProducto();
    void gestionarPedido();

};
