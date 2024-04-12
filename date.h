#include <iostream>
using namespace std;


class Date {
public:
    explicit Date(int d, int m, int y) : day{d} {
        if (m>=1 && m<=12){
            month = m;
        }
    //verificacion del año y el predeterminado
        if (y >= 1900 && y <= 2050) {
        year = y;
        } else {
            year = 1900; 
        }
    }

    bool isLeapYear() const {
        if ((year % 4 == 0 && year % 100 > 0 ) || (year % 400 == 0)) {
            return true;
        }else{
            return false;
        }
    }
    bool vaday() const {//validacion de los dias por meses con el operador || "o" para incluir los meses con 30 y 31 dias 
    // verción corta
        if(month == 2 ) {
            if (isLeapYear()) { //en año cuando es bisiesto verificcado en el bool is leapYear
                return (day >= 1 && day <= 29); //verificando si tiene 29 dias (biciesto)
            } else {
                return (day >= 1 && day <= 28); //verificando si es un año normal
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return (day >= 1 && day <= 30); //dias con 30
        } else {
            return (day >= 1 && day <= 31); //dias con 31
        }
    }
    void setMonth(int m){
            if(m >= 1 && m <= 12){//volver a verificar el rango de month 
                month=m;
            }
        }
    int getMonth()const{//retorna el mes
        return month;
    }
    //recibe dia
    void setDay(int d) {
    day = d;
    }    
    int getDay() const {
    return day;
    }
//recibe año
    void setYear(int y) {
    year = y;
    }
    int getYear() const {
    return year;
    }        
    void displayDate() const {
    std::cout << day << " / " << month << " / " << year << std::endl;//imprime con las barritas "/"
    }
private: //inicializa las variables del constructor
    int day;
    int year{1900};
    int month;
};