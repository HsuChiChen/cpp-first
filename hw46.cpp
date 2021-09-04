//影片P177
//類模板對象做函數參數
#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
class person{
public:
    person(T1 name, T2 age){
        this->name = name;
        this->age = age; 
    }

    void show(){
        cout << "姓名: " << this->name << " 年齡: " << this->age << endl;
    }

    T1 name;
    T2 age;
};

//1. 指定傳入類型
void print01(person<string, int>&p){
    p.show();
}

void test01(){
    person<string, int>p("mary", 100);
    print01(p);
}

//2. 參數模板化
template<typename T1, typename T2>
void print02(person<T1, T2>&p){
    p.show();
    cout << "T1的數據類型為: " << typeid(T1).name() << endl; 
    cout << "T2的數據類型為: " << typeid(T2).name() << endl; 
}

void test02(){
    person<string, int>p("terry", 50);
    print02(p);
}

//3. 整個類模塊化
template<typename T>
void print03(T &p){
    p.show();
    cout << "T的數據類型為: " << typeid(T).name() << endl; 
}

void test03(){
    person<string, int>p("stella", 30);
    print03(p);
}

int main(){
    // test01();
    // test02();
    test03();
    return 0;
}