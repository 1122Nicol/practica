#include <iostream>
#include "date.h"
#include <string>
using namespace std;

int main(){
    //declaración de los 3 objetos
    Date fecha1(3, 1, 2020);
    Date fecha2(15, 14, 2019); 
    Date fecha3(20, 12, 1500); 

    fecha1.displayDate();
    cout<<fecha1.vaday()<<endl;
    cout<<fecha1.isLeapYear()<<endl;

    fecha2.displayDate();
    cout<<fecha2.vaday()<<endl;
    cout<<fecha2.isLeapYear()<<endl;
    
    fecha3.displayDate();
    cout<<fecha2.vaday()<<endl;
    cout<<fecha2.isLeapYear()<<endl;
    return 0;
}