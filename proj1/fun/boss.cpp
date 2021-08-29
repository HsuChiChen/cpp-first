#include "../include/boss.h"

boss::boss(int id, string name, int dep_id){
    this->id = id;
    this->name = name;
    this->dep_id = dep_id;
}

void boss::show_info(){
    cout << "職工編號: " << this->id
         << "\t職工姓名: " << this->name
         << "\t崗位: " << this->get_dep_id()
         << "\t崗位職責: 管理公司所有事務"
         << endl;
}

string boss::get_dep_id(){
    return string("總裁");
}