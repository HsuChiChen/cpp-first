//影片P38
//乘法口訣表

#include <iostream>
using namespace std;

int main(){
    for(int row=1; row<=9; row++){
        for(int col=1; col<=row; col++)
            cout << col << "*" << row << "=" << col*row<< "\t"; ///t水平製表空8格
        cout << endl;
    }
    return 0;
}