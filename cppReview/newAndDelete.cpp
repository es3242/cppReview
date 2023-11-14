#include <iostream>

int main(){
    int* p = new int; //int 크기의 공간을 할당하여 그 주소값을 p 에 집어 넣었음
    *p = 10;

    std::cout << *p << std::endl;

    delete p;

    //array ex
    int array_size;

    std::cout << "array size : ";
    std::cin >> array_size;

    int *list = new int[array_size];
    for (int i = 0; i < array_size; i++){
        std::cin >> list[i];
    }
    for (int i = 0; i<array_size; i++){
        std::cout << i <<"th element of list : " <<list[i] << std::endl;
    }
    delete[] list;
    return 0;



}