#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class  manager :public worker{
public:
    manager(int id, string name, int dep_id);
    virtual void show_info();
    virtual string get_dep_id();
};