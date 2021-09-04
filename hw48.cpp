//影片P180
//類模板分文件編寫
#include <iostream>
#include <string>
//#include "include/person.h"
//類模板的成員函數一開始是不會創建的，所以導致他看不到cpp文件
//先include *.cpp讓編譯器看到*.cpp內的*.h和其他內容

//1. 第一種解決方式，直接包含源文件 (沒人這麼做，習慣上用第2點)
// #include "fun/person.cpp" 

//2. 將聲明和實現寫到同一個文件中，並更改後綴名為.hpp，hpp是約定俗成的名稱
#include "include/person.hpp" 

using namespace std;
void test01(){
    person<string, int>s1("mary", 50); //以顯示指定類型方式創建類模板
    s1.show();
}

int main(){
    test01();
    return 0;
}