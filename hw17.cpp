//影片P105
//練習案例2：判斷點和圓的關係

#include <iostream>
#include <cmath>
#include "include/circle.h"
#include "include/point.h"
using namespace std;

// class point{
// public:
//     void setX(int x){
//         m_x = x;
//     }
//     int getX(){
//         return m_x;
//     }

//     void setY(int y){
//         m_y = y;
//     }
//     int getY(){
//         return m_y;
//     }
// private:
//     int m_x;
//     int m_y;
// };

// class circle{
// public:
//     void setR(int r){
//         m_r = r;
//     }

//     int getR(){
//         return m_r;
//     }

//     void setcircle(point center){
//         m_center = center;
//     }

//     point getcenter(){
//         return m_center;
//     }

// private:
//     int m_r;
//     point m_center;
// };

void iscircle(circle &c, point &p){
    int distance = pow((c.getcenter().getX() - p.getX()),2)
                  +pow((c.getcenter().getY() - p.getY()),2);

    int r_distance = pow(c.getR(), 2); //圓半徑

    if(distance == r_distance)
        cout << "點在圓上" << endl;
    else if(distance < r_distance)
        cout << "點在圓內" << endl;
    else
        cout << "點在圓外" << endl;
}

int main(){
    //創建圓
    circle c;
    c.setR(10);

    point center;
    center.setX(10);
    center.setY(0);
    c.setcircle(center);

    //創建點
    point p;
    p.setX(10);
    p.setY(10);

    iscircle(c,p);
    return 0;
}




