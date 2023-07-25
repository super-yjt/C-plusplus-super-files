#include <iostream>
#include <string>
// 全局变量
int g_a = 10, g_b = 10;
const int c_g_a = 10, c_g_b = 10;
int main(void)
{
    using namespace std;
    // 局部变量
    int a = 10, b = 10;
    // 静态变量
    static int s_a = 10, s_b = 10;
    // 常量:
    // 字符串常量
    string t_a = "Hello world", t_b = "Fuck world";
    // const修饰全局变量
    // const修饰局部变量
    const int c_l_a = 10, c_l_b = 10;
    //-------------------------------------------------
    cout << "局部A:\t" << (int)&a << "\n";
    cout << "局部B:\t" << (int)&b << "\n";
    cout << "全局g_A:\t" << (int)&g_a << "\n";
    cout << "全局g_B:\t" << (int)&g_b << "\n";
    cout << "静态s_A:\t" << (int)&s_a << "\n";
    cout << "静态s_B:\t" << (int)&s_b << "\n";
    cout << "字符串常量t_A:\t" << (int)&t_a << "\n";
    cout << "字符串常量t_B:\t" << (int)&t_a << "\n";
    cout << "全局常量c_g_A:\t" << (int)&c_g_a << "\n";
    cout << "全局常量c_g_B:\t" << (int)&c_g_b << "\n";
    cout << "局部常量c_g_A:\t" << (int)&c_l_a << "\n";
    cout << "局部常量c_g_B:\t" << (int)&c_l_b << "\n";
}