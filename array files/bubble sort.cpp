#include <iostream>
int main(void)
{
    using namespace std;
    // 冒泡排序
    int arr[9] = {2,4,0,5,7,1,3,8,9};
    cout << "排序前:";
    for (int i = 0; i <= 9; i++)
    {
        cout << arr[i] << "\t";
    }
    // 总共排序数为 元数个数-1
    cout<<endl;
    for (int i = 0; i < 9 - i; i++)
    {
        // 内层循环对比 次数 = 元数个数-当前轮数 - 1
        for (int j = 0; j < 9 - i - 1; j++)
        {
            // 如果第一i个数字比第二个数字大，交换两数
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"排序后:";
    for (int i = 0; i <= 9; i++)
    {
        cout << arr[i] << "\t";
    }
}
