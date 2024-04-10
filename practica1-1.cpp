#include <iostream>
#include "practica1-1.h"
using namespace std;

int main(){
    //comenzamos con el cuerpo del main
    string nombre1, nombre2;//puede  ir cada uno por separado
    int age1, age2;

//para objeto 1
    cout<<"ingrese nombre1: ";
    getline(cin, nombre1);//getline captura todos los caracteres con espacios
    cout<<"ingrese edad1: ";
    cin>>age1;

//declaramos la clase con los 2 objetos pedidos en la práctica
    Student estudiante1(nombre1,age1);/*en los parentesis van las especificaciones 
pedidas en el contructor h para ambos objetos*/

//imprimiendo cada dato de cada estudiante (objetos)
    cout<<"0= MAYOR DE EDAD y 1=MENOR DE EDAD"<<endl;
    cout<<"Estudiante 1 de nombre: "<<estudiante1.getName()<<" ,tiene la edad de: "<<estudiante1.getAge()
    <<"\nPor ende el estudiante 1 es "<<estudiante1.isOlder(age1)<<endl;    

//para objeto 2
    cout<<"ingrese nombre2: ";
    cin>> nombre2;
    cout<<"ingrese edad2: ";
    cin>>age2;//siempre terminar con ";"
//mismo proceso
    Student estudiante2(nombre2,age2);

    cout<<"Estudiante 2 de nombre: "<<estudiante2.getName()<<" ,tiene la edad de: "<<estudiante2.getAge()
    <<"\nPor ende el estudiante 2 es "<<estudiante2.isOlder(age2)<<endl;

}