#include<stdio.h>
int main()
{

// 初始化 判断 调整循环 放在一起的for循环的
// 注意while循环跳出 判断条件会不会改变
// 循环变量不要再for循环里面改变
// break直接结束一层循环！！！
    // int i = 0;
    // for(i = 0; i < 10; i++){
    //     if(i == 5)
    //         continue;   // 不会死循环的  判断条年在上面
    //     printf("%d\n", i);
      
    // }

// 循环变量采用前面闭后开 尤其在数组里面
// 在这里面不是绝对的
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int i = 0;
    // for(i = 0; i < 10; i++){
    //     printf("%d\n", arr[i]);
    // }

// 建议不要省略
// for循环判断省略的话 判断恒成立的
    // for(;;){
    //     printf("hehe\n");
    // }

    // int i = 0;
    // for(; i < 10; i++){
    //     printf("hehehe\n");
    // }

    // int i = 0;
    // int j = 0;
    // for(i = 0; i < 10; i++){
    //     for(j = 0; j < 10; j++){
    //         printf("hehe\n");
    //     }
    // }

    // int i = 0;
    // int j = 0;
    // for(; i < 10; i++){
    //     for(; j < 10; j++){   // 循环几次 只是打印第一次
    //         printf("hehe\n");
    //     }
    // }

// c99和c++里面 支持这个语法的  for循环里面初始化循环变量     
    for(int i = 0; i < 10; i++)
    {
        printf("hehe\n");
    }










    return 0;
}