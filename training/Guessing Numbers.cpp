#include <iostream>
#include <cstdlib>
// rand() % 100 + 1
#include <ctime>
// srand((unsigned int)time(NULL))
int main(void)
{
    using namespace std;
    srand((unsigned int)time(NULL));
    // 添加随机数种子a 作用:利用当前系统时间生成随机数，防止每次随机数都一样
    int num = rand() % 100 + 1;
    // 系统生成随机数 注:rand()%100为0~99
    int val, test = 0;
    while (test = 1)
    {
        cin >> val;
        if (val > num)
        {
            cout << "Guess too much"
                 << "\n";
        }
        else if (val < num)
        {
            cout << "Guess too small"
                 << "\n";
        }
        else
        {
            cout << "right";
            break;
        }
    }
}