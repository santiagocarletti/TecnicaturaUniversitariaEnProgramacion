#include <iostream>

using namespace std;

///ENUNCIADO: Hacer un programa para ingresar tres n£meros diferentes y determinar e
///informar el n£mero del medio.
///Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
///N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
///N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
///N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8

int main()
{
    int a, b, c, m;

    cout<<"Ingresar primer numero:";
    cin >> a;
    cout<<"Ingresar segundo numero:";
    cin>> b;
    cout<<"Ingresar tercer numero:";
    cin >> c;

    if (a>b && a<c || a>c && a<b)cout<<"El valor del medio es:"<<a<<endl;
    else {if (a<b && b<c || b>c && b<a)cout<<"El valor del medio es:"<<b<<endl;
    else {cout<<"El valor del medio es:"<<c<<endl;}}

    return 0;
}
