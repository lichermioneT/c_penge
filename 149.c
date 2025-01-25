#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{

// free只能释放动态开辟的空间
// calloc  个数 字节数 初始化零
    // int* p = (int*)calloc(10, 4);

    // if(p == NULL)
    // {
    //     printf("%s\n",strerror(errno));
    // }

    // int i = 0;
    // for(i = 0; i < 10; i++)
    // {
    //     printf("%d \n",*(p + i));
    // }


//realloc 函数实现
    // 原来空间的指针
    // 新空间的大小 字节

    // int* p = (int*)malloc(40);

    // int i = 0;
    // for(i = 0; i < 10; i++)
    // {
    //     *(p + i) = i + 1;
    // }

    // int* ptr = (int*)realloc(p,80); // 新的大小

    // if( ptr != NULL)
    // {
    //     p = ptr;
    // }

    // // 后面的数据依然是随机值的
    // for(i = 0; i < 10; i++)
    // {
    //     printf("%d \n", *(p  + i));
    // }





// realloc的工作原理
/*
1直接在原来空间里面 补上空间  地址还是原来的地址
2直接在新的地址找一块新的空间 地址已经变了  原来的数据拷贝过去 原来的空间释放了
*/

// 内存池分配一大块空间自己维护  


    // realloc(NULL,40) == malloc(40); 





    return 0;
}