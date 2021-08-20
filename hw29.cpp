//影片P122
//左移運算重載

#include <iostream>
using namespace std;

class person{
public:
    int m_A;
    int m_B;
};

void test01(){
    person p;
    p.m_A = 10;
    p.m_B = 20;
    cout << p;
}

int main(){
    test01();
    return 0;
}