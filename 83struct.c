#include<stdio.h>

// 写代码是为了解决生活实际问题
// 为了描述更加复杂的问题

// 声明结构体类型   
struct person
{
    char name[20];
    char tele[20];
    char sex[5];
    int height;
};            // 声明之后再创建连个变量  两个结构体全局变量

struct st
{
    struct person p33;
    int num;
    int age;
}s, s2;

void print(struct st *p)
{
    // p->p33.name;
    // p->p33.tele;
    // p->p33.sex;
    // p->p33.height;
    // p->num;
    // p->age;
    printf("%s %s %s %d ",p->p33.name,p->p33.tele,  p->p33.sex,p->p33.height);
    printf("%d %d",p->num, p->age);

}

int main()
{
    struct person p1 = {"zhangsan", "151818686", "男", 181};  // 结构体变量创建 并且初始化
    struct st s1 = {{"lisi", "17777", "男", 11}, 100, 555};   // 嵌套结构体的初始化

// 嵌套的数据依次访问下去 直至最后 但是不能访问结构体
// .    操作符
// ->   两种数据的访问
    // printf("%s\n",s1.p33.name);  
    // printf("%s\n",s1.p33.tele);  
    // printf("%s\n",s1.p33.name);  
    // printf("%s\n",s1.p33.sex);  
    // printf("%d\n",s1.p33.height);  

    // printf("%d\n",s1.num);  
    // printf("%d\n",s1.age);  

    // print(&s1);

  

















    return  0;
}