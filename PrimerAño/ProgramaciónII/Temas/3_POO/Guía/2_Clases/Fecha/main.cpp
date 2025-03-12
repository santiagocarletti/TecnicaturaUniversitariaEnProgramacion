#include <iostream>
using namespace std;

///CONSIGNA: Hacer una clase Fecha que permita generar objetos capaces de almacenar fechas y hacer
///operaciones con las mismas. La clase en ning£n momento debe almacenar una fecha inv lida. Es
///decir, una fecha que no exista en el calendario.
///Actividad 1
///Realizar la declaraci¢n de la clase en un archivo H y la definici¢n de los m‚todos en un archivo
///CPP. La clase fecha debe almacenar los siguientes atributos enteros: _dia, _mes y _anio.
///Actividad 2
///Realizar m‚todos getters para cada una de las propiedades mencionadas anteriormente.
///Actividad 3
///Realizar un constructor que reciba tres par metros llamados dia, mes y anio. El mismo debe
///almacenar la fecha s¢lo si la misma es v lida. De lo contrario, debe asignar por defecto la fecha
///1/1/2023.
///Actividad 4
///Realizar un constructor que no reciba par metros. El mismo debe asignar a la fecha el valor
///1/1/2023.
///Actividad 5
///Hacer dos m‚todos privados llamados AgregarDia y RestarDia. El m‚todo AgregarDia debe
///aumentar en uno la fecha y el m‚todo RestarDia debe disminuir en uno la fecha. Tener en cuenta
///que los m‚todos deben tener en cuenta los cambios de mes y a¤os si corresponde.
///Por ejemplo, si la fecha almacenada en el objeto es 30/04/2023 y se llama a AgregarDia, entonces
///la fecha deber¡a cambiar a 01/05/2023. Por otro lado, si la fecha almacenada es 01/01/2024 y se
///llama a RestarDia entonces la fecha deber¡a cambiar a 31/12/2023. Los m‚todos deben tener en
///cuenta los a¤os bisiestos para los c lculos.
///Actividad 6
///Hacer un m‚todo p£blico llamado AgregarDias que reciba un entero con la cantidad de d¡as a
///agregar. El mismo debe a¤adir la cantidad de d¡as recibidos como par metro si el mismo es
///positivo o restarlos si valor del par metro en negativo. En caso de ser cero no se debe modificar el
///estado del objeto.
///Actividad 7
///Hacer un m‚todo toString que devuelva un string con la fecha que registra el objeto en el
///siguiente formato: DD/MM/AAAA. Por ejemplo, si el objeto registra la fecha 5/7/2023 entonces
///debe devolver el siguiente string: "05/07/2023".

class Fecha{
private:
    int _dia;
    int _mes;
    int _anio;

    void agregarDia();
    void restarDia();

public:
    int getDia();
    int getMes();
    int getAnio();
    Fecha(int dia, int mes, int anio);
    Fecha();
    void agregarDias(int dias);
    string toString();
};

///////////////////////////////////////////////////FUNCIONES//////////////////////////////////////////////////

bool esBisiesto(int anio);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    Fecha objFecha(4, 10, 2024);

    cout << objFecha.getDia() << " " << objFecha.getMes() << " " << objFecha.getAnio() << endl;

    objFecha.agregarDias();

    cout << objFecha.getDia() << " " << objFecha.getMes() << " " << objFecha.getAnio() << endl;

    cout << objFecha.toString() << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Fecha::getDia(){
    return _dia;
}

int Fecha::getMes(){
    return _mes;
}

int Fecha::getAnio(){
    return _anio;
}

Fecha::Fecha(int dia, int mes, int anio){

    int vDiasMesAnioNormal[12]={31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };
    int vDiasMesAnioBisiesto[12]={31 ,29 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };

    if(esBisiesto(anio)){
        if(dia<=vDiasMesAnioBisiesto[mes-1] && dia>0 && mes>0 && mes<13 && anio>0){
            _dia=dia;
            _mes=mes;
            _anio=anio;
        }else{
            _dia=1;
            _mes=1;
            _anio=2023;
        }
    }else{
        if(dia<=vDiasMesAnioNormal[mes-1] && dia>0 && mes>0 && mes<13 && anio>0){
            _dia=dia;
            _mes=mes;
            _anio=anio;
        }else{
            _dia=1;
            _mes=1;
            _anio=2023;
        }
    }
}

Fecha::Fecha(){
    _dia=1;
    _mes=1;
    _anio=2023;
}

void Fecha::agregarDia(){
    int vDiasMesAnioNormal[12]={31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };
    int vDiasMesAnioBisiesto[12]={31 ,29 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };

    bool bisiesto, cambiaAnio=0;

    if(_mes==12 && _dia==31){
        ///SI CAMBIA EL A¥O..
        cambiaAnio=1;
        if(esBisiesto(_anio+1)){
            ///..Y EL PROX. ES BISIESTO
            bisiesto=1;
        }else{
            ///..Y EL PROX. ES NORMAL
            bisiesto=0;
        }
    }else{
        if(esBisiesto(_anio)){
            ///SI NO CAMBIA EL A¥O Y EL ACTUAL ES BISIESTO:
            bisiesto=1;
        }else{
            ///SI NO CAMBIA EL A¥O Y EL ACTUAL ES NORMAL:
            bisiesto=0;
        }
    }

    ///EL A¥O CON EL QUE VOY A TRABAJAR ES BISIESTO
    if(bisiesto){
        if((_dia+1)<=vDiasMesAnioBisiesto[_mes-1]){
        ///SIGO EN EL MISMO MES
            ///Aumento d¡a, no toco el mes
            _dia++;
        }else{
        ///1§ d¡a del mes, aumento mes
        _dia=1;
        _mes++;
        }
    }else{
    ///EL A¥O CON EL QUE VOY A TRABAJAR ES NO BISIESTO
                if((_dia+1)<=vDiasMesAnioNormal[_mes-1]){
        ///SIGO EN EL MISMO MES
            ///Aumento d¡a, no toco el mes
            _dia++;
        }else{
        ///1§ d¡a del mes, aumento mes
        _dia=1;
        _mes++;
        }
    }

    if(cambiaAnio){
        _anio++;
        _mes=1;
    }
}

void Fecha::restarDia(){
    int vDiasMesAnioNormal[12]={31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };
    int vDiasMesAnioBisiesto[12]={31 ,29 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };

    bool bisiesto, cambiaAnio=0;

    if(_mes==1 && _dia==1){
        ///SI CAMBIA EL A¥O..
        cambiaAnio=1;
        if(esBisiesto(_anio-1)){
            ///..Y EL PROX. ES BISIESTO
            bisiesto=1;
        }else{
            ///..Y EL PROX. ES NORMAL
            bisiesto=0;
        }
    }else{
        if(esBisiesto(_anio)){
            ///SI NO CAMBIA EL A¥O Y EL ACTUAL ES BISIESTO:
            bisiesto=1;
        }else{
            ///SI NO CAMBIA EL A¥O Y EL ACTUAL ES NORMAL:
            bisiesto=0;
        }
    }

    ///EL A¥O CON EL QUE VOY A TRABAJAR ES BISIESTO
    if(bisiesto){
        if((_dia-1)>0){
        ///SIGO EN EL MISMO MES
            ///Aumento d¡a, no toco el mes
            _dia--;
        }else{
        ///1§ d¡a del mes, aumento mes
        _mes--;
        _dia=vDiasMesAnioBisiesto[_mes-1];
        }
    }else{
    ///EL A¥O CON EL QUE VOY A TRABAJAR ES NO BISIESTO
        if((_dia-1)>0){
        ///SIGO EN EL MISMO MES
            ///Aumento d¡a, no toco el mes
            _dia--;
        }else{
        ///1§ d¡a del mes, aumento mes
        //_dia=1;
        _dia=vDiasMesAnioNormal[_mes-1];
        _mes--;
        }
    }

    if(cambiaAnio){
        _anio--;
        _mes=12;
    }
}

void Fecha::agregarDias(int dias){

    int a;

    if(dias<0 && dias!=0){
        for(a=0; a>dias; a--){
            restarDia();
        }
    }
    if(dias>0 && dias!=0){
        for(a=0; a<dias; a++){
            agregarDia();
        }
    }
}

///////////////////////////////////////////////////FUNCIONES//////////////////////////////////////////////////

bool esBisiesto(int anio){
    bool es=0;

    if(anio%4==0){
        es=1;
    }else{
        es=0;
    }

    if(anio%100==0 && anio%4==0){
        if(anio%400==0){
            es=1;
        }else{
            es=0;
        }
    }

    return es;
}

string Fecha::toString(){

    string fecha, dia, mes, anio;

    if(_dia<10){
        dia="0"+to_string(_dia);
    }else{
        dia=to_string(_dia);
    }

    if(_mes<10){
        mes="0"+to_string(_mes);
    }else{
        mes=to_string(_mes);
    }

    if(_anio<1000){
        anio="0"+to_string(_anio);
    }if(_anio<100){
        anio="00"+to_string(_anio);
    }if(_anio<10){
        anio="000"+to_string(_anio);
    }else{
        anio=to_string(_anio);
    }

    fecha=dia + "/" + mes + "/" + anio;

    return fecha;
}
