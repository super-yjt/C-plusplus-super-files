#include <iostream>
#include <string>
struct student
{
    std::string name;
    int age;
    int score;
};
void printStudent(const student *p)
{
    /* 可以减少内存空间 */
    /* 修饰实参 */
    // p->age = 20;
    std::cout << p->name << "\t" << p->age << "\t" << p->score << "\n";
}
int main(void)
{
    using namespace std;
    student stu{"张三", 18, 100};
    printStudent(&stu);
}