//影片P179
//類模板成員函數類外實現
#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
class person{
public:
    person(T1 name, T2 age);
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    void show();
    // {
    //     cout << "姓名: " << this->name << " 年齡: " << this->age << endl;
    // }

    T1 name;
    T2 age;
};

//構造函數類外實現
template<typename T1, typename T2>
person<T1, T2>::person(T1 name, T2 age){
    this->name = name;
    this->age = age;
}

//成員函數類外實現
template<typename T1, typename T2>
void person<T1, T2>::show(){
    cout << "姓名: " << this->name << " 年齡: " << this->age << endl;
}

void test01(){
    person<string, int>s1("mary", 50); //以顯示指定類型方式創建類模板
    s1.show();
}

int main(){
    test01();
    return 0;
}