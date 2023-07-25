#include <iostream>
/* 引用的本质为指针常量 */
void func(int &ref)
{
    ref = 100;
    /* *ref = 100 */
    std::cout << ref << "\n";
}
int main(void)
{
    using namespace std;
    int a = 10;
    int &ref = a;
    /* 转化为 */
    /* int *const ref = &a; */
    ref = 20;
    /* *ref = 20; */
    cout << a << "\n";
    cout << ref << "\n";
    func(a);
}