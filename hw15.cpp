//影片P99

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

    void set_lover(string lover){
        m_lover = lover;
    }

    void set_age(int age){
        if(age<0 || age>150){
            m_age = 0;
            cout << "年齡輸入不符" << endl;
            return;
        }
        m_age = age;
    }


private:
    string m_name;
    int m_age;
    string m_lover;
};

int main(){
    person p;
    p.set_name("Mary");
    p.set_lover("rfrfwef");
    p.set_age(100000);
    cout << p.get_name() << endl;
    cout << p.get_age() << endl;
    cout << p.get_age() << endl;
    return 0;
}
