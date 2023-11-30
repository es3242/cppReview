#include <iostream>

void change_value(int *p){
    *p = 10; //int *p = a 가 됨.
}

void change_value_with_ref(int &p){
    p=3;
}

int main(){

    int a = 1;

    std::cout << "a : "<< a << std::endl;
    change_value(&a);
    std::cout << "a : "<< a << std::endl;
    
    int &another_a = a;
    another_a = 20;

    std::cout << "a : "<< a << std::endl;

    int *pt = NULL;
    pt = &a;
    
    std::cout << "pt : "<< *pt << std::endl;

    int b = 30;
    pt = &b;

    std::cout << "pt : " << *pt << std::endl;


    std::cout << "pt 가 가르키는 변수 b의 값 : " << *pt << std::endl;
    std::cout << "pt 의 값, pt가 가르키는 변수 b의 주소 값: " << pt << std::endl;
    std::cout << "pt 의 주소값: " << &pt << std::endl;

    std::cout << "b 의 값:" << b << std::endl;
    std::cout << "b 의 주소값: " << &b << std::endl;


    //함수 인자로 레퍼런스 받기

    change_value_with_ref(a);
    std::cout << "a : "<< a << std::endl;

    //상수 레퍼런스

    const int &ref = 4;

    //c = 4와 같음
 
    int c = ref;

    std::cout << c << std::endl;

    //레퍼런스의 배열은 문법상 X
    //배열의 레퍼런스는 가능

    int arr[3] = {1,2,3};
    int(&arr_ref)[3] = arr;

    std::cout<< arr_ref[0] << arr_ref[1] << arr_ref[2] << std::endl;

    arr_ref[0] = 2;
    arr_ref[1] = 3;
    arr_ref[2] = 1;

    std::cout<< arr[0] << arr[1] << arr[2] << std::endl;

}