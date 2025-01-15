#include<stdio.h>
int main()
{
    int arr[5];           // 整型数组
    int* parr1[10];       // 整型指针数组
    int (*parr2)[10];     // 数组指针
    int (*parr3[10])[5];  // 数组指针数组
    /*
    parr3 十个元素
    parr3 每个元素是一个数组指针
    */

// 数组指针是指针
// 指针数组是数组

// 数组参数 指针参数
// 数组传参
// 数组作为函数参数

// 一维数组传参
    /*
    一维数组传参
    int arr[10] = {0};

    test(arr);   // 数组名首元素地址  接收只能是指针变量
    void test(int arr[])    void test(int arr[]) 与 void test(int *arr) 是等价的。 本质上是首元素的地址
    void test(int arr[10])   编译器会忽略这个维度信息，函数不会知道数组的实际大小。
    void test(int* arr)
    在C或C++中，void test(int arr[10]) 和 void test(int arr[]) 或者 void test(int *arr) 是等价的。
    无论你写的是 arr[10]、arr[] 还是 *arr，在函数参数声明中它们都表示一个指向整数的指针。
    */

   /*
    int* arr2[20] = {0}
    test(arr2);
    void test(int* arr[20])
    void test(int* * arr)  arr2 --> int*类型的指针
   */

// 二维数组传参
    /*
    int arr[3][5];
    test(arr);
    void test(int arr[3][5])  
    void test(int arr[0][0])  行可以省略 列不可以省略的
    void test(int arr[0][5])
    void test(int* arr); x  二维数组的数组名，表示首元素的地址，其实是第一行的地址 第一行是一维数组的地址
    void test(int* arr[5]) x 指针数组
    void test(int (*arr)[5]) 数组指针
    void test(int* * arr) x 二级指针存放一级指针变量的地址
    */


// 一级指针传参
    // 传入什么指针就用什么指针接受
    /*
        void print(int* p)   只要是个整型指针就行的
        int a = 10; print(&a);
        int* ptr = &a; print(ptr);
        int arr[10]; print(arr);
    */

// 二级指针传参
    /*
    int n = 10;
    int* p = &n;
    int* *pp = &p;

    test(pp);
    test(&p);

    test(int** p)
    int* p1;
    int** p2;

    test(&p1);
    test(p2);
    
    */













    return 0;
}