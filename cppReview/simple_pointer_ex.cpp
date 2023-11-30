#include <iostream>

int main(){

//포인터

    int i = 10;
    int *p = &i;

    std::cout<<"i:" <<i<<" p:"<<p<<std::endl;
    *p = 20; //간접 참조
    std::cout<<"i:" <<i<<" p:"<<p<<std::endl;

//레퍼런스

    int a=30;
    int &b = a;
    int &c = b;
    std::cout << &a <<std::endl;
    std::cout << &b <<std::endl;
    std::cout << &c <<std::endl;
    getchar();
    return 0;

}