#include "../include/circle.h"

void circle::setR(int r){
    m_r = r;
}

int circle::getR(){
    return m_r;
}

void circle::setcircle(point center){
    m_center = center;
}

point circle::getcenter(){
    return m_center;
}
