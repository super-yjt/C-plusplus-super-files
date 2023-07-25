#include <iostream>
int *func()
{
    /* new int ( ) */
    /* 指针本质也是局部变量，放在栈区 */
    int *p = new int(10);
    return p;
}
int main(void)
{
    /* 在堆区开辟数据 */
    using namespace std;
    int *p = func();
    cout << *p << "\n";
    cout << *p << "\n";
    cout << *p << "\n";
    cout << *p << "\n";
    /* 无论打印多少次数据不会出错 */
}