//影片236 STL的總結案例
/*公司今天招聘了10個員工（ABCDEFGHIJ），10名員工進入公司之後，需要指派員工在那個部門工作
  員工信息有: 姓名  工資組成；部門分為：策劃、美術、研發
  隨機給10名員工分配部門和工資
  通過multimap進行信息的插入  key(部門編號) value(員工)
  分部門顯示員工信息*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
using namespace std;

#define PLAN 0
#define ART 1
#define RD 2

class worker{
public:
    string m_name;
    int m_salary;

};

void create_worker(vector<worker>&v){
    string name_seed = "ABCDEFGHIJ";
    for(int i=0; i<10; i++){
        worker worker;
        worker.m_name = "employee";
        worker.m_name += name_seed[i];

        worker.m_salary = rand() % 10000 + 10000; //10000-19999
        v.push_back(worker);
    }
}

//員工的分組
void set_group(vector<worker>&v, multimap<int, worker>&m){
    for(vector<worker>::iterator it=v.begin(); it!=v.end(); it++){
        //產生隨機部門編號
        int dep_id = rand() % 3;
        
        //將員工插入到分組中
        m.insert(make_pair(dep_id, *it));
    }
}

void show_worker(multimap<int, worker>&m){
    //0 A B C; 1 D E; 2 F G...
    cout << "dep of planning:" << endl;
    multimap<int, worker>::iterator pos = m.find(PLAN); //find()->若key存在，返回該key鍵元素的疊代器
    int count = m.count(PLAN); //統計策畫部門具體人數，增加條件如此就不會往後遍歷
    int index = 0;
    for(; pos!=m.end() && index < count ; pos++, index++){ //起始位置已經有了，故省略
        cout << "name: " << pos->second.m_name << "\tsalary: " << pos->second.m_salary << endl;
    }

    cout << "-----------------------" << endl;
    cout << "dep of art: " << endl;
    pos = m.find(ART);
    count = m.count(ART);  //統計具體人數 (統計key的元素個數)
    index = 0;
    for(; pos!=m.end() && index < count ; pos++, index++){
        cout << "name: " << pos->second.m_name << "\tsalary: " << pos->second.m_salary << endl;
    }

    cout << "-----------------------" << endl;
    cout << "dep of RD: " << endl;
    pos = m.find(RD);
    count = m.count(RD);  //統計具體人數
    index = 0;
    for(; pos!=m.end() && index < count ; pos++, index++){
        cout << "name: " << pos->second.m_name << "\tsalary: " << pos->second.m_salary << endl;
    }
}

int main(){
    srand( time(NULL) );
    //1. 創建員工
    vector<worker>worker1;
    create_worker(worker1);

    // //test code
    // for(vector<worker>::iterator it=worker1.begin(); it!=worker1.end(); it++){
    //     cout << "name: " << it->m_name << "\t\tsalary: " << it->m_salary << endl;
    // }

    //2. 員工分組
    multimap<int, worker>g_worker;
    set_group(worker1, g_worker);

    //3. 分組顯示員工
    show_worker(g_worker);
    

    return 0;
}