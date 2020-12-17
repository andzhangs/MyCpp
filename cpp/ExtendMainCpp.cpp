#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/17. 
// Email：zhangshuai@dushu.io
// 继承
/**
 * 一个派生类继承了所有的基类方法，但下列情况除外：
 *  1、基类的构造函数、析构函数和拷贝构造函数。
 *  2、基类的重载运算符。
 *  3、基类的友元函数。
 */

//基类
class Shape {
protected:
    int width;
    int height;
public:
    void setWidth(int w) {
        this->width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

//派生类
class PaintCost {
public:
    int getCost(int area) {
        return area * 10;
    }
};

class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return width * height;
    }
};

//主函数
void ExtendMainCpp() {
    Rectangle rectangle;
    rectangle.setWidth(3);
    rectangle.setHeight(4);
    int area = rectangle.getArea();
    // 输出对象的面积
    cout << "Total area: " << area << endl;
    cout << "PointCost: " << rectangle.getCost(area) << endl;
}
