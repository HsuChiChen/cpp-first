//影片P221
//反轉與排序
#include <iostream>
#include <list>
using namespace std;

void print_list(const list<int>&l){
    for(list<int>::const_iterator it=l.begin(); it!=l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

bool myCompare(int val1 , int val2){
	return val1 > val2;
}

void test01(){
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    print_list(l1);

    l1.reverse();
    print_list(l1);
    
    l1.sort();
    print_list(l1);
    
    l1.sort(myCompare);
    print_list(l1);
}


int main(){
    test01();
    return 0;
}