#include <iostream>

int main(){
    int* p = new int; //int 크기의 공간을 할당하여 그 주소값을 p 에 집어 넣었음
    *p = 10;

    std::cout << *p << std::endl;

    delete p;
    return 0;

}