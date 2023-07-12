#include <iostream>
#include <string>
void address()
{
    std::cout << "Hubei"
              << "\t"
              << "Wuhan"
              << "\n";
    std::cout << ":)";
}
struct inflatable
{
    std::string name;
    double height;
    double weight;
};
int main(void)
{
    using namespace std;
    double height_work = 1.88, weight_work = 90;
    inflatable Myself{"YangJingYian", height_work, weight_work};
    cout << "Myself:" << Myself.name << "\t"
         << Myself.height << "\t"
         << Myself.weight << "\n";
    cout << "Nickname:"
         << "Desdenmora"
         << "\n";
    address();
}