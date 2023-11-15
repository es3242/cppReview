// #include <string.h>
// #include <iostream>

// class Photon_Cannon {
//     int hp,shield;
//     int coord_x, coord_y;
//     int damage;

//     char *name;

//     public:
//      Photon_Cannon(int x, int y);
//      Photon_Cannon(int x, int y, const char * cannon_name);  // declaring copy constructor,const자 때문에 pc 의 데이터 변경 x
//      Photon_Cannon(const Photon_Cannon &pc);
//      ~Photon_Cannon();

//      void show_status();
// };

// Photon_Cannon::Photon_Cannon(int x, int y) {
//     hp = shield = 100;
//     coord_x = x;
//     coord_y = y;
//     damage = 20;
    
//     name = NULL;
// }

// Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc) { //생성자에서 name도 메모리를 할당 해 주고 깊은 복사를 할 수 있게 해 줘야 함.
//   std::cout << "복사 생성자 호출! " <<std::endl;
//   hp = pc.hp;
//   shield = pc.shield;
//   coord_x = pc.coord_x;
//   coord_y = pc.coord_y;
//   damage = pc.damage;

//   name = new char[strlen(pc.name) + 1];
//   strcpy(name, pc.name);

// }

// Photon_Cannon::Photon_Cannon(int x, int y,const char *cannon_name){
//     hp = shield = 100;
//     coord_x = x;
//     coord_y = y;
//     damage = 20;

//     name = new char[strlen(cannon_name) + 1];
//     strcpy(name, cannon_name);
// }

// Photon_Cannon::~Photon_Cannon() {
//     if(name) delete[] name; 
// }

// void Photon_Cannon::show_status() {
//     std::cout << "Photon Cannon :: " << name << std::endl;
//     std::cout << " Location : ( " << coord_x << ", " << coord_y << ")" 
//               << std::endl;
//     std::cout << "HP : " << hp << std::endl;
// }

// int main() {
//     Photon_Cannon pc1(3,3, "Photon_Cannon");
//     Photon_Cannon pc2 = pc1; // photon_Cannon pc2(pc1)와 동일한 의미
//     /*
//     photon_Cannon pc2
//     pc2 = pc1 
//     와는 다른 문장임. 복사 생성자는 '생성'시에만 호출 되므로.
//     */


//     pc1.show_status();
//     pc2.show_status();

// }
