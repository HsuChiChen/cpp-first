//影片P229
//set存放內置數據類型
#include <iostream>
#include <set>
using namespace std;

class my_compare{
public:
    bool operator()(int v1, int v2){ //()符號重載，仿函數
        return v1 > v2; //大到小，降序
    }

};

void test01(){
    set<int>s1;
    s1.insert(10);
    s1.insert(50);
    s1.insert(20);
    s1.insert(30);
    s1.insert(90);

    for(set<int>::iterator it=s1.begin(); it!=s1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //指定排序規則從大到小
    set<int, my_compare>s2; //模板內必須放數據類型，在一開始指定順序規則
    s2.insert(10);
    s2.insert(50);
    s2.insert(20);
    s2.insert(30);
    s2.insert(90);

    for(set<int, my_compare>::iterator it=s2.begin(); it!=s2.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    test01();
    return 0;
}