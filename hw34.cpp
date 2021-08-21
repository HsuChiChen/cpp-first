#include <iostream>
using namespace std;

class base{
public:
    base(){
        m_A = 100;
        m_B = 500;
    }
    void fun(){
        cout << "fun() in base" << endl;
    }

    void fun(int a){
        cout << "fun(int) in base" << endl;
    }

    int m_A;
    int m_B;
};

class son :public base{
public:
    son(){
        m_A = 200;
    }
    void fun(){
        cout << "fun() in son" << endl;
    }

    int m_A;
};

void test01(){
    son s;
    cout << s.m_A << endl;
    cout << s.base::m_A << endl;
    cout << s.m_B << endl;
}

void test02(){
    son s;
    s.base::fun();
    s.base::fun(10);
}

int main(){
    // test01();
    test02();
    return 0;
}