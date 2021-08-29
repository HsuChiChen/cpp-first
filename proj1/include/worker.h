#pragma once
#include <iostream>
#include <string>
using namespace std;

//職工抽象類
//抽象類函數不做任何實踐，因此不需要再加C++文件
class worker{
public:
    virtual void show_info() = 0; //個人信息
    virtual string get_dep_id() = 0; //崗位名稱
    
    int id; //編號
    string name; //姓名
    int dep_id; //部門
};