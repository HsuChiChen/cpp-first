#pragma once //防止頭文件重複包含

#include <iostream>
using namespace std;


class point{
public:
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
private:
    int m_x;
    int m_y;
};