#include <iostream>
int *func()
{
    int *p = new int(10);
    return p;
}
void test01()
{
    int *p = func();
    std::cout << *p << "\n";
    std::cout << *p << "\n";
    std::cout << *p << "\n";
    // 释放堆区数据 delete
    delete p;
    // std::cout<<*p<<"\n";
    // 内存已经被释放,再次访问为非法操作
}
void test02()
{
    // 创建一个数组,在堆区
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    for(int i = 0;i<10;i++)
    {
        std::cout<<arr[i]<<"\n";
    }
    delete arr;
}
int main(void)
{
    using namespace std;
    test01();
    test02();
}