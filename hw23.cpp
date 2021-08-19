//影片P115
//this指針

#include <iostream>
using namespace std;

class person{
public:
    person(int age){
        this->age = age;
        cout << "有參構造函數調用" << endl;
    }

    person person_add(person &p){
    //person& person_add(person &p){
        this->age += p.age;
        //返回對象本體
        return *this;
    }

    person(const person &p){
        age = p.age;
        cout << "拷貝構造函數調用" << endl;
    }

    ~person(){
        cout << "構析函數調用" << endl;
    }

    int age;
};

void test02(){
    person p1(10);
    person p2(30);

    //鍊式編程思想
    p2.person_add(p1).person_add(p1).person_add(p1);
    //如果不是用引用的方式返回，則會調用到拷貝構造函數
    //即p2.person_add(p1)返回的是新拷貝的對象(p2)'，而非原先的p2
    //因此p2只會加1次，之後都是(p2)'、(p2)''在做運算了
    cout << p2.age << endl;
}

int main(){
    test02();
    return 0;
}