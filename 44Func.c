#include<stdio.h>

// 函数原型声明
int Add(int x, int y);

int main()
{
    // 声明变量以存储输入
    int a = 0;
    int b = 0;

    // 从用户输入读取两个整数
    scanf("%d %d", &a, &b);
    
    // 调用Add函数并存储结果
    int sum = Add(a, b);
    
    // 打印和
    printf("%d\n", sum);

// 函数声明和函数实现代码
// 函数的定义，声明，使用都是份文件使用的
// 这样子处理起来更加清晰
    return 0;
}

// Add函数的定义
int Add(int x, int y)
{
    return x + y;
}