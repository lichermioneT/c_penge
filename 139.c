#include<stdio.h>

struct s
{
    int data[1000];
    int num;
};

void print1(struct s ss)  // 传值调用
{
    int i = 0;
    for(i= 0; i < 3; i++)
    {
        printf("%d\n",ss.data[i]);
    }
    printf("%d \n",ss.num);
}


void print2(struct s* p) // 传址调用
{   
    // 结构体指针的使用方法
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        printf("%d \n", p->data[i]);
    }
    printf("%d \n",p->num);
}

int main()
{
// 结构体传入参数

    struct s s1 = {{1,2,3},100};
    // print1(s1); // 传值调用 会用
    print2(&s1); // 传址调用  要精通
    return 0;
}