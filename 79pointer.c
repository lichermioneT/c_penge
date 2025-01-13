#include<stdio.h>

// int* test()
// {
//     int a = 10;  // a是局部变量 出去了空间就还给操作系统
//     return &a;   // 问题所在的地方
// }

#define N_VALUES 5

int main()
{
// 局部变量不初始化一般是随机值

// 野指针  随机地址一些没有声明的地址
// 没有初始化和不能访问的地址
    // int* p;
    // *p = 10; // 访问非法内存了

    // int arr[10] = {0};
    // int* p = arr;    // 等价&arr[0]
    // int i = 0;

    // for(i = 0; i <= 10; i++)  // 越界访问了 野指针
    // {
    //     *p = i;
    //     p++;
    // }

// 不能再使用了 因为局部变量已经释放了
    // int* p = test();

// 创建指针初始化
// 不知道在怎么初始化 就初始化NULL
    // int a = 0;
    // int* p = NULL;  // 但是NULL这块内存不能访问 此内存仅仅是初始化用的


    // float values[N_VALUES];
    // float* vp;
    // for(vp = &values[0]; vp < &values[N_VALUES];)
    // {
    //     *vp++; // 先解引用在加加  这里面不算越界只是看看    
    // }

    int arr[10] = {0};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;

    // for(i = 0; i < sz; i++)
    // {
    //     *p = 1;
    //     p++;
    // }

    // for(i = 0; i < sz; i++)
    // {
    //     *(p + i) = 5;
    // }

    // for(i = 0; i < sz; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
























    return 0;
}