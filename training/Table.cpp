#include <iostream>
int main(void)
{
    using namespace std;
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << b << "*" << a << "=" << a * b << "\t";
        }
        cout << endl;
    }
    cout << "\n";
}