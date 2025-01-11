#include<stdio.h>

int fact(int x)
{

    if(x != 0)
    {
        return x * fact(x -1);
    }
    else if(x <= 0)
    {
        return 1;
    }
}


int main()
{
    int x = 0;
    scanf("%d",&x);
    int num = fact(x);
    printf("%d ",num);
    return 0;
}