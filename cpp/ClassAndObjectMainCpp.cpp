#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/15. 
// Email：zhangshuai@dushu.io
// 类和对象

class Box {
public:
    double length;  //长度
    double breadth; //宽度
    double height;  //高度
    //体积
    double getVolume(void) {
        return height * length * breadth;
    }

private:
    int min = getMin(5, 10);
    int max = getMax(5, 10);;

    int getMin(int x, int y) {
        return x + y;
    }

    int getMax(int x, int y) {
        return x * y;
    }
};

void ClassAndObjectMainCpp() {
    Box box1, box2;
    //用于存储的体积
    double volume = 0.0;

    box1.height = 5.0;
    box1.length = 6.0;
    box1.breadth = 7.0;

    box2.height = 10.0;
    box2.length = 13.0;
    box2.breadth = 13.0;

    //box1 的体积
//    volume = box1.getVolume();
    volume = box1.height * box1.length;
    cout << "box1的体积：" << volume << endl;
    printf("结果 = %.2lf\n", volume);

    volume = box2.getVolume();
    cout << "box2的体积：" << volume << endl;

}

