//影片P113
//靜態成員函數

#include <iostream>
using namespace std;

class person{
public:
    static void fun(){
        m_a = 100; //靜態成員函數可以訪問靜態成員變量
        
        //m_b = 20;  //靜態成員函數不可以訪問非靜態成員變量
        //因為這個數據屬於特定的對象，因此無法區分到底是哪一個對象的
        cout << "static void function" << endl;
    }
    static int m_a; //靜態成員變量，類內聲明
    int m_b;        //非靜態成員變量

private:
	//靜態成員函數也是有訪問權限的
	static void func2(){
		cout << "func2調用" << endl;
	}
};

int person::m_a = 0; //類外初始化

void test01(){
    //1. 通過對象訪問
    person p;
    p.fun();

    //2. 通過類名訪問
    person::fun();

    //person::fun2(); 類外訪問不到私有的靜態函數
}


int main(){
    test01();
    return 0;
}