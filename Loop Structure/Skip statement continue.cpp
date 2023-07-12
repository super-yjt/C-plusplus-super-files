#include <iostream>
int main(void)
{
    using namespace std;
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << "\t";
    }
}