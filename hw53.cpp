//影片P203
//vector預留空間
#include <iostream>
#include <vector>
using namespace std;

void print_vec(const vector<int>&v){ //加const 需要修改疊代器為const_iterator
    for(vector<int>::const_iterator it=v.begin(); it!=v.end(); it++)
        cout << *it << " ";
    cout << "\n";
}


void test01(){
    vector<int>v1;
    
    //利用reserve預留空間
    v1.reserve(1000000);

    int num = 0; //統計內存開闢次數
    int *p = NULL;
    for(int i=0; i<1000000; i++){
        v1.push_back(i);
        if(p != &v1[0]){
            p = &v1[0];
            num++;
        }
    }
    cout << "num = " << num << endl;
    
}

int main(){
    test01();
    return 0;
}