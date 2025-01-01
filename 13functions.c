#include<stdio.h>

// 函数类型 函数名 函数参数类型 函数主体
int add(int x, int y)
{
    printf("%d\n",x + y);
}


int main()
{


    int x = 0,y = 0;
    scanf("%d%d",&x,&y);
    add(x,y);  // 值传递
    return 0;
}

// 函数写法就是先写参数，传入参数，开始写函数