//Fecha creeaci�n: 12 feb 2023 - autor: javier lima
//Instrucciones:  Escriba un programa que lea el radio de un c�rculo
//como un entero e imprima el di�metro del c�rculo, la circunferencia y el �rea.
//Use el valor constante 3.14159 para p. Realice todos los c�lculos en instrucciones de salida.

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float r ;
    float d, c, a, p=3.14159;

cout<<"-------------------------------------------------------\n";
cout<<"                  EJERCICIO 2.20                       \n";
cout<<"    DIAMETRO,CIRCUNFERENCIA Y EL AREA DE UN CIRCULO    \n";
cout<<"\n\n";
cout<<"CUAL ES EL RADIO DE TU CIRCULO? ";
cout<<"\n\n";
cin>> r;
cout<<"\n\n";

d = (2*r);
    cout.precision(4);
    cout << "EL DIAMETRO DE " << r << " ES: " << d << endl;
c = ((2*p)*r);
    cout.precision(4);
    cout << "LA CIRCUNFERENCIA DE " << r << " ES: " << c << endl;
a = (p*(r*r));
    cout.precision(4);
    cout << "EL AREA DE " << r << " ES: " << a << endl;

system("pause");

}
