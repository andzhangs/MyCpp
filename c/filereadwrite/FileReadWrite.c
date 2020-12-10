#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// r	打开一个已有的文本文件，允许读取文件。
// w	打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
// a	打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
// r+	打开一个文本文件，允许读写文件。
// w+	打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
// a+	打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。

//如果处理的是二进制文件，则需使用下面的访问模式来取代上面的访问模式：
//"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"

void FileReadWriteMain(void) {
    FILE *file = NULL;
    file = fopen("../file/Test.txt", "r");
    char buff[1024];
    fgets(buff, 1024, (FILE *) file);
    printf("打印：%s\n", buff);
    fclose(file);

    FILE *file1 = NULL;
    file1 = fopen("../file/Test.txt", "a+");
    fprintf(file1, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", file1);
    fclose(file1);
}