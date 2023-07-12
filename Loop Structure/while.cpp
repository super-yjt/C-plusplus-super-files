#include <iostream>
int main(void)
{
    using namespace std;
    int num;
    // for
    for (num = 0; num <= 10; num++)
    {
        cout << num
             << "\n";
    }
    // or while
    num = 0;
    while (num < 10)
    {
        num++;
        cout << num
             << "\n";
    }
}