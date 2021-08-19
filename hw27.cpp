#include <iostream>
#include <string>
using namespace std;

class building;
class dude{
public:
    dude();
    ~dude();
    void visit();  //讓visit函數可以訪問building中私有成員
    void visit2(); //讓visit2函數不可以訪問building中私有成員
    building *m_building;
};

class building{
    // dude類中的visit成員函數 是Building好朋友，可以訪問私有內容
    friend void dude::visit(); 
public:
    string sitting_room;
    building();
private:
    string bedroom;
};

//類外實現成員函數
building::building(){
    sitting_room = "sitting room";
    bedroom = "bedroom";
}

dude::dude(){
    m_building = new building;
}

dude::~dude(){
    delete m_building;
}

void dude::visit(){
    cout << "visit函數正在訪問: " << m_building->sitting_room << endl;
    cout << "visit函數正在訪問: " << m_building->bedroom << endl;
}

void dude::visit2(){
    cout << "visit函數正在訪問: " << m_building->sitting_room << endl;
//    cout << "visit函數正在訪問: " << m_building->bedroom << endl;
}

void test01(){
    dude mary;
    mary.visit();
}

int main(){
    test01();
    return 0;
}