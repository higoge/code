/**
 * 文件名: e1.c
 * 通过int最低内存地址的字节转换成char进行判断
 */

#include <stdio.h>

int main()
{
    int num = 0x12345678;
    char n0 = ((char *) &num)[0];
    char n1 = ((char *) &num)[1];
    char n2 = ((char *) &num)[2];
    char n3 = ((char *) &num)[3];

    if (n0 == 0x12) {
        printf("this is Big Endian\n");
    } else {
        printf("this is Little Endian\n");
    }

    // 内存从低到高分别打印四个字节的内容
    printf("%p: 0x%x\n", &((char *) &num)[0], n0);
    printf("%p: 0x%x\n", &((char *) &num)[1], n1);
    printf("%p: 0x%x\n", &((char *) &num)[2], n2);
    printf("%p: 0x%x\n", &((char *) &num)[3], n3);

    return 0;
}

