#include <iostream>

using namespace std;

///21) ENUNCIADO: Una casa de ventas de libros con varias sucursales registr¢ las ventas durante
///el mes anterior en un lote de registros. Para cada venta se registraron los
///siguientes datos:
///- Sucursal de la venta (1 a 20)
///- N£mero del vendedor que efectu¢ la venta (1 a 150)
///- D¡a de la venta (1 a 31)
///- Importe de la venta
///- Tipo de Cliente ("U"= Universitario, "N"= No Universitario )
///El lote finaliza con un registro con importe igual a cero. Los datos se ingresan
///agrupados por sucursal.
///A partir de esta informaci¢n se pide determinar e informar:
///a) La comisi¢n total pagada a todos los vendedores en el mes para cada
///sucursal.
///Considerar que la comisi¢n es un 10% cuando el tipo de cliente es
///universitario y un 20% cuando no lo es.
///b) La cantidad total vendida de libros por cada sucursal.
///c) El n£mero de vendedor que haya efectuado la venta individual de mayor
///importe, informando en qu‚ sucursal trabaja y el d¡a en que se realiz¢ esa
///venta. Se esperan los datos de un £nico vendedor.
///d) El promedio de recaudaci¢n por sucursal para la segunda quincena para los
///clientes No Universitarios.e) El porcentaje de ventas total discriminado por clientes Universitarios y No
///Universitarios.

int main()
{
    int comTT=0, totalPB=0, venPC=0, sucPC, diaPC, impPC, acuC=0, conC=0, acuU=0, conU=0, acuNU=0, conNU=0, dia, ven, suc, imp=1, cli, sucAct;

    while(imp!=0){

        cout << "Sucursal: ";
        cin >> suc;
        cout << "Vendedor: ";
        cin >> ven;
        cout << "Dia: ";
        cin >> dia;
        cout << "Importe: ";
        cin >> imp;
        cout << "Cliente (1: U / 2:NU): ";
        cin >> cli;

        sucAct=suc;

        while(suc==sucAct && imp!=0){

            if(cli==1){
                comTT+=imp*10/100;
            }else{
                comTT+=imp*20/100;
            }

            totalPB+=imp;

            if(venPC=0){
                venPC=ven;
                sucPC=suc;
                diaPC=dia;
                impPC=imp;
            }else if(imp>impPC){
                venPC=ven;
                sucPC=suc;
                diaPC=dia;
                impPC=imp;
            }

            if(cli==2){
                acuC+=imp;
                conU++;
            }else{
                acuNU+=imp;
                conNU++;
            }

            cout << "Sucursal: ";
            cin >> suc;
            cout << "Vendedor: ";
            cin >> ven;
            cout << "Dia: ";
            cin >> dia;
            cout << "Importe: ";
            cin >> imp;
            cout << "Cliente (1: U / 2:NU): ";
            cin >> cli;

        //CIERRA 2do WHILE
        }

        cout << "Vtas. TT sucursal " << sucAct << ": " << totalPB << endl;
        cout << "Prom. recaud. NU 1ra quincena: " << acuC/conC;

    //CIERRA 1ER WHILE
    }

    cout << "Comision total: " << comTT << endl;

    cout << "Prom. TT Univ.: " << (acuU/conU) << ". Prom. TT N.U.: " << (acuNU/conNU) << endl;

    return 0;
}
