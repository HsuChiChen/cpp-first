//影片P63
//Pass by Value

#include <iostream>
using namespace std;

//值傳遞
void swap1(int a ,int b){
	int temp = a;
	a = b; 
	b = temp;
}
//地址傳遞
void swap2(int * p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	int a = 10;
	int b = 20;
	swap1(a, b); // 值傳遞不會改變實參
	swap2(&a, &b); //地址傳遞會改變實參
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}