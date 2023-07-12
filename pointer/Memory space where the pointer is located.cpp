#include <iostream>
int main(void)
{
    using namespace std;
    int a = 10, *p = &a;
    cout << "sizeof(int *):"
         << sizeof(int /* (double* float* char* string*)*/ *) << "字节";
    /* 64位操作系统占8字节,无论什么数据类型 */
}