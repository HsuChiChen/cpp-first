// 水仙花數 (Narcissistic number)
// 案例描述:水仙花數是指一個3位數，它的每個位上的數字的3次冪之和等於它本身
// 例如：1^3 + 5^3+ 3^3 = 153

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    int num = 100;
    do{
        a = num % 10; //個位數
        b = num / 10 % 10; //十位數
        c = num / 100;
        if(pow(a,3) + pow(b,3) + pow(c,3) == num)
            cout << num << endl;
        num++;
    }
    while(num < 1000);

    return 0;
}