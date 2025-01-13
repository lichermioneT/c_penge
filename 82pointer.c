#include<stdio.h>
int main()
{

// 指针是内存单元最小的编号
// 指针就是地址

    // int a = 10;
    // int * pa = &a;      // pa一级指针变量
    // int* * ppa = &pa;   // ppa二级指针变量   二级指针变量是用来存放一级指针变量的地址

    // **ppa = 200;
    // printf("%d\n", a);


    // *pa = 20;
    // printf("%d\n", a);


//指针数组  存放指针的数组就是指针数据
    // int a = 10;
    // int b = 20;
    // int c = 30;
    // int i = 0;

    // // 指针数组
    // int* parr[10] = {&a, &b, &c};
    // for(i = 0; i < 3; i++)
    // {
    //     printf("%d\n",*(parr[i]));
    // }
    

    // int arr[3][4] = {1,2,3,4,2,3,4,5,4,5,6,7};
    // int i = 0;
    // int j = 0;
    // for(i = 0; i < 3; i++)
    // {
    //     for(j = 0; j < 4; j ++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }


    int arr1[4] = {1,2,3,4};
    int arr2[4] = {2,3,4,50};
    int arr3[4] = {4,5,6,7};
    int i = 0;

    int* prr[3] = {arr1, arr2, arr3};
    for(i = 0; i < 3; i++)
    {
        int j = 0;
        for(j = 0; j < 4; j++)
        {
            printf("%d  ",prr[i][j]);  // 模拟二维数组的细节
        }
        printf("\n");
    }













    return 0;
}