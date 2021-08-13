//影片P92
//引用做函數傳遞返回值

#include <iostream>
using namespace std;

// //返回局部變量引用
// int& test01() {
// 	int a = 10; //局部變量
// 	return a;
// }

//返回靜態變量引用
int& test02() {
	static int a = 20; //at global/static segment
	return a;
}

int main() {

	// //不能返回局部變量的引用
	// int& ref = test01();
	// cout << "ref = " << ref << endl;
	// cout << "ref = " << ref << endl;

	//如果函數做左值，那麽必須返回引用
	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	// test02() = 1000;

	// cout << "ref2 = " << ref2 << endl;
	// cout << "ref2 = " << ref2 << endl;
	return 0;
}