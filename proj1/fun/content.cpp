#include "../include/content.h"

content::content(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //讀文件
	//1. 文件不存在
	if(!ifs.is_open()){ //bool is_open();
		cout << "file isn't exist" << endl;
		this->emp_num = 0;
		this->emp_arr = 0;
		this->file_is_emp = true; //初始化文件是否為空
		ifs.close();
		return;
	}

	//2.文件存在數據為空
	// char ch;
	// if (!(ifs >> ch))
	// {
	// 	cout << "empty file" << endl;
	// 	this->emp_num = 0;
	// 	this->emp_arr = 0;
	// 	this->file_is_emp = true; //初始化文件是否為空
	// 	ifs.close();
	// 	return;
	// }
	char ch;
	ifs >> ch; //先去讀一個字符
	if(ifs.eof()){ //該字符為EOF
		cout << "empty file" << endl;
		this->emp_num = 0;
		this->emp_arr = 0;
		this->file_is_emp = true; //初始化文件是否為空
		ifs.close();
		return;
	}

	//3.文件存在並且紀錄數據
	int num = this->get_emp_num();
	cout << "職工人數為" << num << endl;
	this->emp_num = num;

	// //初始化屬性
	// this->emp_num = 0;
	// this->emp_arr = NULL;
}

void content::show_menu(){
	cout << "********************************************" << endl;
	cout << "*********  歡迎使用職工管理系統！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加職工信息  *************" << endl;
	cout << "*************  2.顯示職工信息  *************" << endl;
	cout << "*************  3.刪除離職職工  *************" << endl;
	cout << "*************  4.修改職工信息  *************" << endl;
	cout << "*************  5.查找職工信息  *************" << endl;
	cout << "*************  6.按照編號排序  *************" << endl;
	cout << "*************  7.清空所有文檔  *************" << endl;
	cout << "********************************************" << endl;
    cout << endl;
}

void content::exit_system(){
	cout << "歡迎下次再使用" << endl;
	system("clear");
	exit(0);
	//無論是哪個函數包含了該調用，都將導致程序停止
	//需包含 #include<cstdlib>
}

void content::add_emp(){
	cout << "請輸入添加職工數量" << endl;
	int add_num = 0;
	cin >> add_num; //用戶輸入數量
	if(add_num > 0){
		//計算添加新空間大小
		int new_size = this->emp_num + add_num; //新空間人數 = 原來+新增
	
		//開闢新空間
		worker **new_space = new worker*[new_size];
	
		//將原來空間下數據，拷貝到新空間下
		if(this->emp_arr !=NULL){
			for(int i=0; i<this->emp_num; i++)
				new_space[i] = this->emp_arr[i];
		}

		//添加一個新數據
		for(int i=0; i<add_num; i++){
			int id;
			string name;
			int dep_select;
			cout << "請輸入第 " << i+1 << " 個新職工編號" << endl;
			cin >> id;
			cout << "請輸入第 " << i+1 << " 個新職工姓名" << endl;
			cin >> name;
			cout << "請選擇該職工崗位" << endl;
			cout << "1. 普通職工" << endl;
			cout << "2. 經理" << endl;
			cout << "3. 老闆" << endl;
			cin >> dep_select;
		
			worker *worker = NULL; 
			switch(dep_select){
				case 1:
					worker = new employee(id, name, 1);
					break;
				case 2:
					worker = new manager(id, name, 2);
					break;
				case 3:
					worker = new boss(id, name, 3);
					break;
				default:
					cout << "非法輸入" << endl;
			}

			//將創建職工職責，保存到數組
			new_space[this->emp_num + i] = worker; //從emp_num繼續加
		}
		//釋放原有空間
		delete [] this->emp_arr;

		//更改新空間的指向
		this->emp_arr = new_space;

		//更新新的職工人數
		this->emp_num = new_size;
		system("clear");

		//更新職工不為空標誌
		this->file_is_emp = false;

		//保存數據到文件中
		this->save();

		//提示添加成功
		cout << "成功添加" << add_num << "名新職工" << endl;
	
	}
	else{
		cout << "輸入數據有誤" << endl;
	}
}

void content::save(){ //保存文件
	ofstream ofs;
	ofs.open(FILENAME, ios::out); //用輸出的方式來打開文件 - 寫文件

	//將每個人的數據寫入
	for(int i=0; i<this->emp_num; i++){
		ofs << this->emp_arr[i]->id << " "
			<< this->emp_arr[i]->name << " "
			<< this->emp_arr[i]->dep_id << endl;
	}

	//關閉文件
	ofs.close();
}

int content::get_emp_num(){ //統計文件中的人數
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //打開文件，模式:讀

	int id;
	string name;
	int dep_id;
	int num = 0;

	//因為>>會忽略空格，所以是依序讀取，讀取到則為1
	while(ifs >> id && ifs >> name && ifs >> dep_id){
		num++; //統計人數變量
	}
	return num;
}

content::~content(){ //把heap區釋放乾淨
	if(this->emp_arr != NULL){
		delete 	[] this->emp_arr;
		this->emp_arr = NULL;
	}
}