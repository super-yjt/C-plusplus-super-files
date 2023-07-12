#include <iostream>
#include <string>
#include <stdlib.h>
#define MAX 1000
using namespace std;
void showMenu()
{
    cout << "*******************************\n"
         << "*********1.添加联系人**********\n"
         << "*********2.显示联系人**********\n"
         << "*********3.删除联系人**********\n"
         << "*********4.查找联系人**********\n"
         << "*********5.修改联系人**********\n"
         << "*********6.清空通讯录**********\n"
         << "*********0.推出通讯录**********\n"
         << "*******输入数字使用功能********\n"
         << "*******************************\n";
}
struct Person
{
    string m_name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    Person personarray[MAX];
    int m_Size;
};
void addPerson(Addressbooks *abs)
{
    while (true)
    {
        if (abs->m_Size == MAX)
        {
            cout << "通讯录已满\n";
            return;
        }
        else
        {
            /* 姓名 */
            string name;
            cout << "请输入姓名：";
            cin >> name;
            abs->personarray[abs->m_Size].m_name = name;
            /* 性别 */
            cout << "请输入性别:";
            cout << "(男:1  "
                 << "女:2):\t";
        }
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personarray[abs->m_Size].m_Sex = sex;
                break;
            }
            else
            {
                cout << "输入错误，请从新输入\n";
                continue;
            }
        }

        /* 年龄 */
        int age = 0;
        cout << "请输入年龄：\t";
        while (true)
        {
            cin >> age;
            if (age >= 0 && age <= 150)
            {
                abs->personarray[abs->m_Size].m_Age = age;
                break;
            }
            else
            {
                cout << "请输入合理范围内的的年龄(0~150)\n";
                continue;
            }
        }
        /* 电话 */
        string phone;
        cout << "请输入电话号码:\t";
        cin >> phone;
        abs->personarray[abs->m_Size].m_Phone = phone;
        /* 家庭住址 */
        string address;
        cout << "请输入家庭住址:\t";
        cin >> address;
        abs->personarray[abs->m_Size].m_Addr = address;
        // 更新通讯录
        abs->m_Size++;
        string exit;
        cout << "恭喜你添加成功\n"
             // system("pause");
             << "输入任意键退出\n";
        cin >> exit;
        system("clear");
        break;
    }
}
/*显示联系人 */
void showPerson(Addressbooks *abs)
{

    if (abs->m_Size == 0)
    {
        cout << "通讯录为空\n";
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名:" << abs->personarray[i].m_name << "\t\t";
            cout << "性别:" << (abs->personarray[i].m_Sex == 1 ? "男" : "女") << "\t\t";
            cout << "年龄:" << abs->personarray[i].m_Age << "\t\t";
            cout << "电话:" << abs->personarray[i].m_Phone << "\t\t";
            cout << "住址:" << abs->personarray[i].m_Addr << "\n";
        }
    }
    string exit;
    cout // system("pause");
        << "输入任意键退出\n";
    cin >> exit;
    system("clear");
}
/* 检测联系人是否在通讯录内 */
int isExist(Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personarray[i].m_name == name)
        {
            return i;
        }
    }
    return -1;
}
/* 删除联系人 */
void deletPerson(Addressbooks *abs)
{
    cout << "请输入你要删除的联系人:\t";
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret; i < abs->m_Size; i++)
        {
            abs->personarray[i].m_name = abs->personarray[i + 1].m_name;
            abs->personarray[i].m_Sex = abs->personarray[i + 1].m_Sex;
            abs->personarray[i].m_Age = abs->personarray[i + 1].m_Age;
            abs->personarray[i].m_Phone = abs->personarray[i + 1].m_Phone;
            abs->personarray[i].m_Addr = abs->personarray[i + 1].m_Addr;
        }
        cout << "删除成功\n";
        abs->m_Size--;
    }
    else
    {
        cout << "未找到联系人\n";
    }
    string exit;
    cout // system("pause");
        << "输入任意键退出\n";
    cin >> exit;
    system("clear");
}
/* 查找联系人 */
void findPerson(Addressbooks *abs)
{
    cout << "请输入您要查找人的名字:\t";
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "找到此人\n";
        cout << "姓名:" << abs->personarray[ret].m_name << "\t\t";
        cout << "性别:" << (abs->personarray[ret].m_Sex == 1 ? "男" : "女") << "\t\t";
        cout << "年龄:" << abs->personarray[ret].m_Age << "\t\t";
        cout << "电话:" << abs->personarray[ret].m_Phone << "\t\t";
        cout << "住址:" << abs->personarray[ret].m_Addr << "\n";
    }
    else
    {
        cout << "查无此人\n";
    }
    string exit;
    cout // system("pause");
        << "输入任意键退出\n";
    cin >> exit;
    system("clear");
}
void modifyPerson(Addressbooks *abs)
{
    cout << "请输入要修改的联系人的名字:\t";
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        /* 姓名 */
        string name;
        cout << "请输入修改后的姓名:\t";
        cin >> name;
        abs->personarray[ret].m_name = name;
        /* 性别 */
        int sex;
        cout << "请输入修改后的性别(男:1\t女:2):\t";
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personarray[ret].m_Sex = sex;
                break;
            }
            else
            {
                cout << "输入错误，请从新输入\n";
                continue;
            }
        }
        /* 年龄 */
        int age;
        cout << "请输入修改后的年龄:\t";
        cin >> age;
        abs->personarray[ret].m_Age = age;
        /* 电话 */
        string phone;
        cout << "请输入修改后的电话号码:\t";
        cin >> phone;
        abs->personarray[ret].m_Phone = phone;
        /* 家庭住址 */
        string address;
        cout << "请输入修改后的地址:\t";
        cin >> address;
        abs->personarray[ret].m_Addr = address;
        cout << "修改成功\n";
    }
    else
    {
        cout << "查无此人\n";
    }
    string exit;
    cout // system("pause");
        << "输入任意键退出\n";
    cin >> exit;
    system("clear");
}
void cleanPerson(Addressbooks *abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空\n";
    string exit;
    cout // system("pause");
        << "输入任意键退出\n";
    cin >> exit;
    system("clear");
}
int main(void)
{
    Addressbooks abs;
    abs.m_Size = 0;
    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            showPerson(&abs);
            break;
        case 3:
            deletPerson(&abs);
            break;
        case 4:
            findPerson(&abs);
            break;
        case 5:
            modifyPerson(&abs);
            break;
        case 6:
            cleanPerson(&abs);
            break;
        case 0:
            cout << "欢迎下次使用\n";
            return 0;
            system("pause");
            break;
        default:
            cout << "输入错误\n";
            break;
        }
    }
}
