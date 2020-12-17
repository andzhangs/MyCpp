#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/15. 
// Email：zhangshuai@dushu.io
// 类和对象
/**
 * 拷贝构造函数：在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
 * 拷贝构造函数通常用于：通过使用另一个同类型的对象来初始化新创建的对象。
 *                   复制对象，把它作为参数传递给函数。
 *                   复制对象，并从函数返回这个对象。
 */

/**
 * 友元函数：类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
 * 尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数
 * 友元类---在这种情况下，整个类及其所有成员都是友元
 */

class Line {
    int res;
public:
    int x;
    int y;
    int z;

    friend class Line2;   //友元类
    friend void printRes(Line line); //友元函数

    int getResult(void) {
        return res;
    }

    void setParams(int xInt, int yInt, int zInt) {
        x = xInt;
        y = yInt;
        z = zInt;
        res = x * y * z;
    }
};

class Line2 {
};

void printRes(Line line) {
    /* 因为 printRes() 是 Line 的友元，它可以直接访问该类的任何成员 */
    cout << "res of line : " << line.res << endl;
}

void ClassAndObject() {
    Line line1, line2;
    //用于存储的体积
    int result = 0;

    line1.x = 5;
    line1.y = 6;
    line1.z = 7;

    line2.x = 10;
    line2.y = 13;
    line2.z = 13;

    //box1 的体积
    result = line1.x * line1.y * line1.z;
    cout << "box1的体积：" << result << endl;
    printf("结果 = %d\n", result);

    //box2的体积
    line2.setParams(5, 5, 5);
    result = line2.getResult();
    cout << "box2的体积：" << result << endl;

    printf("\n");
}

/**
 *                              分割线
 * ---------------------------------------------------------------
 * 描述：
 * ---------------------------------------------------------------
 */
class Box {
public:
    Box(int len);          //构造函数
    ~Box();         //析构函数，会在每次删除所创建的对象时执行
    Box(const Box &obj);      // 拷贝构造函数
    double length;  //长度
    double breadth; //宽度
    double height;  //高度
    int getLength(void);

    double get(void);   //成员函数声明
    void set(double len, double bre, double hei);

    int min = getMin(5, 10);
    int max = getMax(5, 10);

private:
    int *ptr;

    int getMin(int x, int y) {
        return x + y;
    }

    int getMax(int x, int y) {
        return x * y;
    }
};

//成员函数定义、构造函数、析构函数、拷贝函数
Box::Box(int len) {
    cout << "这里是Box构造函数" << endl;
    ptr = new int;
    *ptr = len;
}

Box::Box(const Box &obj) {
    cout << "调用Box拷贝构造函数,并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; //拷贝值
}

double Box::get(void) {
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei) {
    length = len;
    breadth = bre;
    height = hei;
}

int Box::getLength(void) {
    return *ptr;
}

void display(Box obj) {
    cout << "长度：" << obj.getLength() << endl;
}

Box::~Box() {
    cout << "这里是Box析构函数：释放内存" << endl;
    delete ptr;
}


/**
 * 主函数
 */
void ClassAndObjectMainCpp() {
    ClassAndObject();

    Box box(10);
    display(box);
    Box box2 = box; //通过使用已有的同类型的对象来初始化新创建的对象
    display(box2);

    printf("\n");

    Line line;
    //使用友元函数设置值
    line.setParams(10, 10, 10);
    //使用友元函数输出值
    printRes(line);
}



