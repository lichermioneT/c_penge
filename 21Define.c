#include<stdio.h>

#define MAX 100   // 定义标识符常量
#define ADD(x, y) ((x) + (y)) // 宏名字 参数(参数没有类型) 宏体
int main()
{
    int a = 10;
    int b = 10;
    int c = ADD(a, b);
    printf("%d\n", c);





















    
    return 0;
}