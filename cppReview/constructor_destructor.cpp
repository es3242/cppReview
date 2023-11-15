#include <iostream>
#include <string.h>

class Marine {
    int hp;
    int coord_x,coord_y;
    int damage;
    bool is_dead;
    char* name;  // 마린 이름
    public: 
    Marine(); //기본 생성자
    Marine(int x, int y); //x,y 좌표에 생성
    Marine(int x, int y,const char* marine_name);
    ~Marine(); //destructor

    int attack(); //returns damage.
    void be_attacked(int damage_earn);//received damage
    void move(int x, int y); //move to

    void show_status();
};

Marine::Marine(){
    hp = 50;
    coord_x = coord_y = 0;
    damage = 5;
    is_dead = false;
}

Marine::Marine(int x, int y) {
  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;
}

Marine::Marine(int x, int y, const char* marine_name) {
  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;

  name = new char[strlen(marine_name) + 1];
  strcpy(name, marine_name);

}

void Marine::move(int x, int y) {
  coord_x = x;
  coord_y = y;
}

int Marine::attack() { return damage; }
void Marine::be_attacked(int damage_earn) {
  hp -= damage_earn;
  if (hp <= 0) is_dead = true;
}
void Marine::show_status() {
  std::cout << " *** Marine *** " << std::endl;
  std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
  std::cout << " HP : " << hp << std::endl;
}

//destructor
Marine::~Marine() {
  std::cout << name << " 의 소멸자 호출 ! " << std::endl;
  if (name != NULL) {
    delete[] name;
  }
}

int main() {
    Marine* marines[100]; // marine 배열로 다수 생성

    marines[0] = new Marine(2,3, "Marine 1"); //생성 동시에 생성자도 호출

    marines[1] = new Marine(3,5, "Marine 2");

    marines[0]->show_status();
    marines[1]->show_status();

    std::cout << std::endl;

    std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;

    marines[0]->be_attacked(marines[1]->attack());

    marines[0]->show_status();
    marines[1]->show_status();

    delete marines[0]; //소멸자
    delete marines[1];

}