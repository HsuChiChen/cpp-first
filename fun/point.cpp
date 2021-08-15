#include "../include/point.h" 
//留下函數實現，因為屬於成員函數需加作用域point::

void point::setX(int x){
    m_x = x;
}
int point::getX(){
    return m_x;
}

void point::setY(int y){
    m_y = y;
}
int point::getY(){
    return m_y;
}