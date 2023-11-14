#include <iostream>

void incrementAndPrint()
{
    int value = 1; // 호출 시 마다 초기화
    ++value;
    std::cout<<"value:"<<value<<'\n';
}


void s_incrementAndPrint()
{
    static int s_value = 1; //첫 호출 시에만 초기화 (static)
    ++s_value;
    std::cout<<"s_value:"<<s_value<<'\n';
}

namespace{
    int only_in_this_file = 0;
}


int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    s_incrementAndPrint();
    s_incrementAndPrint();
    s_incrementAndPrint();

    std::cout<<only_in_this_file;;
}

