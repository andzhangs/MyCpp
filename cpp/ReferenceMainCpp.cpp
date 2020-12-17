#include <iostream>
//
// Created by zhangshuai on 2020/12/15. 
// Email：zhangshuai@dushu.io
// C++引用
//引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
// 一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

using namespace std;

void ReferenceMainCpp() {
    // 声明简单的变量
    int i = 5;
    double d;

    // 声明引用变量
    int &r = i;
    double &s = d;

    cout << "Value of i : " << i << endl;
    cout << "Value of i reference r : " << r << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference s : " << s << "\n" << endl;
}