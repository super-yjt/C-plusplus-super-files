#include <iostream>
void func()
{
    std::cout << "hello world\n";
}
void func(int a)
{
    std::cout << "hello world !\n";
}
void func(double a)
{
    std::cout << "hello world !!\n";
}
void func(double a, int b)
{
    std::cout << "hello world !!!\n";
}
void func(int a, double b)
{
    std::cout << "hello world !!!\n";
}
// 可以让函数名相同
// 1.必须在同一个作用域下
// 2.函数名称相同
// 3.函数的参数类型，个数，顺序不同
// 4.返回值不可以作为函数重载的条件
int main(void)
{
    using namespace std;
    func();
    func(10);
    func(9.9);
    func(10, 9.9);
    func(9.9, 10);
}