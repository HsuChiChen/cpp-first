//影片P139
//多態案例 : 製作飲品

#include <iostream>
using namespace std;

class drinking{
public:
    virtual void boil() = 0;
    virtual void brew() = 0;
    virtual void pour() = 0;
    virtual void something() = 0;
    void make_drink(){
        boil();
        brew();
        pour();
        something();
    }
};

class coffee :public drinking{
public:
    virtual void boil(){
        cout << "1-1" << endl;
    }
    virtual void brew(){
        cout << "1-2" << endl;
    }
    virtual void pour(){
        cout << "1-3" << endl;
    }
    virtual void something(){
        cout << "1-4" << endl;
    }
};

class tea :public drinking{
public:
    virtual void boil(){
        cout << "2-1" << endl;
    }
    virtual void brew(){
        cout << "2-2" << endl;
    }
    virtual void pour(){
        cout << "2-3" << endl;
    }
    virtual void something(){
        cout << "2-4" << endl;
    }
};

void do_work(drinking *abs){ //drinking *abs = new coffee
    abs->make_drink();
    delete abs; //avoid mem leak
}


void test01(){
    do_work(new coffee);
    do_work(new tea);
}


int main(){
    test01();
    return 0;
}