//影片P230
//set存放自定義數據類型
#include <iostream>
#include <set>
using namespace std;

class person{
public:
    person(string name, int age){
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};

//對於自定義數據類型，需要利用仿函數指定排序規則
class compare_person{
public:
    bool operator()(const person &p1, const person &p2){
        //按照年齡降序
        return p1.m_age > p2.m_age;
    }
};


void test01(){
    //自定義數據類型 都會指定排序規則
    set<person, compare_person>s;

    //創建person數據類型
    s.emplace("mary", 24);
    s.emplace("sella", 25);
    s.emplace("terry", 30);
    s.emplace("chen", 50);
    s.emplace("shinomiya", 19);

    for(set<person, compare_person>::iterator it=s.begin(); it!=s.end(); it++){
        cout << "name:" << it->m_name << "\tage:" << it->m_age << endl;
    }
}

int main(){
    test01();
    return 0;
}


