#include <iostream>
int main(void)
{
    using namespace std;
    int score;
    cin >> score;
    cout << "score:" << score << "\n";
    switch (score)
    {
    case 10:
        cout << "best"
             << "\n";
        break; // 退出当前分支
    case 9:
        cout << "best"
             << "\n";
        break;
    case 8:
        cout << "great"
             << "\n";
        break;
    case 7:
        cout << "great"
             << "\n";
        break;
    case 6:
        cout << "good"
             << "\n";
        break;
    default:
        cout << "not good";
        break;
        // switch 缺点：只能是整形或字符型，不可以是一个区间
        // 优点：效率高
    }
}