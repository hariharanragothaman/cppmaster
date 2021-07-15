#include <iostream>

class HumanBeing{
public:
    HumanBeing(std::string n): name(n){}
    std::string getName() const{
        return name;
    }
    void chanName(const std::string& newName){
        name = newName;
    }
private:
    std::string name;
};

class Man: public HumanBeing{ using HumanBeing::HumanBeing;
public:
    std::string getSex() const{
        return "male";
    }
};

class Woman: public HumanBeing{ using HumanBeing::HumanBeing;
public:
    std::string getSex() const{
        return "female";
    }
};

int main(){
    Man man("Rainer");
    std::cout << "Name: " << man.getName() << std::endl;
    man.chanName("Rainer Grimm");
    std::cout << "New name: " << man.getName() << std::endl;
    std::cout << "Sex: " << man.getSex() << std::endl;
}