//影片P143
//寫文件

#include <iostream>
#include <fstream>  //1. 包含頭文件fstream
using namespace std;

void test01(){
    //2. 創建流對象
    ofstream ofs; //out file stream

    //3. 指定打開的方式
    ofs.open("test.txt", ios::out);

    //4. 寫內容
    ofs << "name : mary"<< endl;
    ofs << "sex  : man" << endl;
    ofs << "age  : 18"  << endl;

    //5. 關閉文件
    ofs.close();
}

int main(){
    test01();
    return 0;
}