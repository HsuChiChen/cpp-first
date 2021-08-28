//影片P146
//二進制讀文件

#include <iostream>
#include <fstream> //1. 包含頭文件
using namespace std;

class person{
public:
    char m_name[64];
    int m_age;
};

void test01(){
    //2. 創建流對象
    ifstream ifs;
    
    //3. 打開文件
    ifs.open("person.txt", ios::in | ios::binary);

    if( !ifs.is_open() ){
        cout << "fail to open" << endl;
        return;
    }

    //4. 讀文件
    person p;
    ifs.read( (char *)&p, sizeof(person) );

    cout << "姓名: " << p.m_name << " 年齡: " << p.m_age << endl;
    
    //5. 關閉文件
    ifs.close();
}

int main(){
    test01();
    return 0;
}