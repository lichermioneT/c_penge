#include<stdio.h>
#include<string.h>
int main()
{
// c语言没有字符串数据类型
    'a';               // 字符常量
    char ch = 'w';
    "abedfasd";        // 字符串常量

// 字符串的结束标志 \0
    char arr1[] = "abcdefss"; // 这里面默认就是斜杠零 会算做字符串的长度
    char arr2[] = {'a','b','c','d','e','f'}; // 这种方法不会默认结束标志
    // printf("%zu\n",sizeof(arr1));
    // printf("%zu\n",sizeof(arr2));
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));

// strlen库函数 不会计算字符串的结束标志
    int len = strlen("abc");
    printf("%d\n",len);


    return 0;
}