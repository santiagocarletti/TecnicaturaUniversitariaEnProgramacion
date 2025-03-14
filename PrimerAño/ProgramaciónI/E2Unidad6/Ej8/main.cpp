#include <iostream>
using namespace std;

///8) ENUNCIADO: Dada una lista de n£meros compuesta por 10 subgrupos y cada grupo
///separado del siguiente por un cero, se pide generar un vector de 10 elementos
///con el m ximo de cada uno de los subgrupos. Luego mostrar los elementos del
///vector por pantalla.

void maxPorSubgrupo(int vt[10], int num);
void imprimirVector(int v[10]);

int main()
{
    int vMaximos[10], numero;

    maxPorSubgrupo(vMaximos, numero);

    imprimirVector(vMaximos);

    return 0;
}

void maxPorSubgrupo(int vt[10], int num){

    int i;

    for(i=0; i<10; i++){

        system("cls");

        int con = 0, mayor;

        cin >> num;

        while(num != 0){

            if(con==0){

                mayor = num;

            }else if(num>mayor){

                mayor = num;

            }

            con++;

            cin >> num;
        }

        vt[i]=mayor;

    }

}

void imprimirVector(int vct[10]){

    int j;

    for(j=0; j<10; j++){

        cout << vct[j] << endl;

    }

}
