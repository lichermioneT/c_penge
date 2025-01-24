#include<stdio.h>
#include<string.h>
#include<assert.h>
size_t my_strlen(const char* str) //限制指针改变字符串 const修饰
{
    int cout = 0;
    assert(str);
    while(*str != 0)
    {
        cout++;
        str++;
    }
    return cout;
}

char*  my_strcpy( char* str1, const char* str2)  // str2的值不能被修改的
{   
    assert(str1);
    assert(str2);
    char* ret = str1;

    // while (*str2 != '\0')
    // {
    //     *str1 = *str2;
    //     str1++;
    //     str2++;
    // }
    // *str1  = *str2;

    while (*str1++ = *str2++)
    {
        ;
    }
    
    return ret;
}

char*  my_strcat(char* str1, const char* str2)
{   char* ret = str1;

    while(*str1 != '\0')
    {
        str1++;
    }

    while (*str1++  = *str2++)
    {
        ;
    }
    return ret;
    
}



int main()
{

// strlen
    // char arr[] = "abcdef"; // 这里面默认斜杠零最后面
    // int len =  strlen(arr);
    // printf("%d \n",len);

    // char arr1[] = {'a', 'b', 'c'};
    // len = strlen(arr1);  // 这里面不知道斜杠零的位置
    // printf("%d \n",len); // len 随机值

// size_t unsigned int
    //strlen 返回的是无符号整型
    // if(strlen("abc") - strlen("ancdef"))  // 无符号减无符号 还是无符号整型
    // {
    //     printf("> \n");
    // }

    // else
    // {
    //     printf(" < \n");
    // }

// 模拟实现strlen
    // char ch[] = "abcdef"; 
    // size_t n = my_strlen(ch);
    // printf("%u \n", n);

// strcpy 字符串复制  遇到斜杠零就结束了 斜杠零也拷进去了
    // char name[20] = {0};
    // // 放张三到里面
    // // strcpy(name,"zhangsan");
    // // name = "abcdefg"  数组名就是首地址

    // char ch[] = {'l','i', 'c'};
    // // strcpy(name, ch); // 这里面不知道什么时候有斜杠零
    // printf("%s \n", name);

    // // 注意拷贝的时候注意越界

    // // 拷贝的目标可以变
    // char* p = "abcdef";
    // char arr3[] = "bit";
    // // strcpy(p,arr3);

// 字符串拷贝模拟实现
    // char arr1[] = {"abcdef"};
    // char arr2[20] ={0};
    // my_strcpy(arr2,arr1);
    // printf("%s ",arr2);

// strcat字符串追加 字符串拼接
    char arr1[20] = "hello";
    my_strcat(arr1,"world");
    printf("%s \n",arr1);







    return  0;
}