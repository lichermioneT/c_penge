#include<stdio.h>

void print1(int arr[3][5], int r, int c)
{
    int i = 0;
    for(i = 0; i < r; i++)
    {
        int j = 0;
        {
            for(j = 0; j < c; j++)
            {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}

void print2(int (*p)[5], int r, int c) // 数组指针是指针
{
    int i = 0;
    for(i = 0; i < r; i++)
    {
        int j = 0;
        for(j = 0; j < c; j++)
        {
            // printf("%d ", *(*(p + i) + j));
            // *(p + i) == p[i]
            // printf("%d", p[i][j]);
        }
        printf("\n ");
    }
}

void print3(int* p)
{
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
}



int main()
{

// 数组指针
    // int arr[10] = {0};
    // int (*p2)[10] = &arr;  // p2是指针类型的 指向的是数组 每个数组10个元素 每个元素是int类型的

    // char * arr[5] = {0};
    // char* (*pc)[5] = &arr;  // pc是指针 指向的是数组 数组元素有五个 每个元素的内容char*

    // char ch = 'w';
    // char* p1 = &ch;
    // char* * p2 = &p1;
    
// 数组指针
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // int* p = arr;
    // int i = 0;
    // for(i = 0; i < 10; i++)
    // {
    //     printf("%d ", *(p + i));
    // }

    // 错误示范
    // int (*p)[10] = &arr;
    // int i = 0;
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // for(i = 0; i < sz; i++)
    // {
    //     printf("%d ",*(*p + i));   // *p相当于数组名，数组名首元素地址 *p首元素的地址
    // }

// 数组指针应用
    int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
    // print1(arr, 3, 5);
    print2(arr, 3, 5);  // arr 表示第一行的地址 第一行的地址 是一个一维数组的地址
    // arr 一行的地址
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    print3(data);
// int (*p)[5] p的类型是:int(*)[5]
// int (*p)[5] p是指向一个整型数组的，数组5个元素
// p + 1 --> 跳过一个五个int元素的元素
// 指针的类型很关键，决定指针加一的权限














    return 0;
}