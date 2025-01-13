#include<stdio.h>

struct person
{
    int a;
    int b;
    char ch[10];
    int d;
};

void print(struct person* p)
{
    printf("%d",p->a);
    printf("%d",p->b);
    printf("%d",p->d);
    printf("%s",p->ch);
}

void prints(struct person p)
{   printf("\n");
    printf("%d",p.a);
    printf("%d",p.b);
    printf("%d",p.d);
    printf("%s",p.ch);
}
int main()
{
// 结构体传参
    struct person s = {10,20,"lics", 22};
    print(&s);
    prints(s);
    return 0;
}