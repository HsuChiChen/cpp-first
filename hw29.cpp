//影片P122
//左移運算符重載

#include <iostream>
using namespace std;

class person{
    friend ostream& operator<<(ostream &cout, const person  &p);
public:
    //利用成員函數重載左移運算符 p.operator << (cout) 簡化版本 p << cout
    //不會利用成員函數重載<<運算符，因為無法實現cout在左側
    // void operator<<(cout)){
    // 
    // }
    person(){}
    person(int a, int b):m_A(a), m_B(b){}
private:
    int m_A;
    int m_B;
};

//只能利用全局函數重載左移運算符 operator<<(cout, p) 簡化版本 cout << p
//標準輸出流ostream類中的對象cout全局只能有一個 因此用引用的方式傳入
ostream& operator<<(ostream &cout, const person  &p){ //用引用的方式給cout起別名也可以
    cout << "m_A= " << p.m_A << "  m_B = " << p.m_B << endl;
    return cout;
}


void test01(){
    person p(10, 20);
    cout << p <<"hello world" << endl; //鍊式編程思想
}

int main(){
    test01();
    return 0;
}