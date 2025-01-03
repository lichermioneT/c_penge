// 计算机的内存
#include<stdio.h>
int main()
{

// 创建变量就是向内存申请空间
// 变量的地址是首地址(最小的地址) 内存是以字节为单位
// 地址也被称作指针 存放指针(地址)的变量就是指针变量
    int x = 0;
    int* p = &x;
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%p\n",p);
    printf("%d\n",*p); // *p就是p指向的对象
    *p = 33;


// int * p
// *说明p是指针变量
// int说明p指向是int  根据这样子来几种变量就是几种指针变量
    char ch = 'w';
    char * pc = &ch;
// 指针变量存放的只能是地址

// 指针变量的大小字节，存储一个首地址 因为用来存储地址的
    printf("%zu\n",sizeof(char*));
    printf("%zu\n",sizeof(int*));
    printf("%zu\n",sizeof(int*));
    printf("%zu\n",sizeof(float*));
    printf("%zu\n",sizeof(double*));
    printf("%zu\n",sizeof(long*));









}