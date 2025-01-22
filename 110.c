#include<stdio.h>


int test(const  char* str)
{   
    printf("test()\n");
    return 0;
}

void menu()
{  
    printf("0   exit\n");
    printf("1  add\n");
    printf("2 sub\n");
    printf("3  mul\n");
    printf("4  div\n");
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

// 函数指针还是挺厉害的哈
void calc(int(*pf)(int, int))
{
    int x = 0;
    int y = 0;
    printf("请输入两个操作数\n");
    scanf("%d%d",&x, &y);
    int ret =  pf(x, y);
    printf("%d \n",ret);
}


int main()
{


// 指针数组
    // int* arr[10] = {0};
    // // int** p = arr; // 二级指针
    // char* arr2[2] = {0};
    // double arr3[3] = {33.2};
    // float arr4[4] = {0};

// 数组指针
    // int* (*parr)[10] = &arr;
    // char* (*parr2)[2] = &arr2;
    // double(*parr3)[3] = &arr3;
    // char (*parr4)[4] = &arr4;

// 函数指针
    // 函数指针指向函数
    // 里面存放函数的地址

    // printf("%p\n",test);
    // printf("%p\n",&test);

    // int(*pf)(const char*) = test; // pf等价test
    // int(*pf)(const char*) = &test; // pf等价test

    // pf是函数的地址
    // test也是函数的地址
    // test("a");

    // 有朝一日用到函数

    // pf("abcde");
    // // (*pf)("abcde");
    // (**********pf)("abcde");

// 为什么使用函数指针

// 函数指针数组
// 写一个计算器
// 加法 减法 乘法 除法
    int input = 0;
    // int x = 0;
    // int y = 0;
    // int ret = 0;
    do
    {
        menu();
        printf("请选择>");
        scanf("%d",&input);
        // printf("请输如两个整数\n");
        // scanf("%d%d", &x, &y);
        switch(input)
        {
            case 1:
                calc(add);

                // printf("请输如两个整数\n");
                // scanf("%d%d", &x, &y);
                // ret = add(x, y);
                // printf("%d\n",ret);
                break;
            case 2:
                calc(sub);

                // printf("请输如两个整数\n");
                // scanf("%d%d", &x, &y);
                // ret = sub(x, y);
                // printf("%d\n",ret);
                break;
            case 3:
                calc(mul);

                // printf("请输如两个整数\n");
                // scanf("%d%d", &x, &y);
                // ret = mul(x, y);
                // printf("%d\n",ret);
                break;
            case 4:
                calc(div);

                // printf("请输如两个整数\n");
                // scanf("%d%d", &x, &y);
                // ret = div(x, y);
                // printf("%d\n",ret);
                break;
            case 0:
                printf("已经退出了\n");
                break; 
            default:
                printf("选择错误\n");
                break;

        }

    } while (input);
    



















    return 0;
}