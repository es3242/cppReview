#include <string.h>
#include <iostream>

class String {
  char *str;
  int len;

  public:
  String(char c, int n);  // 문자 c 가 n 개 있는 문자열로 정의
  String(const char *s);
  String(const String &s);
  ~String();

  void add_string(const String &s);   // str 뒤에 s 를 붙인다.
  void copy_string(const String &s);  // str 에 s 를 복사한다.
  int strlen();                       // 문자열 길이 리턴
};

String::String(char c, int n){
    str = NULL;
    len = n;
}

String::String(const char *s){
    len = strlen(s);
    str = new char[len+1];
    strcpy(str,s);
}

String::String(const String &s){
    len = s.len;

    str = new char[s.len + 1];
    stcpy(str,s.str);
}

String::~String(){
    if(str) delete[] str;
}

void String::add_string(const String &s){
    str = strcat(str,s);
}

void String::copy_string(const String &s){
    str = strcpy(str,s);
}

int String::strlen(){
    return len;
}

int main(){
    String str1('c',5);
}