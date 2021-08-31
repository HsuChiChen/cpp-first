#pragma once //防止頭文件重複包含

#include <iostream>
#include <fstream> //文件操作
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;
#define FILENAME "emp.txt"

class content{
public:
    content();
    ~content();
    void show_menu(); //顯示菜單
    void exit_system(); //退出系統
    int emp_num; //紀錄職工人數
    worker **emp_arr; //二級指針(指針的指針)
    void save(); //保存文件
    bool file_is_emp; //判斷文件是否為空
    void add_emp(); //添加職工
};