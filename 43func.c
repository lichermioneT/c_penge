#include<stdio.h>
#include<string.h>
int main()
{

// 函数可以之间相互调用的
// 但是不能嵌套定义函数


// 链式访问 依赖函数的返回值
    int len = strlen("abcdef");
    printf("%d\n", len);

    // 链式访问 一个函数的返回值作为另一个函数的参数
    printf("%d\n", strlen("abcdef"));

    printf("%d", printf("%d",printf("%d", 43)));   // 返回值是打印的字符的个数4321

// 函数不写返回值的时候 默认返回类型是int 
// 养成好习惯 要返回值就定义好 返回的类型
// 不返回就写成 void
// void在函数使用
// 本质上mian函数是有参数的 三个参数
// int argc, chat* argv[], char* envp[]

























































    return 0;
}