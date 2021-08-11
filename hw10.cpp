//影片P70
//結構體實作1

#include <iostream>
#include <string>
using namespace std;

struct Student{
	string name;
	int score;
};
struct Teacher{
	string name;
	Student sArray[5];
};

void allocateSpace(Teacher tArray[] , int len){
	string tName = "教師";
	string sName = "學生";
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++){
		tArray[i].name = tName + nameSeed[i];
		
		for (int j = 0; j < 5; j++){
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeachers(Teacher tArray[], int len){
	for (int i = 0; i < len; i++){
		cout << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分數：" << tArray[i].sArray[j].score << endl;
	}
}

int main() {
	srand(time(NULL)); //隨機數種子 頭文件 #include <ctime>
	Teacher tArray[3]; //老師數組
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len); //創建數據
	printTeachers(tArray, len); //打印數據
	return 0;
}