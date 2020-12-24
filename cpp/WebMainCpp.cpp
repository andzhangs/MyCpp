#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/24. 
// Email：zhangshuai@dushu.io
// Web编程

void WebMainCpp() {
    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Hello World - 第一个 CGI 程序</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h2>Hello World! 这是我的第一个 CGI 程序</h2>\n";
    cout << "</body>\n";
    cout << "</html>\n";
}