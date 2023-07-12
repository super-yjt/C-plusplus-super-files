#include <iostream>
int main(void)
{
    using namespace std;
    int /*int 类一个四字节*/ arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 十个元素
    cout << "整个元素所占字节:" << sizeof(arr) << "\n";                 // 40字节
    cout << "每个元素所占字节:" << sizeof(arr[0]) << "\n";              // 4字节
    cout << "数组元素个数:" << sizeof(arr) / sizeof(arr[0]) << "\n";
    /* 数组的首地址 */
    cout << "数组的首地址:" << (int)arr << "\n";
    cout << "数组中第一个元素的地址:" << (int)&arr[0];
}