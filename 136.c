#include<stdio.h>

struct Stu
{
    // 学生的相关属性
    char name[20];
    int age;
}s1, s2;  // 创建数据类型而已 全局变量  分号不要丢

struct 
{
    int a;
    int b;
    int c;
}a[20],*p; // 匿名结构体使用


// 结构体自引用  自己同类型的结构体
struct node
{
    int data; // 存数据
    struct node* next; // 存放下一个节点的地址
};

// 第一种办法
// typedef struct node1
// {
//     int data;
//     struct node1* next;
// }* linklist;

// 第二种办法
// struct node1
// {
//     int data;
//     struct node1* next;
// };

// typedef struct node1* linklist

struct point
{
    int x;
    int y;

}p = {2  ,4};


// 结构体嵌套结构体 初始化仍然是{}
int main()
{
    // 自定义类型
    // 数组 结构体 枚举 联合体

    // struct Stu s3; // 是局部变量

// 根据类型创建变量
    struct point p1;
    p1.x = 10;
    p1.y = 100;

    struct point p2 = {22, 4};










    return 0;
}