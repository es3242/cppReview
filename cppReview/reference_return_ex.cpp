//레퍼런스를 리턴하는 함수
#include <iostream>

class A{
    int x;
    
    public:
     A(int c) : x(c) {}

     int& access_x() { return x; } //반환값 : x의 레퍼런스 
     int get_x() { return x;} //반환값 : x
     void show_x() {std::cout << x << std::endl; }
};

int main() {
    A a(5);
    a.show_x();

    int& c = a.access_x(); // c는 x의 alias가 됌
    c = 4; // x의 값을 변화하는 것
    a.show_x();

    int d = a.access_x(); //d는 int 변수이므로 값의 복사가 일어나 x의 '값'이 들어 감, d는 독립적 변수인 것
    d = 3;
    a.show_x(); //x 값에 변화 없음

    // 아래는 오류
    // int& e = a.get_x();
    // e = 2;
    // a.show_x();

    int f = a.get_x();
    f = 1;
    a.show_x();
}