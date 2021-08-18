//影片P108
//拷貝構造函數

#include <iostream>
using namespace std;

class person{
public:
    person(){
        cout << "默認構造函數調用" << endl;
    }
    
    person(int age){
        m_age = age;
        cout << "有參構造函數調用" << endl;
    }

    person(const person &p){
        m_age = p.m_age;
        cout << "拷貝構造函數調用" << endl;
    }

    ~person(){
        cout << "析構函數調用" << endl;
    }
    int get_age(){
        return m_age;
    }
private:
    int m_age;
};

//1. 使用一個已經創建完畢的對象來初始化一個新對象
void test01(){
    person p1(20);
    person p2(p1);
    cout << p2.get_age() << endl;
}

//2. 值傳遞的方式給函數參數傳值
void do_work(person p){
     
}

void test02(){
    person p;
    do_work(p);
}

//3. 以值方式返回局部對象
person do_work2(){
    person p1;
    cout << (long)&p1 << endl;
    return p1; //根據p1創建新的對象
}

void test03(){
    person p = do_work2();
    cout << (long)&p << endl;
    //經過測試後，地址一樣，未調用拷貝構造函數，推測可能為編譯器不同導致
}

int main(){
    // test01();
    // test02();
    test03();
    return 0;
}