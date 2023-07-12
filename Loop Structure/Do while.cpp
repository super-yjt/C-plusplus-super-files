#include <iostream>
int main(void)
{
    using namespace std;
    int num = 0, num2 = 0;
    // do while
    do
    {
        cout << num << "\n";
        num++;
    } while (num < 10);
    // 先执行循环语句在判断条件
    // or while
    cout << endl;
    while (num2 < 10)
    {
        cout << num2 << "\n";
        num2++;
    }
}