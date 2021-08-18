//影片P112
//類對象作為類成員

#include <iostream>
#include <string>
using namespace std;

class phone{
public: 
    phone(string name){
        p_name = name;
        cout << "phone的構造函數調用" << endl;
    }
    string p_name;
};

class person{
public:
    //m_phone(p_name) 等於 phone m_phone = p_name 隱式轉換法
    person(string name, string p_name):m_name(name),m_phone(p_name){
        cout << "person的構造函數調用" << endl;
    }
  
    string m_name;
    phone m_phone;
};

void test01(){
    person p1("mary", "apple");
    cout << p1.m_name << " have " << p1.m_phone.p_name << endl;
}

int main(){
    test01();
    return 0;
}