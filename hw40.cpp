//影片P143
//寫文件

#include <iostream>
#include <fstream>  //1. 包含頭文件fstream
#include <string>
using namespace std;

void test01(){
    //2. 創建流對象
    ifstream ifs; //out file stream

    //3. 指定打開的方式 並判斷打開是否成功
    ifs.open("test.txt", ios::in);

    if(!ifs.is_open()){
        cout << "fail to open" << endl;
        return;
    }

    //4. 讀數據

    //第1種
    // char buf[1024] = {0};
    // while(ifs >> buf){  //類似cin>>buf去操作，將數據放在buf裡面，讀完EOF返回
    //     cout << buf << endl; //按行讀數據，但會把上次的數據覆蓋掉，所以buf每次只有一行數據
    // }

    //第2種
    // char buf[1024] = {0};
    // while(ifs.getline(buf, sizeof(buf))){  //getline一行一行，buf只向首地址 //成員函數
    //     cout << buf << endl;
    // }

    //第3種
    // string buf;
    // while(getline(ifs, buf)){  //getline一行一行，buf只向首地址 //全局函數
    //     cout << buf << endl;
    // }

    //第4種
    char c;
    while((c=ifs.get()) != EOF){ //EOF = end of file
        cout << c; //一個一個讀效率會太低
    }

    //5. 關閉文件
    ifs.close();
}

int main(){
    test01();
    return 0;
}