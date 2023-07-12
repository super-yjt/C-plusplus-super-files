#include <iostream>
#include <string>
struct inflatable
{
    std::string name;
    int age;
    int score;
};
int main(void)
{
    using namespace std;
    struct inflatable arr[3]{{"张三", 18, 100}, {"李四", 17, 90}, {"王五", 19, 90}};
    for (int i = 0; i < 3; i++)
    {

        cout << arr[i].name << "\t"
             << arr[i].age << "\t"
             << arr[i].score << "\t\n";
    }
}
