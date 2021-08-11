//影片P71
//結構體實作2

#include <iostream>
#include <string>
using namespace std;

struct hero{
    string name;
    int age;
    string sex;
};

void bubblesort(struct hero heroarr[], int len){
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-i-1; i++){
            if(heroarr[j].age > heroarr[j+1].age){
                struct hero temp = heroarr[j];
                heroarr[j] = heroarr[j+1];
                heroarr[j+1] = temp;
            }
        }
    }
}

void printhero(const struct hero heroarr[], int len){
    for(int i=0; i<len; i++){
        cout << " 姓名: " << heroarr[i].name << 
                " 年齡: " << heroarr[i].age << 
                " 性別: " << heroarr[i].sex << endl; 
    }
}


int main(){
    struct hero heroarr[5]={
        {"劉備",23,"男"},
		{"關羽",22,"男"},
		{"張飛",20,"男"},
		{"趙雲",21,"男"},
		{"貂蟬",19,"女"},
    };
    
    int len = sizeof(heroarr) / sizeof(heroarr[0]);
    bubblesort(heroarr,len);
    printhero(heroarr,len);
    return 0;
}