#include <iostream>
#include <fstream>

using namespace std;
//
// Created by zhangshuai on 2020/12/22. 
// Email：zhangshuai@dushu.io
// 文件和流
// 使用流提取运算符（ >> ）从文件读取信息
// istream 和 ostream 都提供了用于重新定位文件位置指针的成员函数
/**
 数据类型	    描述
ofstream  该数据类型表示输出文件流，用于创建文件并向文件写入信息。
ifstream  该数据类型表示输入文件流，用于从文件读取信息。
fstream	  该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。
 */
/**
 模式标志	    描述
ios::app	追加模式。所有写入都追加到文件末尾。
ios::ate	文件打开后定位到文件末尾。
ios::in	    打开文件用于读取。
ios::out	打开文件用于写入。
ios::trunc	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
 */




const char *filePath = "../file/Test.txt";

//以写入模式打开文件，并希望截断文件，以防文件已存在
void openFileByWrite() {
    ofstream outFile;
    outFile.open(filePath, ios::out | ios::trunc);
}

//打开一个文件用于读写
void openFileByReadWrite() {
    ifstream inputFile;
    inputFile.open(filePath, ios::out | ios_base::in);
}

void demos() {
    char data[100];

    //以写模式打开文件
    ofstream outFile;
    outFile.open(filePath);

    cout << "Writing to the file" << endl;
    cout << "Enter your name:";
    //从外部读取一行
    cin.getline(data, 100);

    //向文件写入用户的数据
    outFile << data << endl;

    cout << "Enter your age:";
    cin >> data;

    //函数会忽略掉之前读语句留下的多余字符
    cin.ignore();

    //再次向文件写入用户的数据
    outFile << data << endl;

    //关闭打开的文件
    outFile.close();

    //以读模式打开文件
    ifstream inputFile;
    inputFile.open(filePath);

    cout << "Reading from thr file：" << endl;
    inputFile >> data;

    //在屏幕上写入数据
    cout << data << endl;

    //再此从文件读取数据，并显示它
    inputFile >> data;
    cout << data << endl;

    //关闭打开的文件
    inputFile.close();
}


//主函数
void FileAndStreamMainCpp() {
    demos();
    printf("\n");
}
