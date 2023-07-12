#include <iostream>
int main(void)
{
    using namespace std;
    int a, b, c, d;
    for (a = 0; a <= 1000; a++)
    {
        b = a / 100;
        c = a / 10 % 10;
        d = a % 10;
        if (b * b * b + c * c * c + d * d * d == a)
        {
            cout << a << "\n";
        }
    }
}