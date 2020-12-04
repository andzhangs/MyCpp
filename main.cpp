#include <iostream>
#include "c/storage/StorageMain.c"
#include "c/storage/Support.c"
#include "c/operator/OperatorMain.c"
#include "c/array/ArrayMain.c"
#include "c/enum/EnumMain.c"
#include "c/c_point/CPointMain.c"
#include "c/c_point/MethodPoint.c"


using namespace std;

//typedef 为一个已有的类型取一个新的名字
typedef int UserAge;
//枚举
enum color {
    red, green = 5, yellow
} mColor;

//当您使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），
//变量声明就显得非常有用。您可以使用 extern 关键字在任何地方声明一个变量。
//虽然您可以在 C++ 程序中多次声明一个变量，但变量只能在某个文件、函数或代码块中被定义一次。
//变量声明
//不需要建立存储空间 extern
extern int a, b, c;

//函数声明
int func(int arg);

/**
 * 定义常量方式：
 *  1、使用 #define 预处理器。
 *  2、使用 const 关键字。 const 类型的对象在程序执行期间不能被修改改变
 */
#define Width 10;
#define Height 5;
const int Heights = 5;

/**
 * 类型限定符
 * volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。
 * 对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
 * restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
 */

/**
 * 修饰符
 * signed
 * unsigned
 * long
 * short
 *
 * 修饰符 signed、unsigned、long 和 short 可应用于整型，
 * signed 和 unsigned 可应用于字符型，
 * long 可应用于双精度型。
 * 修饰符 signed 和 unsigned 也可以作为 long 或 short 修饰符的前缀。
 * 例如：unsigned long int
 */
int main(int argc, char *argv[]) {

//    cout << "Hello, World!" << endl;
//
//    UserAge userAge = 1;
//    cout << userAge << endl;
//
//    mColor = yellow;
//    cout << mColoQr << endl;
//    //函数调用
//    func(20);
//
//    //存储类
//    StorageMain();

    //运算符
//    OperatorMain();

    //数组
//    ArrayMain();

    //枚举
//    EnumMain();

    //指针
//    CPointMain();

    //函数指针
//    MethodPointMain();

    //回调函数
    CallMethodMain();
    return 0;
}
