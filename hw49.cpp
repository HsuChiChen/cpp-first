//影片P181
//類模板與友元
#include <iostream>
#include <string>
using namespace std;

//提前讓編譯器知道person類的存在
template<typename T1, typename T2> //person也是類模板
class person;
//全局函數 類外實現
template<typename T1, typename T2>
void print_2(const person<T1, T2>&p){ //用到person，要讓編譯器知道有person存在
    cout << "類外實現的內容 - name:" << p.name << " age:" << p.age << endl;
}

template<typename T1, typename T2>
class person{
    //全局函數 類內實現
    friend void print(const person<T1, T2>&p){
        cout << "類內實現的內容 - name:" << p.name << " age:" << p.age << endl;
    }

    //全局函數 類外實現
    //需加空模板參數列表，因為該函數為函數模板
    friend void print_2<>(const person<T1, T2>&p);

public:
    person(T1 name, T2 age){
        this->name = name;
        this->age = age;
    }
private:
    T1 name;
    T2 age;
};

void test01(){
    person<string, int>p("Tom", 20);
    print(p);
}

void test02(){
    person<string, int>p2("Tom", 20);
    print_2(p2);
}

int main(){
    // test01();
    test02();
    return 0;
}