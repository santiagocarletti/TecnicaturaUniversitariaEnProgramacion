#include <iostream>
using namespace std;
# include<cstring>

///Consigna:
///Hacer un proyecto con un men£
///para agregar registros,
///listar todos los registros y
///listar 1 registro (se pide el ingreso de un legajo y se los muestra)

/////////////////////////////////FECHA H////////////////////////////////////////////

class Fecha
{
private:
    int dia, mes, anio;

public:
    Fecha(int d=0, int m=0, int a=0);

    void Cargar();
    void Mostrar();
    ///setter
    void setDia(int d)
    {
        dia=d;
    }

    void setMes(int m)
    {
        mes=m;
    }

    void setAnio(int a)
    {
        anio=a;
    }

    ///getter
    int getDia()
    {
        return dia;
    }

    int getMes()
    {
        return mes;
    }
    int getAnio()
    {
        return anio;
    }
};

//////////////////////////////////////FECHA CPP/////////////////////////////////////

void Fecha::Cargar()
{
    cout<<"DIA ";
    cin>>dia;
    cout<<"MES ";
    cin>>mes;
    cout<<"ANIO ";
    cin>>anio;
}

void Fecha::Mostrar()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

Fecha::Fecha(int d, int m, int a)
{
    dia=d;
    mes=m;
    anio=a;
}

////////////////////////////////ALUMNO H///////////////////////////////////////////

class Alumno
{
private:

    int legajo;
    char nombre[30];
    char apellido[30];
    Fecha fechaNacimiento;
    char email[50];
    int codigoCarrera;
public:

    int getLegajo()
    {
        return legajo;
    }
    void setLegajo(int l)
    {
        legajo=l;
    }
    void Cargar();
    void Mostrar();
};

/////////////////////////////////ALUMNO CPP////////////////////////////////////////

void Alumno::Cargar()
{
    cout<<endl<<"LEGAJO ";
    cin>>legajo;
    cout<<"NOMBRE ";
    cin>>nombre;
    cout<<"APELLIDO ";
    cin>>apellido;
    cout<<"FECHA DE NACIMIENTO ";
    fechaNacimiento.Cargar();
    cout<<"EMAIL ";
    cin>>email;
    cout<<"CARRERA ";
    cin>>codigoCarrera;
}

void Alumno::Mostrar()
{

    cout << endl <<"----------------------";
    cout<<endl<<"LEGAJO ";
    cout<<legajo<<endl;
    cout<<"NOMBRE ";
    cout<<nombre<<endl;
    cout<<"APELLIDO ";
    cout<<apellido<<endl;
    cout<<"FECHA DE NACIMIENTO "<<endl;
    fechaNacimiento.Mostrar();
    cout<<"EMAIL ";
    cout<<email<<endl;
    cout<<"CARRERA ";
    cout<<codigoCarrera<<endl;
    cout <<"----------------------";

}

////////////////////////////////ARCHIVOALUMNOS H///////////////////////////////////////////

class ArchivoAlumnos{
private:
    char nombre[50];
public:
    ArchivoAlumnos(const char *n="alumnos.dat"){
        strcpy(nombre, n);
    }

    bool grabarRegistroAlumno(Alumno reg){

        FILE *pAlumno;
        pAlumno=fopen(nombre,"ab" );//si no puede hacer la apertura fopen devuelve NULL
        if(pAlumno==NULL) return false;
        int escribio=fwrite(&reg,sizeof(Alumno),1,pAlumno);
        fclose(pAlumno);
        return escribio;

    }

    bool listarRegistros(){

        FILE *pAlu;
        Alumno reg;
        pAlu=fopen(nombre, "rb");
        if(pAlu==NULL){
            cout<<"NO SE PUDO ABRIR EL ARCHIVO "<<endl;
            return false;
        }

        while(fread(&reg,sizeof(Alumno),1,pAlu)==1){
            reg.Mostrar();
            cout<<endl;
        }

        fclose(pAlu);
        return true;
    }

    int buscarRegistro(int leg){

        FILE *pAlu;
        Alumno reg;
        int pos=0;
        pAlu=fopen(nombre, "rb");
        if(pAlu==NULL){
            cout<<"NO SE PUDO ABRIR EL ARCHIVO "<<endl;
            return -2;
        }
        while(fread(&reg,sizeof(Alumno),1,pAlu)==1){
            if(reg.getLegajo()==leg){
                fclose(pAlu);
                return pos;
            }
            pos++;
        }
        fclose(pAlu);
        return -1;
    }

    Alumno leerRegistro(int ubicacion){

        FILE *pAlu;
        Alumno reg;
        reg.setLegajo(-1);
        int pos=0;
        pAlu=fopen(nombre, "rb");
        if(pAlu==NULL){
            cout<<"NO SE PUDO ABRIR EL ARCHIVO "<<endl;
            return reg;
        }

        while(fread(&reg,sizeof(Alumno),1,pAlu)==1){
            if(pos==ubicacion){
              fclose(pAlu);
              return reg;
        }
        pos++;
        }


//        int cuanto=ubicacion*sizeof(Alumno);
//        int desde_donde=0;
//        fseek(pAlu,cuanto, desde_donde);
//        fread(&reg, sizeof(Alumno),1, pAlu);
//        fclose(pAlu);
//        return reg;

        }

    };

//////////////////////////////////MAIN/////////////////////////////////////////////

int main()
{
    int opcionMenu=4;

    ///Hacer un proyecto con un men£
    ///para agregar registros,
    ///listar todos los registros y
    ///listar 1 registro (se pide el ingreso de un legajo y se los muestra)

    int legajo;

    Alumno reg;

    FILE *pFile;

    while(opcionMenu!=0){

        cout << endl << "1 _ AGREGAR ALUMNO" << endl;
        cout << "2 _ LISTAR ALUMNOS" << endl;
        cout << "3 _ BUSCAR LEGAJO" << endl;
        cout << "0 _ SALIR" << endl << endl;
        cin >> opcionMenu;

        switch(opcionMenu){

        case 0:
            return 0;
            break;

        case 1:{

            reg.Cargar();

            ArchivoAlumnos archiAlu;

            archiAlu.grabarRegistroAlumno(reg);

            break;
        }

        case 2:{

            ArchivoAlumnos archiAlu;

            archiAlu.listarRegistros();

            break;
        }

        case 3:{

            cout<< endl<<"INGRESE EL LEGAJO DEL ALUMNO QUE SE QUIERE BUSCAR: ";
            cin>>legajo;

            ArchivoAlumnos archiAlu;

            int pos=archiAlu.buscarRegistro(legajo);

            if(pos==-1){
                  cout<<endl<<"NO EXISTE UN ALUMNO CON ESE LEGAJO"<<endl;

            }
            else{
                reg=archiAlu.leerRegistro(pos);
                if(reg.getLegajo()==-1){
                    cout<<"ERROR DE LECTURA";
                }
                else{
                    reg.Mostrar();
                }
            }

            break;
        }

        default:
            cout << endl << "OPCION INCORRECTA.." << endl;
            break;

        }

    }

    return 0;
}
