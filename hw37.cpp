//影片P140
//虛析構與純虛析構

#include <iostream>
#include <string>
using namespace std;

class animal{
public:
    animal(){
        cout << "animal構造函數調用" << endl;
    }

    // virtual ~animal(){ //虛析構函數 
    //     cout << "animal析構函數調用" << endl;
    // }

    //純虛析構函數需要聲明也需要實現
    //有了純虛析構之後，這個類也屬於抽象類，無法實例化對象。
    virtual ~animal() = 0;    
    virtual void speak() = 0; //純虛函數
};

animal::~animal(){
    cout << "animal析構函數調用" << endl;
}


class cat :public animal{
public:
    cat(string name){
        m_name = new string(name);
        cout << "cat構造函數調用" << endl;
    }

    ~cat(){
        if(m_name != NULL){
            delete m_name;
            m_name = NULL;
            cout << "cat析構函數調用" << endl;
        }
    }

    void speak(){
        cout << *m_name << "小貓在說話" << endl;
    }
    string *m_name;
};

void test01(){
    animal *animal = new cat("湯姆");
    animal->speak();
    //父類指針在析構時候，不會調用子類中析構函數，導致子類如果有堆區屬性，出現內存洩漏
    //解決方法: 將父類析構函數改為虛析構
    delete animal;
}

int main(){
    test01();
    return 0;
}