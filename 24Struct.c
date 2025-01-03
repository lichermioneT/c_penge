
#include<stdio.h>
struct Stu{
        int age;
        char sex[10];
        char tele[12];
};  // 声明结构体 结构体名称 创建对象(不占空间的:类似图纸)

void print(struct Stu* ps)
{
    printf(" %d %s %s ",(*ps).age,(*ps).sex,(*ps).tele);
    printf("%d %s %s",ps->age,ps->sex,ps->tele);
    // -> 左边是结构体指针变量->成员名
}



int main()
{

// 写代码是为了解决生活问题
// 单个类型描述事务太单一了
// struct复合描述
    struct Stu s = {12, "man", "1234567"}; // 初始化

    printf("%d\n%s\n%s",s.age,s.sex,s.tele); // 打印结构体成员变量关键操作符：.
    // . 1左边是结构体对象 2右边成员名
    print(&s);



    return 0;
}


