//影片P135
//多態
#include <iostream>
using namespace std;

class animal{
public:
    virtual void speak(){ //父類虛函數必須要有virtual關鍵字
        cout << "animal is speaking" << endl;
    }
};

class cat :public animal{
public:
    void speak(){ //子類有沒有virtual關鍵字都可以，寫不寫virtual編譯器都會為其自動添加一個virtual
        cout << "cat is speaking" << endl;
    }
};

//地址早綁定，在編譯階段確定函數地址
//如果想執行讓貓說話，那麼這個函數地址就不能提前綁定，需要在運行階段進行綁定
void do_speak(animal &animal){ //animal &animal = cat 父類引用指向子類對象
    animal.speak();
}

void test01(){
    cout << sizeof(animal) << endl;
}

int main(){
    test01();
    return 0;
}