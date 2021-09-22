//影片227
//set不可以插入重複數據，而multiset可以；set插入數據的同時會返回插入結果，表示插入是否成功
#include <iostream>
#include <set>
using namespace std;

void print_set(const set<int>&s){
    for(set<int>::const_iterator it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

}

void test01(){
    set<int>s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(10);
    s1.insert(50);

    //判斷是否插入成功
    pair<set<int>::iterator, bool> ret = s1.insert(10); //返回兩組數據類型，內部由結構體實現
    if(ret.second){ 
        cout << "第一次插入成功" << endl;
    }
    else{
        cout << "第一次插入失敗" << endl;

    }

    cout << s1.count(330) << endl;

    //判斷是否找到該數值
    set<int>::iterator pos = s1.find(30);
    if(pos != s1.end()){
        cout << "find out!" << *pos << endl;
    }
    else{
        cout << "no find" << endl; 
    }

    //multiset允許插入重複值
    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    for(multiset<int>::const_iterator it=ms.begin(); it!=ms.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

}


int main(){
    test01();
    return 0;
}