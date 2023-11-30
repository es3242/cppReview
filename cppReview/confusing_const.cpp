#include <iostream>

int main(){

    int val = 40;
    int randomVal = 50;
    int anotherOne = 60;
    int andanother = 70;

    const int *a = &val; // a가 int 형태일 때 *a 변경 불가능
    int const *b = &val; // *b형태일 때 변경 불가능 a와 같다고 보면 됌.
    int * const c = &val; // c 자체 변경 불가능

    a = &randomVal;
    b = &anotherOne;
    // c = &andanother;

    // *a = randomVal;
    // *b = anotherOne;
    *c = andanother;

    return 0;
}