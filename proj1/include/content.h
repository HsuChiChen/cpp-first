#pragma once //防止頭文件重複包含

#include <iostream>
#include <fstream> //文件操作
#include <string>
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
    void add_emp(); //添加職工
    bool file_is_emp; //判斷文件是否為空
    int get_emp_num(); //統計文件中的人數
    void init_emp(); //初始化員工
    void show_emp(); //顯示職工
    void delete_emp(); //刪除職工
    void mod_emp(); //修改職工
    void find_emp(); //查找職工
    void sort_emp(); //按照編號排序
    void clean_file(); //清空文件
    int  is_exist(int id); //判斷職工是否存在 存在->返回數組位置；不存在->-1
};