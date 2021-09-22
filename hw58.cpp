//影片P222
//自定義數據類型排序案例
//按照年齡進行升序，如果年齡相同按照身高進行降序
#include <iostream>
#include <string>
#include <list>
using namespace std;

class person{
public:
    person(string name, int age, int height){
        this->m_name = name;
        this->m_age = age;
        this->m_height = height;
    }

    string m_name;
    int m_age;
    int m_height;

};

//指定排序規則
bool compare_person(person &p1, person &p2){
    //按照年齡升序
    if(p1.m_age == p2.m_age){
        //年齡相同，按照身高降序排列
        return p1.m_height > p2.m_height;
    }
    return p1.m_age < p2.m_age;
}


void test01(){
    list<person>l;
    person p1("劉備", 35 , 175);
	person p2("曹操", 45 , 180);
	person p3("孫權", 40 , 170);
	person p4("趙雲", 25 , 190);
	person p5("張飛", 35 , 160);
	person p6("關羽", 35 , 200);

    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);

    for(list<person>::iterator it = l.begin(); it!=l.end(); it++){
        cout << "name:" << it->m_name << "\tage:" << it->m_age << "\theight:" << it->m_height << endl;
    }
    cout << "\n\n\n";
    l.sort(compare_person);
    for(list<person>::iterator it = l.begin(); it!=l.end(); it++){
        cout << "name:" << it->m_name << "\tage:" << it->m_age << "\theight:" << it->m_height << endl;
    }
}

int main(){
    test01();
    return 0;
}