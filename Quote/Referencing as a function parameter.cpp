#include <iostream>
/* 值传递 */
void MySwap01(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
    std::cout << a <<"\n"<< b << "\n";
}
/* 地址传递 */
void MySwap02(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
    std::cout << a <<"\n"<< b << "\n";
}
/* 引用传递 */
void MySwap03(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
    std::cout << a <<"\n"<< b << "\n";
}
/* 交换函数 */
int main(void)
{
    using namespace std;
    int a = 10,b = 20;
    MySwap01(a,b);
    MySwap02(&a,&b);
    MySwap03(a,b);

}