//影片P204
//deque構造函數與常數疊代器
#include <iostream>
#include <deque>
using namespace std;

void print_deque(const deque<int>&d){
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
        // *it = 100; //容器中的數據不得修改了
        cout << *it << " ";
    }
    cout << endl;
}


void test01(){
    deque<int>d1;
    for(int i=0; i<10; i++){
        d1.push_back(i);
    }
    print_deque(d1);

    //區間的方式賦值
    deque<int>d2(d1.begin(), d1.end());
    print_deque(d2);

    //10個100構造函數初始化
    deque<int>d3(10, 100);
    print_deque(d3);

    //利用拷貝構造函數初始化
    deque<int>d4(d3);
    print_deque(d4);

}

int main(){
    test01();
    return 0;
}