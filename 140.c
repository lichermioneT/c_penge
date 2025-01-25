#include<stdio.h>

// 位段
// 用来节省空间的
// 位段跨平台性能 不好

struct a
{   // 一个字节
    int _a:2;
    int _b:5;
    int _c:10;

    // 再来一个字节
    int _d:30; // 这里面是比特位
};
// 先来四个字节
// 不够再来四个字节

struct s
{   // 不能超过前面类型的大小 单位字节
    char a:3;
    char b:4;
    // 前面的一个比特位浪费了的
    char c:5;
    // 前面的三个浪费了的
    char d:4;
};

// 一个字节不谈论大小端存储 
// 位段还是有很多麻烦的  使用的时候注意不同的编译下的规则
// 位段时使用还是细心
// 自写出来夸平台的代码就行
// 位段在网络ip里面使用
int main()
{
    printf("%d \n", sizeof(struct a));  
    printf("%d \n", sizeof(struct s));  

    return 0;
}