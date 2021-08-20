//影片P120
//friend function

#include <iostream>
#include <string>
using namespace std;

class building; //前置聲明
class dude{
public:
    dude();
    ~dude();
    void visit();
    building *m_building;
};

class building{
//dude類是building的好朋友，可以訪問本類中的私有成員
friend class dude;
public:
    building();
    string sitting_room;
private:
    string bedroom;
};

//類外寫成員函數
building::building(){
    sitting_room = "sitting_room";
    bedroom = "bedroom";
}

dude::dude(){
    m_building = new building;
}

dude::~dude(){
    delete m_building;
    m_building = NULL; //防止野指針出現
}

void dude::visit(){
    cout << "dude is visiting : " << m_building->sitting_room << endl;
    cout << "dude is visiting : " << m_building->bedroom << endl;
}

void test01(){
    dude mary;
    mary.visit();
}

int main(){
    test01();
}