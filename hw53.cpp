//影片P189
//string構造函数
#include <iostream>
#include <string>
using namespace std;

void test01(){
    //1.查找
    string str1 = "abcdefg";
    int aa = 1000;
    aa = str1.find("desffs");
    cout << aa << endl;

}

int main(){
    test01();
    return 0;
}