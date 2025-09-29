/*
 * 计算牌面点数的程序。
 * 使用“拉斯维加斯公开许可证”。
 * (c)2014学院21点扑克游戏小组。
 * C语言是一种很小的语言，如果不使用外部库，它几乎什么也干不了。为了告诉编译器程序要使用哪些外部代码，需要包含（include）相关库的头文件。stdio.h是最常见的头文件，stdio库中包含了那些能在终端读写数据的代码。
 */

/*  
 * "/ /" 在这不起作用，可能因为本编译器尚不支持 C99 标准。
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("输入牌名: ");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K') {
        val = 10;       
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }
    printf("这张牌的点数是: %i\n", val);
    return 0;
}