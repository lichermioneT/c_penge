#include<stdio.h>

// 枚举
// enum day
// {   
//     mon,
//     tues,
//     wed,
//     thur,
//     fri,
//     sat,
//     sun

// };

enum day
{   
    mon = 1,
    tues,
    wed,
    thur,
    fri,
    sat,
    sun

};


int main()
{
    enum day day1 = mon;
    printf("%d \n",mon);
    printf("%d \n",tues);
// 枚举优点
/*
    1增加代码的可读性和可以维护性
    2枚举定义的变量有类型
    3调试时是使用exe文件
*/







    return 0;
}