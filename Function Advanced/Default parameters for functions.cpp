#include <iostream>
/* 语法:函数名(参数 = 默认值) */
int func(int a = 10, int b = 20, int c = 30)
{
    return a + b + c;
}
int func_2(int a, int b = 20, int c = 30)
{
    return a + b + c;
}
int fun_3(int a, int b, int c)
{
    return a + b + c;
}

// 错误1
// int fun_3(int a, int b = 20, int c)
// {
//     return a + b + c;
// }
/* 注意事项 1.如果某个位置有了默认值，那么这个位置往后，从左到右必须有默认值 */
/* 注意事项 2.如果函数声明有默认参数，则函数的实现就不能有默认参数了 */
int main(void)
{
    using namespace std;
    cout << func() << "\n";
    cout << func_2(10) << "\n";
    cout << func_2(10, 30) << "\n";
    cout << func_4()<<"\n";
    /* 当自己传了数据便用自己的数据，如果没有。用默认值 */
}
int func_4(int a = 10,int b = 20);
/* 两个中只能有一个有 */
int func_4(int a/*  = 10 */,int b/*  = 20 */)
{
    return a + b;
}
