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
	char ch;
	if (!(ifs >> ch)) //是否順利讀到字符
	{
		cout << "empty file" << endl;
		this->emp_num = 0;
		this->emp_arr = 0;
		this->file_is_emp = true; //初始化文件是否為空
		ifs.close();
		return;
	}
	// char ch;
	// ifs >> ch; //先去讀一個字符
	// if(ifs.eof()){ //該字符為EOF
	// 	cout << "empty file" << endl;
	// 	this->emp_num = 0;
	// 	this->emp_arr = 0;
	// 	this->file_is_emp = true; //初始化文件是否為空
	// 	ifs.close();
	// 	return;
	// }

	//3.文件存在並且紀錄數據
	int num = this->get_emp_num(); //讀取有幾個人
	// cout << "職工人數為" << num << endl;
	this->emp_num = num;
	this->emp_arr = new worker*[this->emp_num]; //開闢數組到heap
	this->init_emp(); //將文件中的數據存到數組中

	// for(int i; i<this->emp_num; i++){
	// 	cout << this->emp_arr[i]->id << " "
	// 		 << this->emp_arr[i]->name << " "
	// 		 << this->emp_arr[i]->dep_id << endl; 
	// }

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
			int dep_select = -1;
			cout << "請輸入第 " << i+1 << " 個新職工編號" << endl;
			cin >> id;
			while(this->is_exist(id) != -1){ //不存在->-1
				cout << "該編號已存在資料庫，請重新輸入:" << endl;
				cin >> id;
			}
			cout << "請輸入第 " << i+1 << " 個新職工姓名" << endl;
			cin >> name;
			cout << "請選擇該職工崗位" << endl;
			cout << "1. 普通職工" << endl;
			cout << "2. 經理" << endl;
			cout << "3. 老闆" << endl;

			worker *worker = NULL;
			while(dep_select != 1 && dep_select != 2 && dep_select != 3){
				cin >> dep_select;
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
					cout << "格式有誤，請重新輸入" << endl;
				}
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

//保存文件
void content::save(){
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

//統計文件中的人數
int content::get_emp_num(){ 
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

//初始化員工
void content::init_emp(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dep_id;
	int index = 0;

	while(ifs >> id && ifs >> name && ifs >> dep_id){
		worker *worker = NULL;
		if(dep_id == 1){ //普通職工
			worker = new employee(id, name, dep_id);
		}
		else if(dep_id == 2){ //經理
			worker = new manager(id, name, dep_id);
		}
		else{ //老闆
			worker = new boss(id, name, dep_id);
		}
		this->emp_arr[index++] = worker;
	}
	ifs.close(); //關閉文件
}

//顯示職工
void content::show_emp(){
	//判斷文件是否為空
	if(this->file_is_emp){
		cout << "文件不存在或記錄為空!" << endl;
	}
	else{
		for(int i=0; i<emp_num; i++){
			//利用多態調用程序接口
			this->emp_arr[i]->show_info();
		}
	}
}

//刪除職工，會造成mem leak
void content::delete_emp(){
	if(this->file_is_emp){
		cout << "文件不存在或紀錄為空" << endl;
	}
	else{
		//按照職工編號刪除
		cout << "請輸入想要刪除職工編號:" << endl;
		int id = 0;
		cin >> id;
		int index = this->is_exist(id);

		if(index != -1){ //說明職工存在並且要刪除index位置上的職工
			for(int i=index; i<this->emp_num-1; i++){
				this->emp_arr[i] = this->emp_arr[i+1]; //數據前移 
			}
			this->emp_num--; //更新數組中紀錄人員個數
			this->save(); //數據同步更新到文件中
			cout << "刪除成功!" << endl;
		}
		else{
			cout << "刪除失敗，未找到該職工" << endl;
		}
	}
}

//判斷職工是否存在 存在->返回數組位置；不存在->-1
int content::is_exist(int id){
	int index = -1;
	for(int i=0; i<this->emp_num; i++){
		//遍歷數組
		if(this->emp_arr[i]->id == id){ //(*worker).id
			//找到職工
			index = i;
			break;
		}
	}
	return index;
}

//修改職工
void content::mod_emp(){
	if(this->file_is_emp){
		cout << "文件不存在或紀錄為空" << endl;
	}
	else{
		cout << "請輸入修改職工的編號" << endl;
		int id;
		cin >> id;
		int ret = this->is_exist(id);
		if(ret != -1){
			//找到該職工
			delete this->emp_arr[ret];
			int new_id = 0;
			string new_name = "";
			int new_dep_id = 0;
			cout << "查到: " << id << "號職工，請輸入新職工號:" << endl;
			cin >> new_id;
			while(this->is_exist(new_id) != -1){ //不存在->-1
				cout << "該編號已存在資料庫，請重新輸入:" << endl;
				cin >> new_id;
			}
			cout << "請輸入新名字" << endl;
			cin >> new_name;
			cout << "請輸入新崗位" << endl;
			cout << "請選擇該職工崗位" << endl;
			cout << "1. 普通職工" << endl;
			cout << "2. 經理" << endl;
			cout << "3. 老闆" << endl;

			worker *worker = NULL;
			while(new_dep_id != 1 && new_dep_id != 2 && new_dep_id != 3){
				cin >> new_dep_id;
				switch(new_dep_id){
				case 1:
					worker = new employee(new_id, new_name, new_dep_id);
					break;
				case 2:
					worker = new manager(new_id, new_name, new_dep_id);
					break;
				case 3:
					worker = new boss(new_id, new_name, new_dep_id);
					break;
				default:
					cout << "格式有誤，請重新輸入" << endl;
				}
			}
			//更新數據到數組中
			this->emp_arr[ret] = worker;
			cout << "修改成功!" << endl;
			//保存到文件中
			this->save();
		}
		else{
			cout << "修改失敗，查無此人" << endl;
		}
	}
}

//查找職工
void content::find_emp(){
	if(this->file_is_emp){
		cout << "文件不存在或記錄為空" << endl;
	}
	else{
		cout << "請輸入查找的方法:" << endl;
		cout << "1. 按照職工編號查找" << endl;
		cout << "2. 按照職工的姓名查找" << endl;

		int select = 0;
		cin >> select;
		if(select == 1){
			//按照編號查
			int id;
			cout << "請輸入查找的職工編號" << endl;
			cin >> id;
			int ret = is_exist(id);
			if(ret != -1){
				//找到職工
				cout << "查找成功!該職工信息如下:" << endl;
				this->emp_arr[ret]->show_info();
			}
			else{
				cout << "查找失敗，查無此人" << endl;
			}

		}
		else if(select == 2){
			//按照姓名查
			string name;
			cout << "請輸入查找的姓名" << endl;
			cin >> name;

			//判斷是否查到的標示
			bool flag = false; //默認未找到

			for(int i=0; i<emp_num; i++){
				if(this->emp_arr[i]->name == name){
					cout << "查找成功，職工編號為: " << this->emp_arr[i]->id << " 號" << endl;
					cout << "信息如下: ";
					//調用顯示信息多態接口
					this->emp_arr[i]->show_info();
					flag = true;
				}
			}
			
			if(flag == false){
				cout << "查找失敗，查無此人!" << endl; 
			}
		}
		else{
			cout << "輸入選項有誤" << endl;
		}
	}
} 

//按照編號排序
void content::sort_emp(){
	if(this->file_is_emp){
		cout << "文件不存在或記錄為空" << endl;
	}
	else{
		cout << "請選擇排序方式" << endl;
		cout << "1. 按職工號進行升序" << endl;
		cout << "2. 按職工號進行降序" << endl;

		int select = 0;
		cin >> select;
		//selection sort
		for(int i=0; i<this->emp_num; i++){
			int min_max = i; //聲明最小值或最大值下標
			for(int j=i+1; j<this->emp_num; j++){
				
				if(select == 1){ //升序，抓max
					if(this->emp_arr[min_max]->id > this->emp_arr[j]->id){
						min_max = j;
					}
				}
				else{ //降序，抓min
					if(this->emp_arr[min_max]->id < this->emp_arr[j]->id){
						min_max = j;
					}
				}
			}
			
			//判斷一開始認定的最小值或最大值是不是計算計算的最小值或最大值
			//如果不是，則i與min_max交換數據
			if(i != min_max){
				worker *temp = this->emp_arr[i];
				this->emp_arr[i] = this->emp_arr[min_max];
				this->emp_arr[min_max] = temp;
			}
		}
		cout << "排序成功!排序後的結果為:" << endl;
		this->save(); //保存文件
		this->show_emp();
	}
}

//清空文件
void content::clean_file(){
	cout << "確定清空?刪除的數據無法回復!" << endl;
	cout << "1.確定" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;
	if(select == 1){
		//清空文件
		ofstream ofs(FILENAME, ios::trunc); //刪除文件後重新創建
		ofs.close();

		if(this->emp_arr != NULL){
			//刪除heap中每個職工對象
			for(int i=0; i<this->emp_num; i++){
				delete this->emp_arr[i];
				this->emp_arr[i] = NULL;
			}
			//刪除heap中指針數組
			delete [] this->emp_arr;
			this->emp_arr = NULL;
			this->emp_num = 0;
			this->file_is_emp = true;
		}
		cout << "清空成功!" << endl;
	}
}

//把heap區釋放乾淨
content::~content(){
	if(this->emp_arr != NULL){
		for(int i=0; i<this->emp_num; i++){
			if(this->emp_arr[i] != NULL){
				delete emp_arr[i];
			}
		}
		delete 	[] this->emp_arr;
		this->emp_arr = NULL;
	}
}