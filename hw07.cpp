#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int * p = (int *)0x1100;

	cout << *p << endl; //* 解引用

	return 0;
}