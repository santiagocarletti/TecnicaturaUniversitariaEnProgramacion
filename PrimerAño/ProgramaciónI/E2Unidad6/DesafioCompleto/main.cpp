#include <iostream>
using namespace std;
#include <ctime>

///DESAFIO
///
///ENUNCIADO: Pares distintos con diferencia absoluta igual a Z
///Hacer un programa que permita, de un vector de 50 números enteros con valores negativos, positivos
///o cero, encontrar la cantidad de pares de números distintos con una diferencia absoluta igual a Z.
///El programa debe establecer los 50 números en la inicialización o bien pidiéndolos por teclado.
///También debe poder asignar el valor Z en la inicialización o por teclado. Debe mostrar por pantalla
///la cantidad de pares distintos que tengan una diferencia absoluta igual a Z.
///
///Ejemplo:
///{1, 5, 3, 4, 2}
///Z=3
///
///El vector tiene 2 pares con diferencia absoluta igual a Z
///
///En este caso, los pares son {5, 2} y {1, 4}
///
///NOTA: No hace falta mostrar cuáles son los pares encontrados pero es un plus si logran hacerlo.
///
///ACLARACIÓN: Por pares de números distintos se entiende que, si por ejemplo encontramos el par {1, 56},
///entonces no tenemos que contar el par {56, 1}

void generarAleatorios(int vAleat[50]);
void generarDiferencia(int &dif);
void imprimir(int vNumeros[50], int diferencia);
void encontrarPares(int vNuAl[50], int absoluta);


int main()
{
    srand(time(0));

    int vNumAlea[50], difAbsoluta;

    generarAleatorios(vNumAlea);

    generarDiferencia(difAbsoluta);

    imprimir(vNumAlea, difAbsoluta);

    encontrarPares(vNumAlea, difAbsoluta);

    return 0;
}

void generarAleatorios(int vAleat[50]){

    int t, numEnBusqueda, posNeg, numAleatorio;

    for(t=0; t<50; t++){

        posNeg=((rand())%2)+1;

        numEnBusqueda=(rand()%50)+1;

        if(posNeg%2==0 && t%2==0){

            numAleatorio=numEnBusqueda*-1;

        }else{

            numAleatorio=numEnBusqueda;

        }

        vAleat[t]=numAleatorio;

    }

}

void generarDiferencia(int &dif){

    //dif=((rand())%10)+1;
    dif=49;

}

void imprimir(int vNumeros[50], int diferencia){

    int x;

    for(x=0; x<50; x++){

        cout << x+1 << ": " << vNumeros[x] << endl;

    }

    cout << endl << "Diferencia absoluta: " << diferencia << endl << endl;

}

void encontrarPares(int vNuAl[50], int absoluta){

    int vControlado[50];
    int contador=0, m, p;

    for(m=0; m<50; m++){

        for(p=0; p<50; p++){

            if((vNuAl[m]-vNuAl[p]==absoluta || vNuAl[p]-vNuAl[m]==absoluta)&&(m!=vControlado[p] || contador==0)){

                contador++;

                vControlado[m]=p;

                cout << vNuAl[m] << " / " << vNuAl[p] << endl;

            }

        }

    }

    cout << endl << contador << " pares encontrados" << endl;

}
