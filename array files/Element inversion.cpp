#include <iostream>
int main(void)
{
    using namespace std;
    int arr[5] = {1,3,2,5,4};
    cout << "逆置前的数据"
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<"逆置后:"<<"\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}