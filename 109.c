#include<stdio.h>

int Add(int x, int y)
{
    return x + y;
}

void calc(int (*pf)(int,int))
{
    int a = 3;
    int b = 4;
    int ret = pf(a,b);
    printf("%d \n", ret);
}

int main()
{
/*
    int arr[5]       整型数组
    int* parr1[20]   指针数组
    int(*parr2)[10]  数组指针
    int(*parr[3])[5] 数组指针数组  类型是 int(*)[5]
*/
    // int  arr1 = {1,2,3,4,5};
    // int  arr2 = {2,3,4,5,6};
    // int  arr3 = {3,4,5,6,7};
    // int(*parr3[3])[5] ={&arr1, &arr2, &arr3}; // 类型是 int(*)[5]

/*  一维数组传参
    int arr[10]
    void test(int arr[])
    void test(int arr[10])
    void test(int* arr)  实际上都是指针用来接地址

    int* arr2[20];
    void test2(int* arr[])
    void test2(int* arr[20])
    void test2(int** arr)  存放一级指针变量的地址

*/

/*
    二维数组传参
    int arr[3][5];
    void test(int arr[3][5])
    void test(int arr[][5])  不能省略列的
    void test(int (*arr)[5])   是一行的地址
    test(arr)
*/

/*  一级指针
    print(int* p)
    int a = 10; int* p = &a
    print(&a)
    print(p)
    int arr[10]
    print(arr)

*/

/*
    二级指针
    print(int** ptr)

    int n = 10;
    int*  p = &n;
    int** pp = &p

    print(pp)
    print(&p)

    int* arr[10]
    print(arr)
*/

// 函数指针
    // 指向函数的指针就是函数指针
    // 指向属猪的指针就是数组指针
    // int arr[3] = {0};
    // int (*p)[3] = &arr;

    // 函数名就是函数的地址
    // 函数里面不区分首元素地址
    // printf("%p \n",Add);
    // printf("%p \n",&Add);

    // int(*p)(int,int) = Add;
    // int(*pf)(int x,int y) = Add; pf == Add
    // int(*pf)(int x,int y) = &Add;

    // int a = 10;
    // int* p = &a;
    // *p = 10;
    // printf("%d\n",*p);

    // 就是为了间接调用和使用函数
    // int ret = (*pf)(3,4);    *注意写到括号里面哈,不然就和函数先结合在解引用了，解引用找到才能用的
    // int ret = pf(3,4);
    // printf("%d", ret);
    calc(Add);
    return 0;
}