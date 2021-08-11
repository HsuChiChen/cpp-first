//影片P64 65
//結構體定義 數組
//中文字Big5編碼占3個bytes 英文占1個byte
//中文全形(3 bytes) != 2個英文半形(2 bytes)

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//結構體定義
struct student{
	//成員列表
	string name;  //姓名
	int age;      //年齡
	int score;    //分數
}stu3,stu4; //結構體變量創建方式3

int main() {
	//結構體變量創建方式1
	struct student stu1; //struct 關鍵字可以省略(for C++)

	stu1.name = "張三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名：" << left << setw(9) << stu1.name << " 年齡：" << stu1.age  << " 分數：" << stu1.score << endl;

	//結構體變量創建方式2
	struct student stu2 = { "李四",19,60 };

	cout << "姓名：" << left << setw(9) << stu2.name << " 年齡：" << stu2.age  << " 分數：" << stu2.score << endl;


	stu3.name = "王小名";
	stu3.age = 18;
	stu3.score = 70;

	stu4.name = "陳六";
	stu4.age = 20;
	stu4.score = 20;

	//結構體變量創建-數組
	struct student arr[3]=
	{
		{"apple",18,80 },
		{"papaya",19,60 },
		{"mango",20,70 }
	};

	cout << "姓名：" << left << setw(10) << stu3.name << " 年齡：" << stu3.age  << " 分數：" << stu3.score << endl;
	cout << "姓名：" << left << setw(9) << stu4.name << " 年齡：" << stu4.age  << " 分數：" << stu4.score << endl;
	for(int i=0; i<3; i++)
		cout << "姓名：" << left << setw(7) << arr[i].name << " 年齡：" << arr[i].age  << " 分數：" << arr[i].score << endl;
	
	return 0;
}