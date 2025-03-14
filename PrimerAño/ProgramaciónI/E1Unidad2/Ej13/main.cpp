#include <iostream>

using namespace std;

///13) ENUNCIADO: Hacer un programa para ingresar tres n£meros
///distintos y listarlos ordenados de menor a mayor.
///Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
///Si N1=8, N2=6, N3=10 ¢ N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
///Si N1=6, N2=8, N3=10 ¢ N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
///Si N1=6, N2=10, N3=8 ¢ N1=10, N2=6, N3=8. Se muestra: 6, 8, 10

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c, p, s, t;

    cout << "Ingrese primer numero: " << endl;
    cin >> a;
    cout << "Ingrese sgdo. numero: " << endl;
    cin >> b;
    cout << "Ingrese tercer numero: " << endl;
    cin >> c;

    if(a<b && a<c){
        p = a;
    }else{
            if(b<a && b<c){
                p=b;
            }else{
                p=c;
            }
    }

    if(a<b && a<c){
        p = a;
    }else{
            if(b<a && b<c){
                p=b;
            }else{
                p=c;
            }
    }

    if (a > b && a > c){
        t = a;
    }else if (b > a && b > c){
        t = b;
    }else{
        t = c;
    }

    if (a > p && a < t){
        s = a;
    }else if(a > p && a < t){
        s = a;
    }else if(b > p && b < t){
        s = b;
    }else{
        s = c;
    }



    cout << "Menor: " << p << ". Medio: " << s << ". Mayor: " << t << endl;
    //HASTA ACA TENGO EL MAS CHICO. FALTA EL DEL MEDIO Y EL MAYOR

    return 0;
}
