#include <iostream>

using namespace std;

///27) ENUNCIADO: Una estaci¢n meteorol¢gica registr¢ una muestra clim tica de los £ltimos 15
///d¡as. Por cada d¡a registr¢:
///- N£mero de d¡a (entero)
///- Temperatura (float)
///- Mil¡metros de lluvia (float)- Visibilidad en km (float)
///Hay un registro por cada d¡a. La informaci¢n se encuentra ordenada por d¡a. Se
///pide calcular e informar:
///- El n£mero del d¡a que se haya registrado la temperatura m xima.
///- La amplitud t‚rmica de todo el per¡odo.
///- La cantidad de d¡as con neblina.
///- Mostrar "Quincena lluviosa" si hubo m s d¡as de lluvia que d¡as sin lluvia.
///Mostrar "Quincena h£meda" si llovi¢ en al menos un tercio de los d¡as.
///De lo contrario mostrar "Quincena seca".
///NOTA: La amplitud t‚rmica es la diferencia entre la temperatura m xima y la
///temperatura m¡nima.
///NOTA: Se considera neblina a una visibilidad menor a 2 km.

int main()
{
    //cout << "Hello world!" << endl;

    int dia, diatem, conneb=0, conllu=0, i;
    float tem, mil, km, tmax, temmin, amp;

    for(i=0; i<15; i++){
            cout << "Dia: " << endl;
            cin >> dia;
            cout << "Temperatura: " << endl;
            cin >> tem;
            cout << "Milimetros de agua: " << endl;
            cin >> mil;
            cout << "Visibilidad (Km): " << endl;
            cin >> km;
            cout << "==================================" << endl;

        if(i==0){
            diatem=dia;
            tmax=tem;
            temmin=tem;
        }else if(tem>tmax){
            diatem=dia;
            tmax=tem;
        }

        if(tem<temmin){
            temmin=tem;
        }

        if(km<2){
            conneb++;
        }

        if(mil>0){
            conllu++;
        }
    }

    cout << "El día: " << diatem << ". Se registro la mayor temperatura: " << diatem << " Grados." << endl;
    amp = tmax-temmin;
    cout << "Amplitud termica: " << amp << endl;
    cout << conneb << " dias con neblina." << endl;

    if(conllu>7){
        cout << "Quincena lluviosa. " << endl;
    }else if(conllu>4){
        cout << "Quincena humeda. " << endl;
    }else{
        cout << "Quincena seca. " << endl;
    }

    return 0;
}
