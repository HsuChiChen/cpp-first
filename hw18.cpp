//影片P106、107
//構造函數

#include <iostream>
using namespace std;

class person{
public:
    //構造函數
    person(){
        cout << "無參構造函數調用" << endl;
    }
    
    //構造函數(函數重載)
    person(int age){
        m_age = age;
        cout << "有參構造函數調用" << endl;
    }

    //析構函數
    ~person(){
        cout << "析構函數調用" << endl;
    }
    
    //拷貝構造函數
    //const ->拷貝的同時不能把本體改了
    //& ->用引用的方式淺拷貝以減少內存空間(加入const後不可以修改變量，防止形參修改實參)
    person(const person &p){
        //將傳入的人身上屬性拷貝到我身上
        m_age = p.m_age;
        cout << "拷貝構造函數調用" << endl;
    }

    int get_age(){
        return m_age;
    }
private:
    int m_age;
};

//調用
void test01(){ //在stack的數據，在test01執行完就會被釋放
    
    //1. 括號法
    // person p;      //默認構造函數
    // person p2(50); //有參構造函數
    // person p3(p2); //拷貝構造函數
    
    // cout << "p2的年齡為: " << p2.get_age() << endl;
    // cout << "p3的年齡為: " << p3.get_age() << endl;

    //PS: 調用默認構造函數時，不要加()
    // 因為編譯器會認為是一個函數的聲明，不會認為在創建對象
    // person p();
    // void fun();

    //2. 顯示法
    // person p1;
    // person p2 = person(10); 
    // person p3 = person(p2);

    // person(10); //匿名對象 當前行執行結束後，系統會立即回收掉匿名對象
    // 不能利用拷貝構造函數初始化匿名對象 編譯器認為是對象聲明 person(p3) = person p3
    // person(p3);

    //3. 隱式轉換法
    person p4 = 10;  // Person p4 = Person(10); 
	Person p5 = p4;  // Person p5 = Person(p4); 

    

}

int main(){
    test01();
    return 0;
}