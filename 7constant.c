#include<stdio.h>
// 注意定义没有分号 定义的变量名只用大写
// #define定义的标识符常量
#define MAX 100
#define STRING "ABCD"

// 枚举常量
enum color  // 类型
{   // 里面的枚举值
    RED,
    GREEN,
    BLUE
};

enum sex   // 枚举类型
{
    MALE,
    FEMALE,
    SECRET

};

int  main()
{
// 常量用来描述生活中不变的数据
// c语言的常量一共四种
// 字面常量 const #define 枚举常量

//字面常量
    209;
    'w';
    "abc";

// const 修饰的常变量
// 修饰的数据本质上变量，但是不能直接修改它
    const int a = 10;  // 这个a不可以修改

// 枚举常量 枚举枚举一一列举 RGB 彩虹颜色
    // 创建对象
    enum color c = RED;
    enum color g = GREEN;
    enum color b = BLUE;
    enum sex man = MALE;
    enum sex woman = FEMALE;
    enum sex renyao = SECRET;


    return 0;
}