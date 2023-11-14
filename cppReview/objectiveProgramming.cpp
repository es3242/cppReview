#include <iostream>

class Animal{
    private: 
    int food;
    int weight;

    //private 으로 설정하지 않아도, 기본으로 private 변수가 됨
    int age;

    public:
    int num;

    public:
    void set_animal(int _food, int _weight, int _age, int _num)  {
        food = _food;
        weight = _weight;
        age = _age;
        num = _num;
    }

    void increase_food(int inc) {
        food +=inc;
        weight += (inc/3);
    }
    void view_stat() {
        std::cout << "food of this animal: " <<food <<std::endl;
        std::cout << "weight of this animal: " <<weight <<std::endl;
        std::cout << "age of this animal: " <<age <<std::endl;

    }
};

int main() {
  Animal animal;
  animal.set_animal(100, 50, 5, 0);
  animal.increase_food(30);

  /*
  std::cout << animal.age;
  std::cout << animal.food; private 이라 접근할 수 없음. 캡슐화 - 은닉
  */

  animal.view_stat();
  std::cout << animal.num; //public 변수라 접근 가능.
  return 0;
}

