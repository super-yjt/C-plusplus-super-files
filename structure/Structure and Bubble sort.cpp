#include<iostream>
#include<string>
struct Hero
{
    std::string name;
    int age;
    std::string sex;
};
void bubbleSort(Hero hArray[],int len)
{
    for (int i = 0; i < len - i; i++)
    {
        // 内层循环对比 次数 = 元数个数-当前轮数 - 1
        for (int j = 0; j < len - i - 1; j++)
        {
            // 如果第一i个数字比第二个数字大，交换两数
            if (hArray[j].age > hArray[j + 1].age)
            {
                int temp = hArray[j].age;
                hArray[j].age =hArray[j + 1].age;
                hArray[j + 1].age = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        std::cout<<hArray[i].name<<"\t"<<hArray[i].age<<"\t"<<hArray[i].sex<<"\n";
    }
}
int main(void)
{
    using namespace std;
    Hero hArray[5] = {
        {"张飞",23,"男"},
        {"刘备",20,"男"},
        {"关羽",30,"男"},
        {"貂蝉",18,"女"},
        {"赵云",25,"男"},
    };
    cout<<"排序前"<<"\n";
    int len = sizeof(hArray) / sizeof(hArray[0]);
    for(int i = 0;i<len;i++)
    {
        cout<<hArray[i].name<<"\t"<<hArray[i].age<<"\t"<<hArray[i].sex<<"\n";
    }
    cout<<"排序后"<<"\n";
    bubbleSort(hArray,len);
}