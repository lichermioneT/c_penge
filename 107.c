#include<stdio.h>   

void print(int arr[3][5],int r, int c)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < r; i++)
    {
        j = 0;
        for(j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
}

// 数组指针的类型是 int(*)[5]  加一直接跳过一个基本的类型
void print2(int (*pc)[5], int r, int c) //  指针数组  
{
    int i = 0;
    int j = 0;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            // printf("%d ", *(*(pc+i)+j));   添加一个i直接跳过一个类型
            // *(p+i) == p[i]
            printf("%d ",pc[i][j]);

        }
        printf("\n");
    }

}


int main()
{

    // int arr[10] = {0};
    // int(*pi) = &arr;

    // char* arr2[5] = {0};
    // char* (*pc)[5] = &arr2;

    // char ch = 'w';
    // char * p1 = &ch;
    // char** p2 = &p1;

// 数组指针必须确定指向的大小  [里面必须确定大小] 
    // int arr[] ={1,2,3,4,5,6,7,8,9,10};

    // 错误示范
    // int (*p)[10] = &arr;
    // int i = 0;
    // int sz =  sizeof(arr) / sizeof(arr[0]);
    // for(i = 0; i < sz; i++)
    // {
    //     printf("%d ",*(*p + i));  // *p本质上就是首元素的地址
    // }

    // int*p = arr;
    // int i = 0;
    // for(i = 0; i < 10; i++)
    // {
    //     printf("%d ", *(p + i));
    // }

// 数组指针的示范
    int arr[3][5] = {{1,2,34,5,6},{2,3,4,5,6},{4,5,6,7,8}};
    // print(arr, 3, 5);
    print2(arr, 3,  5); // 二维数组的首元素是第一行的地址 第一行数组的地址
    return 0;
}