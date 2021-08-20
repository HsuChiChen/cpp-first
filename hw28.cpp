//影片P121
//加號運算重載

#include <iostream>
using namespace std;

class person{
public:
    //1.成員函數重載+號
    // person operator+(const person &p){ //加入const後不可以修改變量
    //     person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }

    person(){}

    person(int a, int b){
        m_A = a;
        m_B = b;
    }

    int m_A;
    int m_B;
    
};

//2.全局函數重載+號
person operator+(person &p1, person &p2){
    person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}
//函數重載
person operator+(person &p1, int num){
    person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
}



void test01(){
    person p1(10, 30);
    person p2(500, 60);

    //1.成員函數重載+號的本質
    // person p3 = p2.operator+(p1);
    //2.全局函數重載+號的本質
    //person p3 = operator+(p1,p2);

    person p3 = p1 + p2;
    person p4 = p1 + 100;

    cout << p3.m_A << endl;
    cout << p3.m_B << endl;
    cout << p4.m_A << endl;
    cout << p4.m_B << endl;
}

int main(){
    test01();
    return 0;
}