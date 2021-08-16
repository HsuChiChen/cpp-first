#include <iotream>
using namespace std;

class person{
public:
    person(){
        cout << "默認構造函數調用" << endl;
    }
    
    person(int age){
        m_age = age;
        cout << "有參構造函數調用" << end;
    }

    person(const person &p){
        m_age = p.m_age;
        cout << "拷貝構造函數調用" << end;
    }

    ~person(){
        cout << "析構函數調用" << endl;
    }
private:
    int m_age;
};

int main(){

}