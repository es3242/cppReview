#include <iostream>

//pointer Ex
int change_val(int *p) {
    *p = 3;

    return 0;
}

//refenence Ex
void change_val_ref(int &a) {
    a = 3; //num2 = 3
}


int main(){

    int num1 = 5;
    int num2 = 5;


    std::cout << num1 <<std::endl;
    change_val(&num1);
    std::cout << num1 <<std::endl;

    std::cout << num2 <<std::endl;
    change_val_ref(num2); // int& a = num2와 같음
    std::cout << num2 <<std::endl;


    int x;
    int& y = x;
    int& z = y;

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

}