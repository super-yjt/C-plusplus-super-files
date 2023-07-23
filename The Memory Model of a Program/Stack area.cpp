#include <iostream>
/* 栈区的数据由编译器管理或释放 */
/* 不要返回局部变量地址 */
int *func()//形参也会放在栈区
{
    int a = 10;
    return &a;
}
int main(void)
{
    using namespace std;
    int *p = func();
    cout << *p << endl;//第一次正常输出10
    cout << *p << endl;//第二次输出错误
}
/* 执行完栈上数据后释放，第一次编译器保留，第二次不再保留 */