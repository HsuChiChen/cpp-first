//影片P137
//多態案例 : 計算機

#include <iostream>
#include <string>
using namespace std;

class cal2{
public:
    int ans(string op){
        if(op == "+")
            return num1 + num2;
        else if(op == "-")
            return num1 - num2;
        else if(op == "*")
            return num1 * num2;
        return -1;
        //如果想擴展新的功能，需要修改源碼，但在真的開發中提倡開閉原則 
        //開閉原則 - 對擴展進行開放，對修改進行關閉
    }

    int num1;
    int num2;
};

void test01(){
    cal2 c;
    c.num1 = 10;
    c.num2 = 20;
    cout << c.ans("*") << endl;
}

//多態實現計算機抽象類
class cal{
public:
    virtual int ans(){
        return 0;
    }
    int num1;
    int num2;
};

class add :public cal{
public:
    int ans(){
        return num1 + num2;
    }
};

class sub :public cal{
public:
    int ans(){
        return num1 - num2;
    }
};

class mul :public cal{
public:
    int ans(){
        return num1 * num2;
    }
};

void test02(){
    cal *abs = new add;
    abs->num1 = 10;
    abs->num2 = 20;
    cout << abs->num1 << " + " << abs->num2 << " = " << abs->ans() << endl;
    delete abs;

    abs = new sub;
    abs->num1 = 10;
    abs->num2 = 20;
    cout << abs->num1 << " - " << abs->num2 << " = " << abs->ans() << endl;
    delete abs;

    abs = new mul;
    abs->num1 = 10;
    abs->num2 = 20;
    cout << abs->num1 << " * " << abs->num2 << " = " << abs->ans() << endl;
    delete abs;
}

int main(){
    //test01();
    test02();
    return 0;
}