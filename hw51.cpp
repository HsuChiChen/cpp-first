//影片P187
//vector存放自定義數據類型
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//自定義數據類型
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
    //創建vector容器對象，並且通過模板參數指定容器中存放的數據的類型
    vector<person>v;

	//向容器中放數據
    person p1("aaa", 10);
    person p2("bbb", 20);
    person p3("ccc", 30);
    person p4("ddd", 40);
    person p5("eee", 50);
    person p6("fff", 60);

    //向容器中添加數據
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //遍歷
    //每一個容器都有自己的疊代器，用來遍歷容器中的元素
	//v.begin()返回疊代器，這個疊代器指向容器中第一個數據
	//v.end()返回疊代器，這個疊代器指向容器元素的最後一個元素的下一個位置
	//vector<int>::iterator 拿到vector<int>這種容器的疊代器類型    
    for(vector<person>::iterator it = v.begin(); it != v.end(); it++){
        cout << "name:" << (*it).name << " age:" << (*it).age << endl;
    }
}

void test02(){
    //存放對象指針
    vector<person*>v;
    person p1("aaa", 10);
    person p2("bbb", 20);
    person p3("ccc", 30);
    person p4("ddd", 40);
    person p5("eee", 50);
    person p6("fff", 60);

    //向容器中添加數據
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    //二級指針
    for(vector<person*>::iterator it = v.begin(); it != v.end(); it++){
        cout << "::name:" << (**it).name << " age:" << (**it).age << endl;
    }
}

int main(){
    test02();
    return 0;
}