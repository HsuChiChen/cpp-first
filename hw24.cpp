//影片P116
//空指針訪問成員函數

#include <iostream>
using namespace std;

class Person {
public:
	void ShowClassName() {
		cout << "我是Person類" << endl;
	}

	void ShowPerson() {
		if (this == NULL) {
			return;
		}
		cout << m_age << endl;
        //在屬性前面都默認一個this指針，即this->m_age
        //錯誤的原因是因為傳入的是指針是NULL
	}
public:
	int m_age;
};

void test01()
{
	Person * p = NULL;
	p->ShowClassName(); //空指針，可以調用成員函數
	p->ShowPerson();  //但是如果成員函數中用到了this指針，就不可以了
}

int main() {
	test01();
	return 0;
}