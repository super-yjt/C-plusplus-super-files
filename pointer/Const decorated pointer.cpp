#include <iostream>
int main(void)
{
    using namespace std;
    int a = 100;
    int *const p = &a;
    cout << *p << endl;
    int b= 10, *const p2 = &b;
    *p2 = 100;
    cout << p2 << "\n"
         << *p2;
}