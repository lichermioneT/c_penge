#include<stdio.h>
#include<math.h>
// c语言里面不同的数据类型 只能存放相应的数据类型
void swap(int* x, int* y)  // 参数是指针 函数传入参数地址
{
    int temp = *x;    // 解引用就是找到地址指向的值
    *x = *y;
    *y = temp;
}

int Add(int x, int y)
{
    return (x + y);
}

int is_prime(int x)
{
    int i = 0;
    for(int i = 2; i <= x - 1; i++)
    {
        if(x % i == 0)
        {
            break;
        }
        else if(i == x -1)
        {
            printf("%d----\n",x);
        }
    }
}

int main()
{

// 应届生身份十分重要的  继续加油
// 一个工程里面只有一个main函数
// 可以里面有多个.c文件

    int a = 0;
    int b = 0;
    // scanf("%d%d",&a,&b);
    // printf("%d %d \n", a, b);
    // swap(&a, &b);   // 地址传递
    // printf("%d %d \n", a, b);

// 当实际参数传递给形式参数 形式参数是实际参数的一个临时拷贝
// 对形式参数的修改不能修改实际参数

    int c = Add(a, b); // 值传递
    // printf("%d\n",c);
// 什么时候值传递 什么时候地址传递
// 值:对实际参数的不用操作
// 地址:对实际参数需要操作


// 实际参数:真实传递给函数的
// 实际参数可以表达式 可以是函数 常量 变量

// 形式参数:定义函数的是定义的
// 函数调用的时候才分配内存空间 用来完成功能 
// 形式参数只在函数调用完成就销毁  只在函数里面有用的


// 函数调用:值传递  把实际参数值拷贝给形式参数
// 函数调用:址传递  指针接收并且和实际参数建立联系  函数和外部建立联系


// 函数素数判断
    // int i = 0;
    // int cout = 0;
    // for(i = 100; i <= 200; i++)
    // {
    //     for(int j = 2; j <= i -1; j++)
    //     {
    //         if(i % j == 0)
    //         {
    //             break;
    //         }
    //         else if(j == i -1)
    //         {   cout++;
    //             printf("i is prime:%d\n",i);
    //         }
    //     }
    // }
    // printf("%d\n",cout);

// 函数素数判断优化版本

// 函数实现素数判断
    int i = 0;
    int cout = 0;
    for(int i = 101; i <= 200; i += 2)
    {
        is_prime(i);
        
    }
    






















    return 0;
}