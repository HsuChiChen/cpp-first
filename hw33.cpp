//影片P125
//函數調用運算符重載
#include <iostream>
#include <string>
using namespace std;

class my_print{
public:
    void operator()(string text){ //由於重載後使用的方式非常像函數的調用，因此稱為仿函數
        cout << text << endl;
    }
};

class add_num{ 
public:
    void operator()(int num1, int num2){ //仿函數非常靈活，沒有固定的寫法
        return num1 + num2;
    }
};

void test01(){
    my_print print01;
    print01("hello world");
}

void test02(){
    add_num add01;
    int ret = add_num(30, 40)
    cout << "ret = " << ret << endl;

    //匿名函數對象，當前行執行結束後，系統會立即回收掉匿名對象
    cout << add_num()(100, 200) << endl; //後面的()使用函數重載
}


int main(){
    // test01();
    test02();
    return 0;
}