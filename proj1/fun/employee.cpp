#include "../include/employee.h"
using namespace std;

//構造函數
employee::employee(int id, string name, int dep_id){
    this->id = id;
    this->name = name;
    this->dep_id = dep_id;
}

//個人信息                  
void employee::show_info(){
    cout << "職工編號: " << this->id
         << "\t職工姓名: " << this->name
         << "\t崗位: " << this->get_dep_id()
         << "\t崗位職責: 完成經理交給的任務"
         << endl;

}

//崗位名稱
string employee::get_dep_id(){
    return string("員工"); //不包含也可，編譯器會隱式轉換char * -> string
}