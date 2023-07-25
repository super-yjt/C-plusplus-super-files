#include <iostream>
int main(void)
{
    /* 引用，好比起别名 */
    using namespace std;
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}