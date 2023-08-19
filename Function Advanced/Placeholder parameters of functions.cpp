#include <iostream>
void func(int a, int)
{
    std::cout << "hello world\n";
}
int main(void)
{
    using namespace std;
    cout << func(10, 10);
    // cout << func(10);
}