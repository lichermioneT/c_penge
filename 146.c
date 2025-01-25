#include<stdio.h>

// 共用同一块空间
// 合租的概念
// 结构体形成自己的空间
// 共性单车 共享充电宝

union un
{
    int a; // 4
    char c; // 1
    // 有时候用a
    // 有时候用c
};

// 联合体判断系统大小端
int check_sys()
{
    union 
    {
        char c;
        int i;
    }u;
    u.i = 1;
    return u.c;
}

union Un
{
    char ch[5];
    int i;
};



int main()
{
    union un u;
    // printf("%d \n",sizeof(u));
    // printf("%p \n", &u);
    // printf("%p \n", &(u.a));
    // printf("%p \n", &(u.c));
    // u.a = 0x112233344;
    // u.c = 0x00;
    // u.a = 0x11223344;
    // 4 + 4 * 16 = 68
    // printf("%d\n",u.c);

// 联合体的大小  也存在对齐
    printf("%d \n",sizeof(union Un)); // 8


    return 0;
}