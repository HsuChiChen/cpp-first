#pragma once //防止頭文件重複包含

#include <iostream>
#include "point.h" //用到point類
using namespace std;

class circle{
public:
    void setR(int r);
    int getR();
    void setcircle(point center);
    point getcenter();
private:
    int m_r;
    point m_center;
};