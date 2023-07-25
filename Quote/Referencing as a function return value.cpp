#include <iostream>
/* 引用做返回值 */
/* 不要返回局部变量引用 */
int &test()
{
    int a = 10;
    return a;
}
int &test_2()
{
    static int a = 10;
    return a;
}
int main(void)
{
    using namespace std;
    /* 返回局部变量，存放栈区，会被内存释放 */
    int &ref = test();
    cout << ref << "\n";
    cout << ref << "\n";
    cout << ref << "\n";
    cout << ref << "\n";
    cout << ref << "\n";
    /* 返回全局变量，程序运行完后，被释放 */
    int &ref_2 = test_2();
    cout << ref_2 << "\n";
    cout << ref_2 << "\n";
    cout << ref_2 << "\n";
    /* 如果函数返回值是引用，那么这个函数可以作为左值 */
    test_2() = 1000;
    cout << ref_2 << "\n";
    cout << ref_2 << "\n";
    cout << ref_2 << "\n";
}