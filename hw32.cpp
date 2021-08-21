//影片P124
//關係運算符重載

#include <iostream>
#include <string>
using namespace std;

class person{
public:
    person(string name, int age):m_name(name), m_age(age){
    }

    //重載==, !=號
    bool operator==(person &p){
        if(this->m_name == p.m_name && this->m_age == p.m_age){
            return true;
        }
        return false;
    }

    bool operator!=(person &p){
        if(this->m_name == p.m_name && this->m_age == p.m_age){
            return false;
        }
        return true;
    }

    string m_name;
    int m_age;
};


void test01(){
    person p1("Tom", 18);
    person p2("Tom", 18);

    if(p1 == p2)
        cout << "p1 is equivalent to p2" << endl;
    else
        cout << "p1 isn't equivalent to p2" << endl;

    // if(p1 != p2)
    //     cout << "p1 isn't equivalent to p2" << endl;
    // else
    //     cout << "p1 is equivalent to p2" << endl;

}

int main(){
    test01();
    return 0;
}