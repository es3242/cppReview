#include <iostream>

void change_value(int *p)
{
    *p = 3;
}

int main(){

    int num = 10;

    std::cout<<num<<std::endl;
    change_value(num);
    std::cout<<num<<std::endl;

}