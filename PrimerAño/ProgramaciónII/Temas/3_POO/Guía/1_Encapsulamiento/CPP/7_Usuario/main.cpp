#include <iostream>
using namespace std;

#include "Usuario.h"

///7) CONSIGNA: Crea una clase llamada Usuario que represente a un usuario en un
///sistema. La clase debe tener los siguientes atributos:
///- Nombre (string)
///- Clave (string)
///- Rol (string): Puede ser "admin" o "user".
///Implementa los siguientes m‚todos:
///- Usuario(string nombre, string clave, string rol): Constructor que
///inicializa los atributos.
///- getter y setter de cada atributo
///Desarrolla un programa que realice lo siguiente:
///1. Cargar en el sistema una lista de 5 usuarios utilizando un array de
///objetos Usuario (esto debe estar hardcodeado en el programa).
///2. Solicitar al usuario que ingrese su nombre y contrase¤a al iniciar el
///programa.
///3. Verificar si las credenciales ingresadas coinciden con alguno de
///los usuarios cargados en el sistema utilizando una funci¢n que
///reciba el array de usuarios, la cantidad de usuarios, el nombre y la
///contrase¤a. Esta funci¢n debe devolver el ¡ndice donde se
///encuentra el usuario en el array, o -1 si el usuario no existe.
///4. Si se encuentra un usuario con las credenciales correctas, permitir
///el acceso al sistema mostrando el rol al que pertenece con un
///saludo amigable. Utiliza una funci¢n que reciba un objeto Usuario
///y muestre el saludo con el rol espec¡fico.5. Si el usuario ingresa credenciales incorrectas, permitir un m ximo
///de 3 intentos. Si se agotan los intentos, el programa debe finalizar
///indicando que se han agotado los intentos.

int buscarUsuario(Usuario vUsuarios[5], string usuarioLogin, string claveLogin);
void permitirAcceso(Usuario objeto);

int main()
{
    Usuario objUsuario1("usuario1", "clave1", "admin"), objUsuario2("usuario2", "clave2", "user"), objUsuario3("usuario3", "clave3", "admin"), objUsuario4("usuario4", "clave4", "user"), objUsuario5("usuario5", "clave5", "admin");

    Usuario vUsuarios[5]={objUsuario1, objUsuario2, objUsuario3, objUsuario4, objUsuario5};

    string usuarioLogin, claveLogin;

    int intentos=0, indiceIngreso;

    int opcion=10;

    while(opcion!=0 && intentos<3){

    cout << endl << "1_ LOGIN" << endl;
    cout << "2_ " << endl;
    cout << "3_ " << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){

        case 0:
            break;

        case 1:
            cout << endl << "1_ LOGIN" << endl << endl;

            cout << "Usuario: ";
            cin >> usuarioLogin;
            cout << "Clave: ";
            cin >> claveLogin;

            indiceIngreso = buscarUsuario(vUsuarios, usuarioLogin, claveLogin);

            if(indiceIngreso != -1){

                permitirAcceso(vUsuarios[indiceIngreso]);

                intentos = 0;

            }else if(intentos < 2){

                intentos++;

                cout << endl << "Incorrecto! Intentos restantes: " << 3-intentos << endl;

            }else{

                cout << endl << "Limite de intentos alcanzado.." << endl;
                intentos++;

            }

            break;

        case 2:
            cout << endl << "2_ " << endl << endl;

            break;

        case 3:

            cout << endl << "3_ " << endl << endl;

            break;

        default:
            cout << endl << "Opcion invalida.." << endl;
            break;
        }

    }

    return 0;
}

int buscarUsuario(Usuario vUsuarios[5], string usuarioLogin, string claveLogin){

    int indice=-1;

    for(int a=0; a<5; a++){

        if(usuarioLogin == vUsuarios[a].getNombre() && claveLogin == vUsuarios[a].getClave()){

            indice = a;
            continue;

        }

    }

        return indice;

}

void permitirAcceso(Usuario objeto){

    cout << endl << "Bienvenido " << objeto.getNombre() << " a esta sesi¢n!! ;)" << endl;

}
