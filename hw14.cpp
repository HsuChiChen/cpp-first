#include <iostream>
using namespace std;

int* fun(){
    int* a = new int(10);
    return a;
}

int main(){
    int * p =fun();
    cout << *p << endl;
    delete p;
    cout << *p << endl;
}