#include <iostream>
#include <string>
struct student
{
    std::string name;
    int age;
    int score;
};
void printStudent(student stu)
{
    /* 修饰形参 */
    std::cout << stu.name << "\t" << stu.age << "\t" << stu.score << "\n";
}
void printStudent_2(student *p)
{
    /* 修饰实参 */
    std::cout << p->name << "\t" << p->age << "\t" << p->score << "\n";
}
int main(void)
{
    using namespace std;
    student stu{"张三", 18, 100};
    printStudent(stu);
    printStudent_2(&stu);
}