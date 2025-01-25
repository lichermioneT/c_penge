#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{

// 小心内存泄漏

//变长数组是数组可以用变量申请空间的
// 申请空间  下面是固定的
    // int a = 10;
    // int arr[20] = {0};

// 申请空间的动态
    /*
    malloc
    calloc
    realloc
    free
    四大函数 注意记得和free配对使用
    */

// malloc函数
    /*
    void* malloc(size_t size)
    开辟字节
    返回起始地址的指针
    */

// 可能申请失败 注意

    // 动态开辟内存
    int* p = (int*)malloc(40);

    // 检查内存开辟的大小
    if(p == NULL)
    {
        printf("%s \n",strerror(errno));
        return 1;
    }

    // 使用内存
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d \n", *(p + i));
    }

    // 注意顺序的释放
    free(p);  // 直接释放指针指向的空间 但是还能记得初始位置
    p =NULL; // 直接让它失忆


// free函数 不使用的时候
// 程序结束的时候系统自动回收


// 动态内存开辟的空间在

/*
    malloc
    calloc
    realloc
    free
    申请的空间在堆区里面
*/

// 栈区里面申请的空间是不能随便改变大小的
    return 0;
}