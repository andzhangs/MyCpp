#include <iostream>
#include <iomanip>

//
// Created by zhangshuai on 2020/12/15.
// Email：zhangshuai@dushu.io
// 数组

using namespace std;
using std::setw;

void ArrayMainCpp() {
    //n说一个包含10个整数的数组
    int n[10];
    //初始化数组元素
    int i, len = 10;
    for (i = 0; i < len; i++) {
        //设置元素i为i+100
        n[i] = i + 100;
    }
    cout << "Element：" << setw(13) << "Value" << endl;

    //输出数组的每个元素的值
    for (i = 0; i < len; i++) {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }

    printf("<iomanip>\n");
    cout << setiosflags(ios::left | ios::showpoint);  // 设左对齐，以一般实数方式显示
    cout.precision(5);       // 设置除小数点外有五位有效数字
    cout << 123.456789 << endl;
    cout.width(10);          // 设置显示域宽10
    cout.fill('*');          // 在显示区域空白处用*填充
    cout << resetiosflags(ios::left);  // 清除状态左对齐
    cout << setiosflags(ios::right);   // 设置右对齐
    cout << 123.456789 << endl;
    cout << setiosflags(ios::left | ios::fixed);    // 设左对齐，以固定小数位显示
    cout.precision(3);    // 设置实数显示三位小数
    cout << 999.123456 << endl;
    cout << resetiosflags(ios::left | ios::fixed);  //清除状态左对齐和定点格式
    cout << setiosflags(ios::left | ios::scientific);    //设置左对齐，以科学技术法显示
    cout.precision(3);   //设置保留三位小数
    cout << 123.45678 << endl;
    printf("\n");
}
