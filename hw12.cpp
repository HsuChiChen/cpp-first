//影片P74-83
//通訊錄實作

#define MAX 1000

#include <iostream>
#include <string>
using namespace std;
void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
//        system("clear");
    #elif defined(_WIN32) || defined(_WIN64)
        system("pause");
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


//0.菜單介面
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

    cout << "添加成功!" << endl;
    clear();
    }
}

//2.顯示聯繫人
void showperson(struct directory * abs){
    if(abs->size == 0)
        cout << "當前紀錄為空" << endl;
    else{
        for(int i=0; i<abs->size; i++){
            cout << "姓名: " << abs->personarr[i].name << "\t";
            cout << "性別: " << (abs->personarr[i].sex == 1? "男":"女") << "\t";
            cout << "年齡: " << abs->personarr[i].age << "\t";
            cout << "電話: " << abs->personarr[i].phone << "\t";
            cout << "住址: " << abs->personarr[i].address << endl;
        }
    }
}

//3.刪除聯繫人-檢測存在
int isexist(struct directory * abs, string name){
    for(int i=0; i<abs->size; i++){
        if(abs->personarr[i].name == name)
            return i; //找到，返回index
    }
    return -1; //沒找到
}

//3.刪除聯繫人-刪除
void deleteperson(struct directory * abs){
    cout << "請輸入您要刪除的聯繫人:" << endl;
    string name;
    cin >> name;
    int ret = isexist(abs, name);
    if(ret != -1){
        for(int i=ret; i<abs->size; i++) //數據前移
            abs->personarr[i] = abs->personarr[i+1];
        abs->size--;
        cout << "刪除成功" << endl;
    }
    else
        cout << "查無此人" << endl; //ret =-1 未查到
}

//4.查找聯繫人
void findperson(struct directory * abs){
    cout << "請輸入您要查找的聯繫人:" << endl;
    string name;
    cin >> name;
    int ret = isexist(abs, name);
    if(ret != -1){
        cout << "姓名: " << abs->personarr[ret].name << "\t";
        cout << "性別: " << (abs->personarr[ret].sex == 1? "男":"女") << "\t";
        cout << "年齡: " << abs->personarr[ret].age << "\t";
        cout << "電話: " << abs->personarr[ret].phone << "\t";
        cout << "住址: " << abs->personarr[ret].address << endl;
    }
    else
        cout << "查無此人" << endl; //ret =-1 未查到
    clear();
}

//5.修改聯繫人
void modifyperson(struct directory * abs){
    cout << "請輸入要修改的聯繫人:" << endl;
    string name;
    cin >> name;
    int ret = isexist(abs, name); //abs已經是地址
    if(ret != 1){
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

        cout << "添加成功!" << endl;
    }
    else
        cout << "查無此人"<<endl;

    clear();
}

//6.清空聯繫人
void cleanperson(struct directory * abs){
    char confirm;
    cout << "按1確認刪除或按其他鍵跳出" << endl;
    cin >> confirm;

    if(confirm == '1'){
        abs->size = 0;
        cout << "通訊錄已清空" << endl;
    }
    else
        cout << "已跳出設定" << endl;
    clear();
    
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
                showperson(&abs);
                break;
            case 3:  //3.刪除聯繫人
                deleteperson(&abs);
                
                break;
            case 4:  //4.查找聯繫人
                findperson(&abs);
                break;
            case 5:  //5.修改聯繫人
                modifyperson(&abs);
                break;
            case 6:  //6.清空聯繫人
                cleanperson(&abs);
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