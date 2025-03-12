#include <iostream>
using namespace std;

#include "Herramienta.h"
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"

///CONSIGNA: Estás desarrollando un sistema para gestionar un inventario de herramientas en un taller. Cada
///herramienta tiene características comunes, pero algunas herramientas tienen atributos y comportamientos específicos.
///Crea las siguientes clases:
///
///1. Herramienta (clase base):
///○ Atributos: nombre (string), peso (float, en kg), longitud (float, en cm)
///○ Métodos:
///■ Constructor que inicialice los atributos de peso y longitud. El nombre queda
///vacío.
///■ Métodos getters y setters para los atributos de peso y longitud.
///■ mostrarInformacion() → Imprime el nombre de la herramienta, el peso y la longitud.
///
///2. Martillo (hereda de Herramienta):
///○ Atributos: tipoCabeza (string, por ejemplo: "plana", "de bola").
///○ Métodos:
///■ Constructor que inicialice los atributos. Debe establecer "Martillo" como
///nombre de la herramienta.
///■ Métodos getters y setters para el atributo tipoCabeza.
///■ mostrarInformacion() → Imprime los detalles de la herramienta e indica el
///tipo de cabeza del martillo.
///
///3. Destornillador (hereda de Herramienta):
///○ Atributos: tipoPunta (string, por ejemplo: "plana", "estrella").
///○ Métodos:
///■ Constructor que inicialice los atributos. Debe establecer "Destornillador"
///como nombre de herramienta.
///■ Métodos getters y setters para el tipoPunta..
///■ mostrarInformacion() → Imprime los detalles de la herramienta e indica el
///tipo de punta del destornillador.
///
///4. Taladro (hereda de Herramienta):
///○ Atributos: potencia (float, en watts).
///○ Métodos:
///■ Constructor que inicialice los atributos. Debe establecer "Taladro" como
///nombre de herramienta.
///■ Métodos getters y setters para los atributos de potencia.
///■ mostrarInformacion() → Imprime los detalles de la herramienta e indica la
///potencia del taladro.
///Instrucciones:
///● Crea la declaración de cada una de las clases en una archivo H distinto. Herramienta.h,
///Martillo.h, Destornillador.h y Taladro.h
///● Implementa las clases en un cpp distinto para cada una. Herramienta.cpp, Martillo.cpp,
///Destornillador.cpp y Taladro.cpp.
///● Crea un programa main() y declara al menos un objeto de cada tipo de herramienta
///(Martillo, Destornillador, Taladro).
///● Muestra los detalles de cada herramienta llamando al método mostrarInformacion().
///
///Actividad 2
///Utilizá la base de la Actividad 1 y agrega una nueva clase llamada TaladroPercutor que herede de
///Taladro.
///○ Atributos: golpesPorMinuto (int, por ejemplo: 2500).
///○ Métodos:
///■ Constructor que inicialice los atributos. Debe establecer "Taladro percutor"
///como nombre de herramienta.
///■ Métodos getters y setters para el atributo golpes por minuto.
///■ mostrarInformacion() → Imprime los detalles de la herramienta, del taladro e
///indica el los golpes por minuto.
///
///Instrucciones:
///● Crea la declaración de la nueva clase en un H. Por ejemplo, TaladroPercutor.h
///● Implementa la nueva clase en un cpp. Por ejemplo, TaladroPercutor.cpp
///● Al programa main() agrega una instancia de TaladroPercutor.
///● Muestra los detalles de cada herramienta llamando al método mostrarInformacion().
///
///Actividad 3
///● Modifica la clase Herramienta y agrega un atributo llamado precioDeCompra (float).
///● Crea un setter y getter para precio de compra.
///● También modifica el constructor de herramienta para que reciba como tercer parámetro el
///precio de compra pero por defecto el valor sea 0.
///● Modifica el método mostrarInformacion() de herramienta de manera que muestre el precio
///de compra.
///Instrucciones:
///● No modifiques absolutamente nada en el programa main. ¿Cuál es la salida por pantalla?

int main()
{
    //Herramienta objHerramienta(9.95, 13.4);

    Herramienta objHerramienta(8.35, 12.1, 1050.45);

    objHerramienta.mostrarInformacion();

    Martillo objMartillo("Plana", 5.3, 18.6);

    objMartillo.mostrarInformacion();

    Destornillador objDestornillador("Cruz", 9.9, 7.6);

    objDestornillador.mostrarInformacion();

    Taladro objTaladro(500.4, 5.3, 40.2);

    objTaladro.mostrarInformacion();

    TaladroPercutor objTaladroPercutor(105000, 300.5, 11, 800.3);

    objTaladroPercutor.mostrarInformacion();

    return 0;
}
