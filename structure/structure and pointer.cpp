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
    /* 1.创建学生建构变量 */
    inflatable student{"张三", 18, 100};
    /* 2.通过指针指向该结构体变量 */
    inflatable *p = &student;
    /* 通过指针访问结构体变量中的数据 */
    cout << p->name << "\t" << p->age << "\t" << p->score << "\n";
}