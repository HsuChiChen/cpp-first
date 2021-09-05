//影片P182-P184
//類模板案例
#include <iostream>
#include <string>
#include "include/array.hpp"
using namespace std;

void print_int(arr <int>& arr){
    for(int i=0; i<arr.get_size(); i++)
        cout << arr[i] << endl;
}

void test01(){
    arr <int>arr1(7);
    for(int i=0; i<5; i++)
        arr1.push_back(i); //尾插法
    cout << "arr1打印輸出為:" << endl; 
    print_int(arr1);
    cout << "arr1的容量為:" << arr1.get_capacity() << endl; 
    cout << "arr1的大小為:" << arr1.get_size() << endl; 
    
    arr <int>arr2(arr1);
    cout << "arr2打印輸出為:" << endl;
    arr2.pop_back();
    print_int(arr2);
    cout << "arr2的容量為:" << arr2.get_capacity() << endl; 
    cout << "arr2的大小為:" << arr2.get_size() << endl; 
    
    // arr <int>arr3(30);
    // arr3 = arr1;
}

//測試自定義數據類型
class person{
public:    
    person(){}
    person(string name, int age){
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

void print_person(arr <person>& arr){
    for(int i=0; i<arr.get_size(); i++)
        cout << "name:" << arr[i].name << "\tage:" << arr[i].age << endl;
}

void test02(){
    arr<person>arr1(10);
    person p1("mary", 950);
    person p2("terry", 30);
    person p3("bella", 100);
    person p4("tom", 5000);
    person p5("terry", 200);

    //將數據插入到數組中
    arr1.push_back(p1);
    arr1.push_back(p2);
    arr1.push_back(p3);
    arr1.push_back(p4);
    arr1.push_back(p5);

    //打印數組
    print_person(arr1);

    //輸出容量與大小
    cout << "arr1的容量為: " << arr1.get_capacity() << endl; 
    cout << "arr1的大小為: " << arr1.get_size() << endl; 
}

int main(){
    test01();
    test02();
    return 0;
}