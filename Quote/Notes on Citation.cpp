#include <iostream>
int main(void)
{
    using namespace std;
    int a = 10;
    int &b = a;
    /* 引用必须初始化 */
    // int &b;   :错误代码
    /* 引用初始化后，就不可以更改 */
    int c = 20;
    b = c;
    //赋值而不是更改
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}