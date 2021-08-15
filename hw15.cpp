//影片P103
//將所有成員屬性設置為私有，可以自己控制讀寫權限

#include <iostream>
#include <string>
using namespace std;


class person{
public:
    void set_name(string name){
        m_name = name;
    }
    
    string get_name(){
        return m_name;
    }
    
    int get_age(){
        return m_age;
    }

    void set_age(int age){
        if(age<0 || age>150){
            m_age = 0;
            cout << "年齡輸入不符" << endl;
            return;
        }
        m_age = age;
    }

    void set_lover(string lover){
        m_lover = lover;
    }

private:
    string m_name; //可讀可寫
    int m_age; //可讀限制寫
    string m_lover; //只能寫
};

int main(){
    person p;
    p.set_name("Mary");
    p.set_lover("rfrfwef");
    p.set_age(100);
    cout << p.get_name() << endl;
    cout << p.get_age() << endl;
    return 0;
}
