#include <iostream>
// 必须掌握!!!
int main(void)
{
     /* *p指针，&a地址，指针中存放地址 */
    using namespace std;
    int a = 10, *p;
    p = &a;
    cout << "A的地址为:"
         << "\t" << &a << "\n";
    cout << "指针P为:"
         << "\t" << p << "\n";
    *p = 1000;
    cout << "*p ="
         << "\t" << *p/* 访问值 */ << "\n"
         << "p ="
         << "\t" << p /* 输出地址 */<< "\n";
}