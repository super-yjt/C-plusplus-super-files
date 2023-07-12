#include <iostream>
int main(void)
{
    using namespace std;
    int b, c, d;
    for (int a = 1; a <= 100; a++)
    {
        if (a % 100 == 7)
        {
            cout << a << "\t"
                 << "knock"
                 << "\n";
        }
        else if (a % 10 == 7)
        {
            cout << a << "\t"
                 << "knock"
                 << "\n";
        }
        else if (a % 7 == 0)
        {
            cout << a << "\t"
                 << "knock"
                 << "\n";
        }
    }
    cout << endl;
}
