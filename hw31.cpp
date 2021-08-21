//影片P124
//賦值運算符重載

#include <iostream>
using namespace std;

class person{
public:
    person(int age){
        m_age = new int (age); 
        //new運算子會配置int需要的空間，並傳回該空間的位址用使用指標m_age來儲存位址
        //在配置空間之後，會將空間中的儲存值設定為age
    }
    ~person(){
        if(m_age != NULL){
            delete m_age;
            m_age == NULL;
        }
    }

    //用重載賦值運算符=，以實踐深拷貝
    person& operator=(person &p){
        //編譯器提供淺拷貝
        //m_age = p.m_age;

        //應該先判斷有屬性在堆區，先清空
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }

        //深拷貝
        m_age = new int(*p.m_age);
        //返回對象自身
        return *this;
    }


    int *m_age;
};

void test01(){
    person p1(18);
    person p2(20);
    person p3(30);
    p3 = p2 = p1;   //賦值操作，而非調用拷貝構造函數
    cout << *p1.m_age << endl;
    cout << *p2.m_age << endl;
    cout << *p3.m_age << endl;
}

int main(){
    test01();
    return 0;
}