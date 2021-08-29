#include "../include/manager.h"

manager::manager(int id, string name, int dep_id){
    this->id = id;
    this->name = name;
    this->dep_id = dep_id;
}

void manager::show_info(){
    cout << "職工編號: " << this->id
         << "\t職工姓名: " << this->name
         << "\t崗位: " << this->get_dep_id()
         << "\t崗位職責: 完成x老闆交給的任務"
         << endl;
}

string manager::get_dep_id(){
    return string("經理");
}