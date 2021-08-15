//影片P104
//練習案例1：設計立方體類

#include <iostream>
using namespace std;

class cube{
public:
    //set and get L, W, H
    void setL(int l){
        m_l = l;
    }

    int getL(){
        return m_l;
    }

    void setW(int w){
        m_w = w;
    }

    int getW(){
        return m_w;
    }

    void setH(int h){
        m_h = h;
    }

    int getH(){
        return m_h;
    }

    int calculateS(){
        return 2*m_l*m_w + 2*m_w*m_h + 2*m_l*m_h;
    }

    int calculateV(){
        return m_l*m_h*m_h;
    }

    bool samebyclass(cube &c){
        if(m_l == c.getL() && m_w == c.getW() && m_h == c.getH())
            return true;
        return false;
    }


private:
    int m_l;
    int m_w;
    int m_h;

};


bool same(cube& c1, cube& c2){ //用引用的方式淺拷貝
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
        return true;
    else
        return false;
}

int main(){
    cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(15);
    
    //利用全局函數
    bool ret = same(c1,c2);
    if(ret)
        cout << "c1和c2是相等" << endl;
    else
        cout << "c1和c2是不相等" << endl;

    //利用成員函數
    bool ret2 = c1.samebyclass(c2);
    if(ret2)
        cout << "c1和c2是相等" << endl;
    else
        cout << "c1和c2是不相等" << endl;

    cout << c1.calculateS() << endl;
    cout << c1.calculateV() << endl;

    return 0;
}