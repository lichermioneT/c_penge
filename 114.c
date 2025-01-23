#include<stdio.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;

}
int main()
{
/*
指针  
指针类型
指针的运算
指针数组
数组名
数组指针
函数指针
函数指针数组

内存，内存单元，内存编号（地址），地址也被成为指针。
口头语一般指的是指针变量，指针变量就是一块内存空间，指针变量存放地址
*/

    // int a = 10;
    // int* pa = &a; // 类型是int*
    // *pa = 0; // &和*
    // printf("%d \n",a);

    // char ch = '2';
    // char* pc = &ch;

// 指针类型决定指针加一减一步长
// 解引用操作的时候的权限

// 指针加减运算 指针-指针 指针的关系

// 指针数组 存放指针的数组 指针数组本质上是数组

// 一维数组名首地址  二维数组名数组首行的地址  下面两个除外
// sizeof(数组名) &数组名  

// 数组指针指向 数组的指针
    // int arr[]= {1,2,3,4};
    // int(*parr)[4] = &arr; // 星表示parr是指针  指向的数组里面有四个元素 里面元素是int

// 函数指针
    // printf("%p \n",add);
    // printf("%p \n",&add);
    // // int(*pf)(int,int) = add;  // 函数的地址放在函数指针变量里面
    // int(*pf)(int,int) = &add;  // 函数的地址放在函数指针变量里面

    // int ret = (*pf)(2,3);
    // ret = pf(3,4);
    // printf("%d \n", ret);

// 函数指针的数组
    // int(*pfarr[])(int, int) = {add, sub};
    // 类型是 int(*)(int, int)
    
// 函数指针实现回调函数
// 通过函数指针调用的函数
// qsort函数 实现冒泡排序的思想

// 数据结构 结构体 动态内存管理  数据结构

// *& 抵消了  &取到了多少字节  *解引用的时候就有多少权限
    // int a[] = {1, 2, 3, 4};
    // printf("%d\n", sizeof(a)); // 十六个字节 计算整个数组的大小
    // printf("%d\n", sizeof(a + 0)); // 4/8个字节  首元素的地址
    // printf("%d\n", sizeof(*a)); // 四个字节 第一个元素 int类型的  首元素地址解引用
    // printf("%d\n", sizeof(a + 1)); // 四/八个字节 第二个地址 指向2的地址
    // printf("%d\n", sizeof(a[1])); // 四个字节 第二个元素
    // printf("%d\n", sizeof(&a)); // 整个地址 四/八个字节
    // printf("%d\n", sizeof(*&a)); //十六个字节 *&a == a 十六个字节

    // printf("%d\n", sizeof(&a+1)); //  四/八个字节
    // printf("%d\n", sizeof(&a[0])); // 四/八个字节
    // printf("%d\n", sizeof(&a[0] + 1)); // 四/八个字节



    int a = 10;
    int* pa = &a;
    printf("%d", sizeof(int*));
    printf("%d", sizeof(char*));
    printf("%d", sizeof(double*));
    printf("%d", sizeof(float*));
    printf("%d", sizeof(long*));




























    return 0;
}