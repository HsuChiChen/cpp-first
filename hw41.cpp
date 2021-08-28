//影片P145
//二進制寫文件

#include <iostream>
#include <fstream>  //1.包含頭文件
using namespace std;

//二進制文件 寫文件
class person{
public:
    char m_name[64]; //姓名
    int m_age;       //年齡
};

void test01(){
    //2. 創建流對象
    ofstream ofs("test.txt", ios::out | ios::binary); //可2.3合併有構造函數
    
    //3. 打開文件
    //ofs.open("test.txt", ios::out | ios::binary)

    //4. 寫文件
    person p ={"張三", 18};
    ofs.write( (const char*)&p, sizeof(person) ); //強轉為字符型

    //5. 關閉文件
    ofs.close();
}

int main(){
    test01();
    return 0;
}