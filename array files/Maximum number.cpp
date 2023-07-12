#include <iostream>
int main(void)
{
    using namespace std;
    int max = 0;
    int arr[5] = {320, 400, 50, 30, 20};
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max:" << max;
}