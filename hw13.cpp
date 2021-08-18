//影片P78
//內存四區

#include <iostream>
using namespace std;
int a=100; //global
int b;     //BSS(block started by symbol)

int main(){
    int * c = new int(10);    //用stack空間的pointer去指heap的空間
    static int d = 100;
    int e = 100;
    cout << "global\t" << (long)&a << endl;
    cout << "BSS\t" << (long)&b << endl;
    cout << "heap\t" << (long)c << endl;
    cout << "static\t" << (long)&d << endl;
    cout << "stack\t" << (long)&e << endl;

    
    return 0;
}