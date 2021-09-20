//影片P214
//自定義數據類型插入queue容器
#include <iostream>
#include <queue>
#include <string>
using namespace std;

class person{
public:
    person(string name, int age){
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

void test01(){
    queue<person>q;
    person p1("terry", 30);
    person p2("papaya", 20);
    person p3("mango", 10);
    person p4("guava", 80);

    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    cout << q.size() << endl;
    
    while(!q.empty()){
        cout << q.front().name << " " << q. front().age << endl;
        cout << q.back().name << " " << q. back().age << endl;
        q.pop();
    }

    cout << q.size() << endl;
}

int main(){
    test01();
    return 0;
}