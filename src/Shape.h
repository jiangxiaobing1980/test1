#ifndef SHAPE_H
#define SHAPE_H

#pragma once

class Shape
{
public:
    Shape();
    ~Shape();

public:
    void setlenth(int lenth){m_lenth = lenth;};
    int  getlenth(){return m_lenth;};
private:
    int m_lenth;
    int m_width;
    int m_high;

};

#endif