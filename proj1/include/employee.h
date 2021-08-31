#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class employee :public worker{
public:
    employee(int id, string name, int dep_id); //構造函數
    virtual void show_info();     //個人信息
    virtual string get_dep_id();  //崗位名稱
};