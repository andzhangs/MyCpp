#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/22. 
// Email：zhangshuai@dushu.io
// 多态

/**
 * 虚函数 是在基类中使用关键字 virtual 声明的函数。
 * 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数
 */

/**
 * 纯虚函数 想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，
 * 但是您在基类中又不能对虚函数给出有意义的实现。
 *
 * 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类
 * 纯虚函数是通过在声明中使用 "= 0" 来指定的
 */

class Person {
protected :
    int A, B;
public:
    Person(int a, int b) {
        printf("init Person\n");
        this->A = a;
        this->B = b;
    }

    virtual int toResult() {
        int result = this->A + this->B;
        printf("Person打印：%d\n", result);
        return result;
    }
    //纯虚函数
//    virtual int toResult()=0;
};

class Man : public Person {
public:
    Man(int a = 0, int b = 0) : Person(a, b) {
        printf("init Man\n");
    }

    int toResult() {
        int result = (this->A + this->B) / 2;
        printf("Man打印：%d\n", result);
        return result;
    }

//    int toResult() override {
//        return 0;
//    }
};

class Woman : public Person {
public:
    Woman(int a = 0, int b = 0) : Person(a, b) {
        printf("init Woman\n");
    }

    int toResult() {
        int result = (this->A * this->B) / 2;
        printf("Woman打印：%d\n", result);
        return result;
    }
};

//主函数
void PolymorphicMainCpp() {
    Person *person;
    Man man(10, 7);
    Woman woman(10, 5);
    person = &man;
    person->toResult();

    person = &woman;
    person->toResult();

    printf("\n");
}