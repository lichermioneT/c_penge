#include<stdio.h>

// 函数名就是地址

int test(const char* str)
{
    printf("test()\n");
    return 0;
}

typedef unsigned int uint;
typedef void(*pf_t)(int);  // 把void(*)int类型重命名位pf_t

void menu(void)
{
    printf("###############################\n");
    printf("#######1.add  2.sub############\n");
    printf("#######3.nul  4.div############\n");
    printf("#######0.exit   ###############\n");
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

// 回调函数  减少重复的代码实现
// 函数指针
void calc(int (*pf)(int, int))
{
    int y = 0;
    int x = 0;
    int ret =0;
    printf("亲输入两操作数\n");
    scanf("%d%d",&x, &y);
    ret = pf(x, y);  // 差异写在上面一起的
    printf("%d",ret);
}


int main()
{
    
    // 指针数组
    int* arr[4];
    char* ch[5];
    int** p = arr;
    // 数组指针
    int arr2[5];
    int (*pa)[5]= &arr2;

    char* arr3[6];
    char* (*p3)[6]= &arr3;  // 添加括号就是为了 不然它成为指针数组

    // 函数指针 也是指针指向函数的指针
    // printf("%p\n",test);
    // printf("%p\n",&test);  函数就是地址

    // int (*pf)(const char*) = test;
    // (*pf)("abc"); // 函数调用
    // test("abc");  // pf == test
    // pf("abc");  // pf == test

    // ( *(void(*)())0 ) ();   
    // c陷阱和缺陷
    /*
        以上的代码是一次函数调用 调用的是0作为地址处的函数
        1.把0强制类型转换为：无参，返回类型是void的函数的地址
        2.调用0地址处的这个函数
    */
    // void(*)() 函数指针类型
    // (void(*)()) 强制类型转换
    // (void(*)())0 强制类型转换 函数地址
    // (*(void(*)())0)() 指针函数的调用 

    // void(* signal(int, void(*)(int)))(int);
    // pf_t signal(int, pf_t);
    // 声明的signal函数第一个参数类型是int,第二个参数类型是函数指针 改函数指针参数是int 返回类型是void


// 函数指针的用途
    /*
    计算器实现加减乘除
    */
   int input = 0;

   do
   {
    menu();
    printf("请选择\n");
    scanf("%d", &input);


    switch(input)
    {
        case 1:
            calc(add);
            break;
        case 2:
            calc(sub);
            break;
        case 3:
            calc(mul);
            break;
        case 4:
            calc(div);
            break;
        case 0:
            printf("退出计算器");
            break;
        default:
            printf("选择错误");
            break;

   }} while (input);
   













    return 0;
}