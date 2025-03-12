#include <iostream>
using namespace std;
#include <ctime>

///CONSIGNA: Un individuo acaba de obtener su  lbum de figuritas de DragonCube. Se trata de
///un libro cuyas p ginas cuentan con espacios en blanco designados para pegar 50 figuritas.
///Estos espacios en blanco est n numerados y cada uno de ellos est  reservado
///para una figurita en particular, identificada con el mismo n£mero. Luego de
///obtener el  lbum, el coleccionista comienza a comprar paquetes de figuritas
///que contienen, cada uno, 5 unidades. Los paquetes vienen identificados con un
///n£mero natural como c¢digo.
///Las figuritas, adem s de estar numeradas, se clasifican por:
///Tipo de figurita:
///- Com£n (C)
///- Holograma (H)
///Se pide realizar un programa que permita registrar, por cada paquete, la
///informaci¢n de las 5 figuritas. Los registros tienen la siguiente estructura:
///- N£mero de paquete (entero)
///- N£mero de figurita (1 a 50)
///- Tipo de figurita (C o H)
///- ¨Pegar en el  lbum? (S/N)
///No hay l¡mites en la cantidad de paquetes que el coleccionista pueda comprar.
///La carga de datos finaliza con un n£mero de paquete igual a 0. Calcular e
///informar:
///A) La cantidad de figuritas comunes repetidas.
///B) La cantidad de figuritas faltantes del  lbum.
///C) La cantidad de hologramas entre las figuritas compradas (sin contar las
///repetidas).
///D) El estado del  lbum pudiendo ser uno de los siguientes casos:
///- "Incompleto" si no se llegaron a pegar las 50 figuritas.
///- "Completo" si se llegaron a pegar las 50 figuritas entre comunes y
///hologramas.- "Completo com£n" si est  completo pero adem s tiene las 50
///figuritas comunes pegadas.
///- "Completo hologr fico" si est  completo pero adem s tiene las
///50 figuritas hologramas pegadas.
///E) Teniendo en cuenta que cada paquete cuesta $500 y que cada figurita
///com£n se puede vender a $20 y cada holograma a $50. Calcular el costo
///total de la colecci¢n y el costo total de una potencial venta de figuritas
///no pegadas de la colecci¢n.
///Aclaraciones:
///- Cuando se carga los datos de un paquete se debe solicitar la
///informaci¢n de las cinco figuritas que incluye el paquete.
///- El  lbum tiene 50 figuritas en total pero los paquetes pueden traer de
///cada una la variante com£n y holograma. En total son 100 figuritas
///distintas.
///- El coleccionista puede decidir si pega en el  lbum figuritas comunes y
///hologramas, s¢lo comunes o s¢lo hologramas. Cada espacio del  lbum
///sin figuritas es una figurita faltante.
///- Las figuritas que el coleccionista no pega en el  lbum son parte de su
///colecci¢n en una pila aparte. Si el coleccionista tiene la figurita #1 varias
///veces pero nunca la peg¢ en el  lbum entonces el  lbum no puede
///considerarse completo.
///- Se considera una figurita repetida si tiene la misma figurita del mismo
///tipo m s de una vez. Por ejemplo, si tengo la figurita #1 com£n y #1
///holograma en mi colecci¢n, no la tengo repetida. Sin embargo, si tres
///veces tengo la figura #1 holograma en mi colecci¢n entonces la tengo
///repetida DOS veces.

void opcionPegado(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]);
void pegarTodas(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]);
void pegarSoloComunes(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]);
void pegarSoloHologramas(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]);
void noPegar(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]);
void impresionDeControl(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]);

int main()
{
    srand(time(0));

    int vFiguritasPaquete[5]={};

    bool mComunesHologramas[2][100]={false};
    int mColeccionComunesHologramas[2][100]={};

    bool comprarPaquete;

    int contadorRepetidas=0;

    int contadorFaltantesAlbum=0;

    int contadorVariedadDeHologramas=0;

    int contadorEstadoAlbum=0;

    bool veredicto=false;

    int contadorComunes=0, contadorHologramas=0, contadorAlbumYColeccion=0;

    int opcion=10;

    while(opcion!=0){

    cout << endl << "1_ COMPRAR PAQUETE" << endl;
    cout << "2_ CANTIDAD COMUNES REPETIDAS" << endl;
    cout << "3_ FALTANTES DEL ALBUM" << endl;
    cout << "4_ VARIEDAD DE HOLOGRAMAS" << endl;
    cout << "5_ ESTADO DEL ALBUM" << endl;
    cout << "6_ VENTA COLECCION" << endl;
    cout << "7_ IMPRESION DE PRUEBA" << endl;
    cout << "0_ SALIR" << endl << endl;
    cin >> opcion;

        switch(opcion){
        case 0:
            exit;
            break;

        case 1:{
            cout << endl << "COMPRAR PAQUETE" << endl << endl;

            int contadorNoRepetidas=0;
            bool repetida;

            cout << "Comprar paquete? / Cancelar (0) / Comprar (1): ";
            cin >> comprarPaquete;

            while(comprarPaquete){

                while(contadorNoRepetidas<5){

                    int figuritaAleatoria=((rand()%100)+1);

                    for(int a=0; a<5; a++){

                        if(figuritaAleatoria==vFiguritasPaquete[a]){

                            repetida=true;

                        }

                    }

                    if(!repetida){
                        vFiguritasPaquete[contadorNoRepetidas]=figuritaAleatoria;
                        contadorNoRepetidas++;
                    }else{
                        repetida=false;
                    }
                }

                contadorNoRepetidas=0;

                cout << endl;
                ///IMPRESION DE PRUEBA
                for(int b=0; b<5; b++){ cout << vFiguritasPaquete[b] << "   "; }

                cout << endl << endl;

                for(int c=0; c<5; c++){

                    if(vFiguritasPaquete[c]<=50){
                        cout << vFiguritasPaquete[c] << " - Comun" << endl;
                    }else{
                        cout << vFiguritasPaquete[c]-50 << " - Holograma" << endl;
                    }
                }

                cout << endl;

                opcionPegado(vFiguritasPaquete, mComunesHologramas, mColeccionComunesHologramas);

                cout << endl << "Comprar paquete? / Cancelar (0) / Comprar (1): ";
                cin >> comprarPaquete;

            }


            break;
        }

        case 2:
            cout << endl << "CANTIDAD COMUNES REPETIDAS" << endl << endl;

            for(int j=0; j<50; j++){

                if(mComunesHologramas[0][j] && mColeccionComunesHologramas[0][j]!=0 || mColeccionComunesHologramas[0][j]>1){
                    contadorRepetidas++;
                }

            }

            cout << "Comunes repetidas: " << contadorRepetidas << endl;

            contadorRepetidas=0;

            break;

        case 3:
            cout << endl << "FALTANTES DEL ALBUM" << endl << endl;

            for(int j=0; j<50; j++){

                if(!mComunesHologramas[0][j]&&!mComunesHologramas[1][j+50]){
                    contadorFaltantesAlbum++;
                }

            }

            cout << "Quedan " << contadorFaltantesAlbum << " espacios sin llenar.." << endl;
            contadorFaltantesAlbum=0;

            break;

        case 4:

            cout << endl << "VARIEDAD DE HOLOGRAMAS" << endl << endl;

            for(int k=0; k<50; k++){

                if(mComunesHologramas[1][k+50] || mColeccionComunesHologramas[1][k+50]!=0){
                    contadorVariedadDeHologramas++;
                }

            }

            cout << "Hologramas diferentes comprados: " << contadorVariedadDeHologramas << endl;
            contadorVariedadDeHologramas=0;

            break;

        case 5:

            cout << endl << "ESTADO DEL ALBUM" << endl << endl;

            for(int l=0; l<50; l++){ if(mComunesHologramas[1][l+50]){contadorEstadoAlbum++; }}

            if(contadorEstadoAlbum==50&&!veredicto){ cout << "Completo Holografico" << endl; veredicto=true;} contadorEstadoAlbum=0;

            for(int m=0; m<50; m++){ if(mComunesHologramas[0][m]){contadorEstadoAlbum++; }}

            if(contadorEstadoAlbum==50&&!veredicto){ cout << "Completo Comun" << endl; veredicto=true;} contadorEstadoAlbum=0;

            for(int n=0; n<50; n++){ if(mComunesHologramas[0][n]||mComunesHologramas[1][n+50]){contadorEstadoAlbum++; }}

            if(contadorEstadoAlbum==50&&!veredicto){ cout << "Completo (mixto)" << endl; veredicto=true; }

            if(!veredicto){cout << "Incompleto" << endl; }

            contadorEstadoAlbum=0;

            veredicto=false;

            break;

        case 6:

            cout << endl << "VENTA COLECCION" << endl << endl;

            for(int o=0; o<50; o++){

                if(mComunesHologramas[0][o]){
                    contadorComunes++;
                }

                if(mComunesHologramas[1][o+50]){
                    contadorHologramas++;
                }

            }

            cout << ">> ALBUM CON FIGURITAS PEGADAS" << endl << endl << "- Comunes: " << contadorComunes << " x $20 c/u = $" << contadorComunes * 20 << endl << "- Hologramas: " << contadorHologramas <<
            " x $50 c/u = $" << contadorHologramas * 50 << endl << endl << "Total: $" << (contadorComunes * 20) + (contadorHologramas * 50) << endl << endl;

            contadorAlbumYColeccion+=(contadorComunes+contadorHologramas); contadorComunes=0; contadorHologramas=0;

            for(int p=0; p<50; p++){

                contadorComunes+=mColeccionComunesHologramas[0][p];

                contadorHologramas+=mColeccionComunesHologramas[1][p+50];

            }

            cout << ">> FIGURITAS NO PEGADAS" << endl << endl << "- Comunes: " << contadorComunes << " x $20 c/u = $" << contadorComunes * 20 << endl << "- Hologramas: " << contadorHologramas <<
            " x $50 c/u = $" << contadorHologramas * 50 << endl << endl << "Total: $" << (contadorComunes * 20) + (contadorHologramas * 50) << endl << endl;

            contadorAlbumYColeccion+=(contadorComunes+contadorHologramas); contadorComunes=0; contadorHologramas=0;

            cout << ">> INVERSION DEL COLECCIONISTA" << endl << endl << contadorAlbumYColeccion << " figuritas >> " <<
            contadorAlbumYColeccion/5 << " paquetes ($500 c/u)" << endl << endl << "Total: $" << (contadorAlbumYColeccion/5 * 500) << endl;

            contadorAlbumYColeccion=0; contadorComunes=0; contadorHologramas=0;

            break;
        case 7:

            cout << endl << "IMPRESION DE PRUEBA" << endl;

            impresionDeControl(vFiguritasPaquete, mComunesHologramas, mColeccionComunesHologramas);

            break;

        default:
            cout << "Opcion invalida.." << endl;
            break;
        }
    }

    return 0;
}

void opcionPegado(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]){

    int eleccionPegado;

    do{

        cout << "Pegar >>> Todas (1) // Solo Comunes (2) // Solo Hologramas (3) // NO Pegar (4): ";
        cin >> eleccionPegado;

        switch(eleccionPegado){

            case 1:
                pegarTodas(vFiguritasPaquete, mComunesHologramas, mColeccionComunesHologramas);
                break;

            case 2:
                pegarSoloComunes(vFiguritasPaquete, mComunesHologramas, mColeccionComunesHologramas);
                break;

            case 3:
                pegarSoloHologramas(vFiguritasPaquete, mComunesHologramas, mColeccionComunesHologramas);
                break;

            case 4:
                noPegar(vFiguritasPaquete, mComunesHologramas, mColeccionComunesHologramas);
                break;

            default:
                cout << endl << "Opcion invalida.." << endl << endl;
                break;

        }

    }while(eleccionPegado<1 || eleccionPegado>4);

}

void pegarTodas(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]){

    int figurita;

    for(int b=0; b<5; b++){

        figurita=vFiguritasPaquete[b];

        if(figurita<=50){

            if(mComunesHologramas[0][figurita-1] || mComunesHologramas[1][figurita+49]){
                mColeccionComunesHologramas[0][figurita-1]++;
            }else{
                mComunesHologramas[0][figurita-1]=true;
            }

        }else{
            if(mComunesHologramas[1][figurita-1] || mComunesHologramas[0][figurita-51]){
                mColeccionComunesHologramas[1][figurita-1]++;
            }else{
                mComunesHologramas[1][figurita-1]=true;
            }

        }

    }

}

void pegarSoloComunes(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]){

    int figurita;

    for(int g=0; g<5; g++){

        figurita=vFiguritasPaquete[g];

        if(figurita<=50){

            if(mComunesHologramas[0][figurita-1] || mComunesHologramas[1][figurita+49]){
                mColeccionComunesHologramas[0][figurita-1]++;
            }else{
                mComunesHologramas[0][figurita-1]=true;
            }

        }else{
            mColeccionComunesHologramas[1][figurita-1]++;
        }

    }

}

void pegarSoloHologramas(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]){

    int figurita;

    for(int h=0; h<5; h++){

        figurita=vFiguritasPaquete[h];

        if(figurita<=50){
            mColeccionComunesHologramas[0][figurita-1]++;
        }else{

        if(mComunesHologramas[1][figurita-1] || mComunesHologramas[0][figurita-51]){
            mColeccionComunesHologramas[1][figurita-1]++;
        }else{
            mComunesHologramas[1][figurita-1]=true;
        }

        }

    }

}

void noPegar(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]){

    int figurita;

    for(int i=0; i<5; i++){

        figurita=vFiguritasPaquete[i];

        if(figurita<=50){
            mColeccionComunesHologramas[0][figurita-1]++;
        }else{
            mColeccionComunesHologramas[1][figurita-1]++;
        }

    }

}

void impresionDeControl(int vFiguritasPaquete[5], bool mComunesHologramas[2][100], int mColeccionComunesHologramas[2][100]){

    ///IMPRESION PRUEBA
    cout <<endl << "Figuritas Paquete"<< endl << endl;

    for(int c=0; c<5; c++){cout << vFiguritasPaquete[c] << "  "; }

    cout << endl;

    //for(int d=0; d<100; d++){cout << d+1 << "  "; }

    cout <<endl << "Album Comunes (1-50)"<< endl << endl;

    for(int e=0; e<50; e++){cout<< mComunesHologramas[0][e] << "  "; }

    cout <<endl<< endl<< "Album Hologramas (1-50)"<< endl<<endl;

    for(int f=50; f<100; f++){cout<<mComunesHologramas[1][f] << "  "; }

    cout<<endl<<endl <<"Coleccion Comunes (0-50)"<<endl<<endl;

    for(int e=0; e<50; e++){cout << mColeccionComunesHologramas[0][e] << "  "; }

    cout <<endl<< endl<<"Coleccion Hologramas (50-100)"<< endl<<endl;

    for(int f=50; f<100; f++){cout << mColeccionComunesHologramas[1][f] << "  "; }

    cout << endl;

}
