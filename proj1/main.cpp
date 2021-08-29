#include <iostream>
#include "include/content.h"
#include "include/employee.h"
#include "include/manager.h"
#include "include/boss.h"
using namespace std;

int main(){
    //employee
    worker *worker = NULL;
    worker = new employee(1, "mary", 3);
    worker->show_info();
    delete worker;
    
    //manager
    worker = new manager(2, "terry", 2);
    worker->show_info();
    delete worker;

    //boss
    worker = new boss(3, "chi", 2);
    worker->show_info();
    delete worker;

    //content
    // content vm;
    // vm.show_menu();
    return 0;
}