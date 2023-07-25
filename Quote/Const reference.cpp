#include <iostream>
void func(const int &a)
{
    //a = 1000;
    std::cout << a << "\n";
}
int main(void)
{
    using namespace std;
    int a = 10;
    int &ref = a;
    cout << ref << "\n";
    /* 引用必须引用合法的内存空间 */
    const int &ref_2 = 10;
    /*
        int temp = 10;
        const int &ref = temp;
    */
    // ref_2 = 20;变为只读不可修改
    cout << ref_2 << "\n";
    int temp = 100;
    func(temp);
}