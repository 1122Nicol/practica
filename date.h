#include <iostream>

class Date {
public:
    explicit Date(int d, int m, int y) {
        : day = d;
        if(y>=1900 && y<=2500){
            year = y;
        }
        bool isLeapYear(); const{
            if(year%4==0){
                if(year%100==0 ){
                    if(year%400==0 ){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
                else{
                return true;
                }    
            }else{
                return false;
            }
        };
    }
    void setMonth(int m) {
    if(m >= 1 && m <= 12) {
    month = m;
        if (m=2){
            if(isLeapYear()==1){
                if(d>=1 && d<=29){
                    day=d;
                }else
                {if(d>=1 && d<=28){
                    day=d;
                }
            }
            }
        }
    }

    int getYear() const {
    return year;
    }    
    void setDay(int d) {
    day = d;
    }

    }
    void setYear(int y) {
    year = y;
    }
    int getDay() const {
    return day;
    }
    int getMonth() const {
    return month;
    }

    void displayDate() const {
    std::cout << day << " / " << month << " / " << year << std::endl;
    }
private:
    int day{1};
    int year{1900};
    int month{1};
};