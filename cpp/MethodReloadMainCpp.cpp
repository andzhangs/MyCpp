#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/22. 
// Email：zhangshuai@dushu.io
// C++ 函数重载/运算符重载

/**
 * 运算符重载: 函数名是由关键字 operator 和其后要重载的运算符符号构成的,返回类型和一个参数列表。
 */

class PrintData {
public:
    // 重载 + 运算符，用于把两个 Box 对象相加
    PrintData operator+(const PrintData &pd) {
        PrintData printData;
        printData.length = this->length + pd.length;
        printData.width = this->width + pd.width;
        printData.height = this->height + pd.height;
        return printData;
    }

    int getWidth() const {
        return width;
    }

    void setWidth(int width) {
        PrintData::width = width;
    }

    int getHeight() const {
        return height;
    }

    void setHeight(int height) {
        PrintData::height = height;
    }

    int getLength() const {
        return length;
    }

    void setLength(int length) {
        PrintData::length = length;
    }

    void print(int i) {
        cout << "整数为：" << i << endl;
    }

    void print(double d) {
        printf("浮点数为：%lf\n", d);
        printf("浮点数为：%.2lf\n", d);
        printf("浮点数为：%e\n", d);
        printf("浮点数为：%g\n", d);
    }

    void print(char c[]) {
        cout << "字符串为：" << c << endl;
    }


private:
    int width;
    int height;
    int length;
};

//主函数
void MethodReloadMainCpp() {
    PrintData printData;
    printData.print(10);
    printData.print(20.00);
    char c[] = "I am from MethodReload!";
    printData.print(c);

    PrintData pd1, pd2, pd3;
    pd1.setWidth(3);
    pd1.setHeight(4);
    pd1.setLength(5);

    pd2.setWidth(6);
    pd2.setHeight(8);
    pd2.setLength(10);

    //把两个对象相加
    pd3 = pd1 + pd2;
    printf("长为：%d\t,", pd3.getLength());
    printf("宽为：%d\t,", pd3.getWidth());
    printf("高为：%d\n", pd3.getHeight());

    printf("\n");
}
