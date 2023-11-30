#include <iostream>
#include <string>

class Animal{
    private:
    std::string name;
    int age;

    public:
    Animal(const std::string& ani_name, int ani_age) ;
    void age_up();

    const std::string& get_name() const;
    void set_name(const std::string &new_name);

    int get_age() const;
    void set_age(int new_age);

    Animal* getThis();
};

Animal::Animal(const std::string& ani_name, int ani_age) {
    set_name(ani_name);
    set_age(ani_age);
}


Animal* Animal::getThis(){
        return this;
    }

void Animal::age_up(){
    this->age +=1;
}

const std::string& Animal::get_name() const{
    return name;
}

void Animal::set_name(const std::string &new_name) {
    name = new_name;
}

int Animal::get_age() const{
        return age;
    }
void Animal::set_age(int new_age){
        age = new_age;
    }

int main(){
    Animal animal("ani", 0);
    std::cout<<"it's name is:"<<animal.get_name()<<std::endl;
    std::cout<<"it's age is:"<<animal.get_age()<<std::endl;

    return 0;
}