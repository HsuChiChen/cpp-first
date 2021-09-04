// #pragma once
#include <iostream>
using namespace std;

template<typename T1, typename T2>
class person{
public:
    person(T1 name, T2 age);
    void show();
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