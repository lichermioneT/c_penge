#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
void getmemory(char** p)
{
    *p = (char*)malloc(100); // p是形式参数 在函数里面使用 里面释放
    // 空间开辟就找不到了  不能释放这块空间
}

void test(void)
{
    char* str  = NULL;
    getmemory(&str);
    strcpy(str, "hello wordl");  // 空指针 解引用会崩溃
    printf(str);
    // 释放
    free(str);
    str = NULL;
}




int main()
{

// 在开辟空间的时候 一定要判断开辟空间是否成功了
    // int* p = malloc(40);
    // if(p == NULL)
    // {
    //     printf("%s\n",strerror(errno));
    // }
    // *p = 20;
    // free(p);
    // p = NULL;

// 开辟的空间越界访问
    // int* p = malloc(40);
    // if(p == NULL)
    // {
    //     printf("%s\n",strerror(errno));
    //     return 1;
    // }

    // int i = 0;
    // for(i = 0; i <= 10; i++)  // 访问越界了
    // {
    //     p[i] = i;
    // }
    // free(p);
    // p = NULL;

// 对于非动态开放的空间释放
    // int a = 10;
    // int* p = &a;
    // // ....
    // free(p);
    // p = NULL;

// free释放动态开辟的一部分
    // int* p = malloc(40);
    // if(p == NULL)
    // {
    //     printf("%s\n",strerror(errno));
    // }

    // // 使用
    // int  i = 0;
    // for(i = 0; i < 5; i++)
    // {
    //     *p = i;
    //     p++;
    // }

    // free(p);  // 只是释放了一部分空间
    // p = NULL;

// 对同一块空间的多次释放呢
    // int* p = malloc(40);
    // //....
    // free(p);
    // p = NULL; // 释放过后记得变成空指针  不然就是野指针了

    // // free(p); 释放完后 再次释放无所谓的
    // 对与一快空间释放一次就行


// 内存忘记释放了  写在函数里面 忘记free。
    // int* p = (int*)malloc(40);
    // //,,,,,,
    // //,,,,

    // free(p);
    // p = NULL;

    // 函数里面开辟 但是实在外面使用 会忘记释放的

//  

    test();












    return 0;
}