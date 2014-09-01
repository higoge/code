/**
 * 文件名: e2.c
 * 通过联合体进行判断
 * 联合体union的存放顺序是所有成员都从低地址开始存放
 */
#include <stdio.h>

int main()
{
    union NUM {
        int a;
        char b;
    } num;

    num.a = 0x12345678;

    if (num.b == 0x12) {
        printf("this is Big Endian\n");
    } else {
        printf("this is Little Endian\n");
    }

    return 0;

}
