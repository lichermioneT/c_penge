// 写代码注意：不一定编译器会报错，所以还是得直接检查
// 编译器只会检查语法，你的自己检查你的思想
// 学习算法！！！

// 编程里面 ==才是等于
// 编程里面 =才是赋值
// 注意字符的使用
// c语言0就是假的 其它的都是真的
// c语言是结构化的程序设计语言

#include<stdio.h>
int main()
{
//  判断
    int x = 100;
    if(x > 2){
        printf("lichermioneX\n");
    }

    if(x > 22){
        printf("x > 22\n");
    }
    else
    {
        printf("x < 22\n");
    }

    if(x > 10000){
        printf("x > 10000\n");
    }
    else if(x == 100){
        printf("x ==100\n");
    }
    else{
        printf("x < 100\n");
    }

    char ch = 'a';
    switch(ch)
    {
        case 'a':printf("优秀1\n");break;
        case 'b':printf("优秀2\n");break;
        case 'c':printf("优秀3\n");break;
        case 'd':printf("优秀4\n");break;
        case 'e':printf("优秀5\n");break;
    }

// 循环代码
// 注意循环从0开始和1开始循环的次数
    int line = 0;
    printf("加入比特");
    while (line < 2000)
    {
        printf("写代码：%d\n",line);
        line++;
    }

    if(line >= 2000)
    {
        printf("好offer\n");
    }
    else
    {
        printf("回家吧\n");
    }
    
    




















































    return 0;
}