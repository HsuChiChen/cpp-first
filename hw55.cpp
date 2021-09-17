//影片P201
//string, vector, deque案例
//有5名選手：選手ABCDE，10個評委分別對每一名選手打分，去除最高分，去除評委中最低分，取平均分
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>
using namespace std;

class person{
public:
    person(string name, int score){
        this->name = name;
        this->score = score;
    }

    string name;
    int score;
};

void create_person(vector<person>&v){
    string name_seed = "ABCDE";
    for(int i=0; i<5; i++){
        string name = "選手";
        name += name_seed[i]; //選手A、選手B...

        int score = 0;
        person p(name, score);
        v.push_back(p);
    }
}

void set_score(vector<person>&v){
    for(vector<person>::iterator it=v.begin(); it!=v.end(); it++){
        //vector -> deque
        deque<int>d;
        
        //打分數
        srand( time(NULL) );
        for(int i=0; i<10; i++){
            int score = rand() % 41 + 60; // [60-100]
            d.push_back(score);
        }

        //排序
        sort(d.begin(), d.end());

        //去除最高與最低分
    }
}

int main(){
    // 1. 創建5個選手
    vector<person>v; //存放選手容器
    // //test
    // create_person(v);
    // for(vector<person>::iterator it=v.begin(); it!=v.end(); it++){
    //     cout << "Name:" << (*it).name << "\tscore:" << (*it).score << endl;  
    // } 
    
    //2. 給5個選手打分
    set_score(v);

    return 0;
}