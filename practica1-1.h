#include <string>


class Student {
public:
    explicit Student(std::string nombredestudiante, int agestudiante)
    :name{nombredestudiante} {
        if (agestudiante>0){
            age=agestudiante;
        }
    }
    void setName(std::string nombredestudiante){
        name=nombredestudiante;
    }
    std::string getName() const{
        return name; 
    }
    void setAge(int agestudiante){
        if ( agestudiante>0){
            age=agestudiante;
        }
    }
    int  getAge()const{
        return age;
    }
    bool isOlder(int agestudiante) const{
        if (agestudiante>18){
            return true;
        }else{
            return false;
        }
        if (int isOlder=1){
            std::cout<<"es mayor de edad"<<std::endl;
        }else{
            std::cout<<"es menor de edad"<<std::endl;
        }
    }
private:
    std::string name;
    int age;
};