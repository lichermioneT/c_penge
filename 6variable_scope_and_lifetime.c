// 变量的作用域
// 变量的声明周期
// 我可以在哪里使用，方便我们看懂程序
#include<stdio.h>

// 全局变量：全部变量的作用域是整个工程
int x = 100;   // 声明周期是整个程序的声明周期
int main()
{

// 局部变量只能在创建的地方
// c只能在这里面使用main里面
    int c = 110;
{   // a只能在里面使用
    int a = 10;
   
}


// 声明周期没有办法显示

{   // 进入开始创建
    int xx = 55;
    // 出去销毁
}


    return 0;
}