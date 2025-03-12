#include <iostream>
#include "Producto.h"

using namespace std;

///CONSIGNA: Un almac‚n necesita gestionar su inventario de manera m s eficiente. Te han pedido desarrollar un
///programa en C++ que permita controlar los productos, asegurando que no se queden sin stock.
///El programa debe manejar 5 productos, donde cada uno tiene un c¢digo, nombre, precio, stock actual y
///stock minimo. El due¤o del almac‚n debe poder ingresar esta informaci¢n para cada producto.
///Luego, el programa debe:
///
///1. Mostrar la lista de productos con sus detalles: nombre, stock actual, stock minimo y precio.
///2. Verificar si alg£n producto tiene un stock actual menor al stock m¡nimo e indicar que se necesita hacer un nuevo pedido.
///La informaci¢n de los productos se almacenar  en un arreglo de tama¤o fijo y se utilizar n getters y setters para acceder a sus atributos.
///
///Ejemplo de salida:
///C¢digo: 1000 | Producto: Az£car | Stock actual: 10 | Stock m¡nimo: 20 | Precio: $0.80

Producto::Producto(){

    setCodigo(0);
    setNombre("vacio");
    setPrecio(0.0);
    setStockActual(-1);
    setStockMinimo(-1);

}

Producto::Producto(int cod, std::string nom, float pre, int stActual, int stMinimo){

    setCodigo(cod);
    setNombre(nom);
    setPrecio(pre);
    setStockActual(stActual);
    setStockMinimo(stMinimo);

}

void Producto::setCodigo(int codigo){

    _codigo = codigo;

}

void Producto::setNombre(std::string nombre){

    _nombre = nombre;

}

void Producto::setPrecio(float precio){

    _precio = precio;

}

void Producto::setStockActual(int stockActual){

    _stockActual = stockActual;

}

void Producto::setStockMinimo(int stockMinimo){

    _stockMinimo = stockMinimo;

}

int Producto::getCodigo(){

    return _codigo;

}

std::string Producto::getNombre(){

    return _nombre;

}

float Producto::getPrecio(){

    return _precio;

}

int Producto::getStockActual(){

    return _stockActual;

}

int Producto::getStockMinimo(){

    return _stockMinimo;

}

void Producto::cargarProducto(){

    int cod, stAct, stMin;
    std::string nom;
    float pre;

    cout << endl << "Codigo: ";
    cin >> cod;

    cout << "Nombre: ";
    cin >> nom;

    cout << "Precio: $";
    cin >> pre;

    cout << "Stock actual: ";
    cin >> stAct;

    cout << "Stock minimo: ";
    cin >> stMin;

    cout << endl;

    setCodigo(cod);
    setNombre(nom);
    setPrecio(pre);
    setStockActual(stAct);
    setStockMinimo(stMin);

}

void Producto::mostrarProducto(){

    cout << endl << "Codigo: " << getCodigo() << endl;

    cout << "Nombre: " << getNombre() << endl;

    cout << "Precio: $" << getPrecio() << endl;

    cout << "Stock actual: " << getStockActual() << endl;

    cout << "Stock minimo: " << getStockMinimo() << endl;

}

void Producto::gestionarPedido(){

    if(getStockActual()<getStockMinimo()){

        cout << endl << "Codigo: " << getCodigo() << " | " << "Producto: " << getNombre() << " | " <<
        "Stock actual: " << getStockActual() << " | " << "Stock minimo: " << getStockMinimo() << " | " <<
        "Precio: $" << getPrecio() << endl << endl << "El producto " << getNombre() << " necesita un nuevo pedido" << endl;

    }

}
