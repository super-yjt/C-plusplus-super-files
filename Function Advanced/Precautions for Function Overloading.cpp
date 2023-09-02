#include <iostream>
int func(int &a)
{
    std::cout << "func()\n";
}
int func(const int &a)
{
    std::cout << "func() !\n";
}
void func_2(int a, int b = 10)
{
    std::cout << "func_2";
}
void func_2(int a)
{
    std::cout << "func_2 !";
}
int main(void)
{
    int a = 10;
    func(a);  // func()
    func(10); // func()!
    // func_2(10);
}
