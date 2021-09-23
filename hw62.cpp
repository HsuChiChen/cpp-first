//影片P235
//map內置數據自定義排序
#include <iostream>
#include <map>
using namespace std;

class my_compare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};

void print_map(const map<int, int, my_compare>&m){
    for(map<int, int>::const_iterator it=m.begin(); it!=m.end(); it++){
        cout << "key=" << it->first << "\tvalue=" << it->second << endl;
    }
}

void test01(){
    map<int, int, my_compare>m;

    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(10, 40));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));
    print_map(m);
}

int main(){
    test01();
    return 0;
}