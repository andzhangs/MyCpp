#include <iostream>
#include <iomanip>

using namespace std;
//
// Created by zhangshuai on 2020/12/15. 
// Email：zhangshuai@dushu.io
// 输入输出流
//头文件	      函数和描述
//<iostream>  该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
//<iomanip>	  该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。
//<fstream>	  该文件为用户控制的文件处理声明服务。我们将在文件和流的相关章节讨论它的细节。


void IOMainCpp() {
    printf("<iomanip>\n");

    char str[] = "Unable to read....";

    //非缓冲标准错误流
    cerr << "Error message : " << str << endl;
    //非缓冲标准错误流
    clog << "Error message : " << str << endl;

    //其中 cout.setf 跟 setiosflags 一样，cout.precision 跟 setprecision 一样，cout.unsetf 跟 resetiosflags 一样。
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
