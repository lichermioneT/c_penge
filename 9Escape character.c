#include<stdio.h>
#include<string.h>
int main()
{
// 转义字符
    printf("11\n11");    // \n换行
    printf("\a");        // \a win下面的蜂鸣声音
    printf("abc\0abc");  // \0字符串的结束标志
    printf("%c\n",'\''); //  \'   单个字符打印
    printf("%c\n",'\"'); // \""   单个字符打印
    printf("\"\n");
    printf("abc\\0abc");  // \\0转义成 \0
    printf("aa\ta");
    printf("\naa\\ta");
    printf("\nabc\\nabc");
    printf("%d\n",'\130');
    // \ddd  \xdd  ddd和xdd是一个字符
    printf("%c\n",'\130');
    printf("%c\n",'\x69');
// ASCII编码 0-127
    printf("%d\n",strlen("abcde "));
    printf("%d\n",strlen("c:\test\628\test.c"));  // 八进制里面没有8888888


// 三字母词 
// \? 语法还是存在，但是已经不常用了
// ??( --> [
// ??) --> ]
//    printf("%d\n",11);
//    printf("%c\n",'w'); 
//    printf("%s\n","www");
//    float f = 3.14f;      // float 类型，使用 f 后缀表示浮点常量为 float 类型
//    double d = 3.14159;   // double 类型，默认为 double 类型
//    printf("%f\n",f);
//    printf("%lf",d);


    return 0;
}