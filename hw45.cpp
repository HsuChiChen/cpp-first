//影片P174
//類模板
#include <iostream>
#include<string>
using namespace std;

template<typename name_type, typename age_type = int>
class person{
public:
    person(name_type name, age_type age){
        this->name = name;
        this->age = age;
    }

    void show_person(){
        cout << "name:" << this->name << " age:" << this->age << endl;
    }

    name_type name;
    age_type age;
};

void test01(){
    person<string>p1("mary", 99);
    p1.show_person();
    
}

int main(){
    test01();
    return 0;
}