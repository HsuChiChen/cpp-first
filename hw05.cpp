//影片P48
//二維數組數組名

#include <iostream>
using namespace std;

int main() {
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二維數組大小： " << sizeof(arr) << endl;
	cout << "二維數組一行大小： " << sizeof(arr[0]) << endl;
	cout << "二維數組元素大小： " << sizeof(arr[0][0]) << endl;

	cout << "二維數組行數： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二維數組列數： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//地址
	cout << "二維數組首地址：" << arr << endl;
	cout << "二維數組第一行地址：" << arr[0] << endl;
	cout << "二維數組第二行地址：" << arr[1] << endl;

	cout << "二維數組第一個元素地址：" << &arr[0][0] << endl;
	cout << "二維數組第二個元素地址：" << &arr[0][1] << endl;
	return 0;
}