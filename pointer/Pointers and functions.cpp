#include <iostream>
void swap02(int *p, int *p2)
{
    int temp = *p;
    *p = *p2;
    *p2 = temp;
    std::cout << "p : " << p << "\n"
              << "*p :" << *p << "\n"
              << "p2:" << p2 << "\n"
              << "*p2 :" << *p2 << "\n";
}
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a : " << a << "\n"
              << "b:" << b << "\n";
}
int main(void)
{
    using namespace std;
    int a = 10, b = 20;
    swap01(a, b);
    swap02(&a, &b);
}