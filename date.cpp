#include <iostream>
#include "date.h"
#include <string>
using namespace std;

int main(){
    //i
    int dia=03;
    int mes=01;
    int a=2020;
    Date fecha1{dia,mes,a};
    fecha1.isLeapYear();
    cout<<"1=año bisiesto y 0=año no bisiesto"<<endl;
    cout<<fecha1.isLeapYear();
    fecha1.displayDate();
   /*En la funcion principal crear 3 objetos de tipo Date: (i) 03 / 01 / 2020; (ii) 15 / 14
/ 2019; y (iii) 20 / 12 / 1500.
*/
    //ii
     int d=15;
    int m=14;
    int an=2019;
    Date fecha1{d,m,an};
    fecha2.isLeapYear();
    cout<<"1=año bisiesto y 0=año no bisiesto"<<endl;
    cout<<fecha2.isLeapYear();
    fecha2.displayDate();

    //iii
    int dia=20;
    int mes=12;
    int a=1500;
    Date fecha1{dia,mes,a};
    fecha1.isLeapYear();
    cout<<"1=año bisiesto y 0=año no bisiesto"<<endl;
    cout<<fecha1.isLeapYear();
    fecha1.displayDate();
    cout<<endl;
}