//影片P123
//遞增運算符重載

#include <iostream>
using namespace std;

class integer{
    friend ostream& operator<<(ostream &cout, const integer &i);
public:
    integer(){
        m_num = 20;
    }

    //重載前置++運算符 返回引用為了一直對一個數據進行遞增操作
    integer& operator++(){
        //先進行++運算
        m_num++;
        //再將自身返回
        return *this;
    }

    //重載後置++運算符
    integer operator++(int){ //int(必須要用int)代表佔位參數，可以用於區分前置和後置遞增
        //先 紀錄當時結果
        integer temp = *this;
        //後 遞增
        m_num++;
        //最後將記錄結果做返回
        return temp; //局部對象temp在當前函數執行完就會被釋放
        //所以如果後面還要返回引用就是非法操作，因此後置遞增要返回**值**
    }

private:
    int m_num;
};

//全局重載<<運算符
ostream& operator<<(ostream &cout, const integer &i){
    cout << i.m_num;
    return cout;
}


void test01(){
    integer int01;
    cout << int01++ << endl;
    cout << int01 << endl;
}

int main(){
    test01();
    return 0;
}