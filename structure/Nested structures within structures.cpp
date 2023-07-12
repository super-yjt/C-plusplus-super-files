#include <iostream>
#include <string>
struct student
{
    std::string name;
    int age;
    int score;
};
struct teacher
{
    std::string name;
    std::string id;
    int age;
    struct student stu;
};

int main(void)
{
    using namespace std;
    teacher tea{"老王", "A0AaBA08788", 40, "小王", 18, 100};
    cout << tea.name << "\t" << tea.id << "\t" << tea.age << "\n"
         << tea.stu.age << "\t" << tea.stu.name << "\t" << tea.stu.score << "\n";
}