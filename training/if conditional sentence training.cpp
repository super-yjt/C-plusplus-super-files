#include <iostream>
int main(void)
{
    using namespace std;
    int a, b, c;
    cin >> a >> b >> c;
    //"&&"或
    //"||"且
    if (a > b && a > c)
    {
        cout << "a:" << a << "\n";
    }
    if (b > a && b > c)
    {
        cout << "b:" << b << "\n";
    }
    if (c > a && c > b)
    {
        cout << "c:" << c << "\n";
    }
}
