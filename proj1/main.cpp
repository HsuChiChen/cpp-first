#include <iostream>
#include <cstdlib>
#include "include/content.h"
#include "include/employee.h"
#include "include/manager.h"
#include "include/boss.h"
    using namespace std;

int main(){
    // //employee
    // worker *worker = NULL;
    // worker = new employee(1, "mary", 3);
    // worker->show_info();
    // delete worker;
    
    // //manager
    // worker = new manager(2, "terry", 2);
    // worker->show_info();
    // delete worker;

    // //boss
    // worker = new boss(3, "chi", 2);
    // worker->show_info();
    // delete worker;

    // //content
    // content vm;
    // vm.show_menu();

    content vm;
    int choice = 0; //存儲用戶的選項
    
    while(true){
        vm.show_menu();
        cout << "請輸入您的選擇" << endl;
        cin >> choice;
        switch(choice){
            case 0: //退出系統
                vm.exit_system();
                break;
            case 1: //增加職工
                vm.add_emp();
                break;
            case 2: //顯示職工
                vm.show_emp();
                break;
            case 3: //刪除職工
                vm.delete_emp();
                break;
            case 4: //修改職工
                vm.mod_emp();
                break;
            case 5: //查找職工
                break;
            case 6: //排序職工
                break;
            case 7: //清空文檔
                break;
            default:
                system("clear");
        }
    }

    return 0;
}