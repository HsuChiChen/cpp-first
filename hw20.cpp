//影片P110
//深、淺拷貝

#include <iostream>
using namespace std;

class person{
public:
    person(){
        cout << "默認構造函數調用" << endl;
    }
    
    person(int age, int height){
        m_age = age;
        m_height = new int(height); //stack區指針去存heap區的地址
        cout << "有參構造函數調用" << endl;
    }

    person(const person &p){
        m_age = p.m_age;
        //m_height = p.m_height //編譯器默認實現這行代碼，
        //但因為是淺拷貝會造成析構函數重複釋放heap的空間，而產生錯誤

        //需要深拷貝解決
        m_height = new int (*p.m_height); 
        //解引用該值，並重新向heap區申請一個空間讓
        //讓自己的m_height去指向這塊空間
        cout << "拷貝構造函數調用" << endl;
    }

    ~person(){ //析構代碼，將堆區開闢的數據做釋放
        if(m_height != NULL){
            delete m_height;
            m_height = NULL; //防止野指針出現
        }
        cout << "析構函數調用" << endl;
    }
    int get_age(){
        return m_age;
    }

    int m_age;
    int *m_height;
};

void test01(){
    person p1(20,160);
    cout << "p1 年齡為: " << p1.get_age() << "\t身高為: " << *p1.m_height << endl;
    person p2(p1);
    cout << "p2 年齡為: " << p2.get_age() << "\t身高為: " << *p2.m_height << endl;
}

int main(){
    test01();
    return 0;
}