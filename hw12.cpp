//影片P74
//通訊錄實作

#define MAX 1000

#include <iostream>
#include <string>
using namespace std;
void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}


struct person{
    string name;
    int sex; //1 -> man 2 -> woman
    int age;
    string phone;
    string address;
};

struct directory{
    struct person personarr[MAX];
    int size;
};

//1.添加聯繫人
void addpersion(struct directory * abs){
    //人數是否已滿
    if(abs->size == MAX){
        cout << "通訊錄已滿，無法添加" << endl;
        return;
    }
    else{
        //姓名
        cout << "請輸入姓名" << endl;
        string name;
        cin >> name;
        abs->personarr[abs->size].name = name;

        //性別
        cout << "請輸入性別: " << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sex;
        while(1){
            cin >> sex;
            if(sex == 1 || sex == 2){
            abs->personarr[abs->size].age = sex;
            break;
            }
            cout << "輸入有誤，請重新輸入" << endl;
        }
        
        //年齡
        cout << "請輸入年齡: " << endl;
        int age;
        cin >> age;
        abs->personarr[abs->size].age = age;

        //電話
        cout << "請輸入聯繫電話: " << endl;
        string phone;
        cin >> phone;
        abs->personarr[abs->size].phone = phone;

        //住址
        cout << "請輸入家庭住址: " << endl;
        string address;
        cin >> address;
        abs->personarr[abs->size].address = address;

        //更新人數
        abs->size++;

        clear();
        cout << "添加成功!" << endl;
    }
}



void showmenu(){
    cout << "************************" << endl;
    cout << "***** 1.添加聯繫人 *****" << endl;
    cout << "***** 2.顯示聯繫人 *****" << endl;
    cout << "***** 3.刪除聯繫人 *****" << endl;
    cout << "***** 4.查找聯繫人 *****" << endl;
    cout << "***** 5.修改聯繫人 *****" << endl;
    cout << "***** 6.清空聯繫人 *****" << endl;
    cout << "***** 7.退出通訊錄 *****" << endl;
    cout << "************************" << endl; 
}

int main(){
    int select;
    struct directory abs;
    abs.size = 0;


    while(1){
        showmenu();
        cin >> select;
        switch(select){
            case 1: //1.添加聯繫人
                addpersion(&abs);
                break;
            case 2:  //2.顯示聯繫人
                
                break;
            case 3:  //3.刪除聯繫人
                
                break;
            case 4:  //4.查找聯繫人
                
                break;
            case 5:  //5.修改聯繫人
                
                break;
            case 6:  //6.清空聯繫人
                
                break;
            case 0:  //7.退出通訊錄
                cout << "歡迎下次再使用" << endl;
                return 0;
                break;
            default:
                cout << "無效輸入" << endl;
        }
    }
}