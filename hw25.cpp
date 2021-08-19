//影片P117
//const修飾成員函數 

#include <iostream>
using namespace std;

class person{
public:
    person(int a, int b){
        m_A = a;
        m_B = b;
    }
    //this指針的本質是指針常量，指針的指向是不可以修改的
    //person * const this;
    //void show_person() {

    //const person * const this;
    //在成員函數後面加const，修飾的是this指向，讓指針指向的值也不能修改
    void show_person() const{
        //this->m_A = 100;
        m_B = 200;
        //this = NULL; //this指針的指向是不可以修
    }
    void fun(){

    }

    int m_A;
    mutable int m_B; //mutable易變的，特殊變量，即使在常函數中，也可以修改這個值
};

// void test01(){
//     person p(20,30);
//     p.show_person();
// }

void test02(){
    const person p2(10, 20); //常對象
    //p.m_A = 100;
    p2.m_B =200; //mutable int 在常對象依然可以修改
    cout << p2.m_B << endl;
    // p2.fun(); //常對象不可以調用普通的成員函數，因為普通成員函數可以修改屬性
}

int main(){
    test02();
    return 0;
}