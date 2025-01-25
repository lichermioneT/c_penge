#include<stdio.h>
#include<stddef.h>

// #pragma once 
// 防止头文件被多次引用

// struct s1
// {
//     char c1;
//     int i;
//     char c2;
// };

// struct s2
// {
//     char c1;
//     char c2;
//     int i;
// };

// struct s3
// {
//     double d;
//     char c;
//     int i;
// };

// struct s4
// {
//     char c1;
//     struct s3 s;
//     double d;

// };
// struct s
// {
//     int i; // 对齐数4 0~3
//     double d; // 对齐数8 8~15
// };

// 修改默认对齐数
// 只能是2的次方
#pragma pack(4)
struct s
{
    int i; // 对齐数4 0~3
    double d; // 对齐数4 4~11
};



#pragma pack(1)
struct s1
{
    char c1;
    int i;
    char c2;
};




int main()
{
// 结构体内存对齐
    // printf("%d \n", sizeof(struct s1)); // 12
    // printf("%d \n", sizeof(struct s2)); // 8
    // printf("%d \n", sizeof(struct s3)); // 8

// 怎么查看编译器的默认对齐数
// vs默认对齐数 8
// gcc对齐数就是自身大小
/*
    1第一个变量在偏移量两个为零的地址值
    2其它成员要到对齐数和自身倍数的最小值的倍数 
    3总地址成员最大对齐数的整数倍
    4结构体嵌套

    节约空间和既满足对齐 让小地址放在一起
*/
    // 计算结构体里面的偏移量
    // printf("%d\n",offsetof(struct s1,c1));
    // printf("%d\n",offsetof(struct s1,i));
    // printf("%d\n",offsetof(struct s1,c2));

    // printf("%d\n",offsetof(struct s2,c1));
    // printf("%d\n",offsetof(struct s2,c2));
    // printf("%d\n",offsetof(struct s2,i));


// 修改默认对齐数
    printf("%d \n", sizeof(struct s1));




    return 0;
}