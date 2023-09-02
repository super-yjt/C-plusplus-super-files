#include <iostream>
#include <string>
#define t_MAX 10 // 球队最大数量
#define p_MAX 12 // 球员最大数量
#define k_MAX 5  // 主力球员最大数量
using namespace std;
class plan
{
public:
    string c_time;   /* 比赛时间 */
    string c_team_c; /* 比赛具体内容 */
    string e_time;   /* 训练时间 */
    string o_time;   /* 休赛期 */
    string h_time;   /* 假期 */
    string s_time;   /* 特殊时期 */
    bool pl_size = false; /* 赛季计划 */
};
class player /* 单位球员信息 */
{
public:
    /* 属性 */
    string name;                /* 姓名 */
    int age;                    /* 年龄 */
    string Contact_information; /* 联系方式 */
};
class team /* 球队信息 */
{
public:
    player playerarray[p_MAX]; /* 创建一个最大值为12的包含球员的数组 */
    int p_size = 0;            /* 统计次数 */
    string t_name;             /* 球队名称 */
    plan t_plan;               /* 赛季计划 */
};
class m_team /* 球队最大值 */
{
public:
    team teamarray[t_MAX]; /* 创建一个最大值为10的包含球队的数组 */
    int t_size = 0;        /* 统计次数 */
};
void pause() /* 按下任意键退出 */
{
    cout << ":: Press Enter to continue...";
    cin.ignore();
    cin.get();
}
/* chatgpt的解释： */
/* 使用 cin.ignore() 函数忽略输入缓冲区中的所有字符。这样做是为了确保在按下回车键后，之前可能存在的其他输入被清除掉，避免对程序造成干扰。*/
/* 使用 cin.get() 函数等待用户按下回车键。这个函数会阻塞程序的执行，直到用户按下回车键才继续。这个过程中用户输入的内容（回车键）会被丢弃。*/
void Menu() /* 菜单 */
{
    /* 尝试了另一种菜单的设计，感觉比之前的好看一些 */
    cout << "::╭──────────────────────────────────────────────────────╮::\n"
         << "::|                         MENU                         |::\n"
         << "::|──────────────────────────────────────────────────────|::\n"
         << "::| 1.View registered teams                              |::\n"
         << "::| 2.Unregister a team that has already been registered |::\n"
         << "::| 3.Register a team                                    |::\n"
         << "::| 4.Arrange the team's season plan                     |::\n"
         << "::| 5.View team season plans                             |::\n"
         << "::| 0.End of use                                         |::\n"
         << "::|──────────────────────────────────────────────────────|::\n"
         << "::|             Input number usage function              |::\n"
         << "::╰──────────────────────────────────────────────────────╯::\n"
         << "::[Number]:_______ \b\b\b\b\b";
}
/* 最初想在一个函数中实现注销球队的功能，但是有点不方便，所以写了一个单独的查找球队的函数 */
int Detection(m_team &abs, string name)
{
    for (int i = 0; i < abs.t_size; i++)
    {
        if (abs.teamarray[i].t_name == name) /* 检测球队是否系统内 */
        {
            return i;
        }
    }
    return -1;
}
void R_team(m_team &abs) /* 查看球队以及球员 */
{
    cout << "\n";
    if (abs.t_size == 0) /* 如果球队数量为零 */
    {
        cout << ":: Unregistered team \n";
    }
    else if (abs.t_size > 0) /* 如果球队数量大于0 */
    {
        /* 输出内容为所有球队和球队中的球员 */
        for (int i = 0; i < abs.t_size; i++) /* 球队 */
        {
            for (int j = 0; j < abs.teamarray[i].p_size; j++) /* 球员 */
            {
                cout << ":: The " << j + 1 << " player of the number " << abs.teamarray[i].t_name << " team:\n"
                     << ":: Name: " << abs.teamarray[i].playerarray[j].name                                  /* 输出姓名 */
                     << "\n:: Age: " << abs.teamarray[i].playerarray[j].age                                  /* 输出姓名 */
                     << "\n:: Contact information : " << abs.teamarray[i].playerarray[j].Contact_information /* 输出联系方式 */
                     << "\n────────────────────────────────────────────────────────────────\n";
            }
        }
    }
    pause();
    system("clear");
}
void D_team(m_team &abs)
{
    if (abs.t_size == 0)
    {
        cout << ":: Unregistered team\n";
    }
    else if (abs.t_size > 0)
    {
        cout << ":: Please enter the team name : ";
        string t_name;
        cin >> t_name;
        if (t_name == "Golden_State_Warriors" || t_name == "GSW")
        {
            cout << ":: This is not your team\n";
        }
        else if (t_name == "Los_Angeles_Lakers" || t_name == "LAL")
        {
            cout << ":: You cannot view teams that are not affiliated with you\n";
        }
        else  
        {
            int ret = Detection(abs, t_name); /* 判断函数 */
            if (ret != -1)
            {
                if (abs.teamarray[ret].p_size > 0) /* 添加判断条件 */
                {
                    for (int i = 0; i < abs.teamarray[ret].p_size - 1; i++)
                    {
                        abs.teamarray[ret].playerarray[i].name = abs.teamarray[ret].playerarray[i + 1].name;                               /* 将后一个的名字覆盖前一个的 */
                        abs.teamarray[ret].playerarray[i].age = abs.teamarray[ret].playerarray[i + 1].age;                                 /* 将后一个的年龄覆盖前一个的 */
                        abs.teamarray[ret].playerarray[i].Contact_information = abs.teamarray[ret].playerarray[i + 1].Contact_information; /* 将后一个的联系方式覆盖前一个的 */
                        abs.teamarray[ret].p_size--;                                                                                       /* 球员减一 */
                    }

                    cout << ":: Delete successful\n";
                    abs.t_size--;
                }
                else
                {
                    cout << ":: No players found\n";
                }
            }
            else if (ret == -1)
            {
                cout << ":: No team found\n";
            }
        }
    }

    pause();
    system("clear");
}
void A_team(m_team &abs) /* 添加球员 */
{
    string Input_Content_name, Input_Team_name, Input_Team_C_i;
    int Input_Content_age;
    while (true) /* 循环 */
    {
        if (abs.t_size == t_MAX) /* 球队达到上限 */
        {
            cout << ":: The number of registered teams is full\n";
            break;
        }
        /* 大于最大值返回主函数 */
        if (abs.t_size < t_MAX) /* 小于最大值开始赋值 */
        {
            cout << ":: Please enter the team name : ";
            cin >> Input_Team_name;
            abs.teamarray[abs.t_size].t_name = Input_Team_name;
            cout << "\n";
            for (int i = 0; i < p_MAX; i++) /* 循环12次，给每个球员赋值 */
            {

                if (i < k_MAX) /* 主要球员 */
                {
                    cout << ":: Please enter the " << i + 1 << "'s key player's name:";
                    cin >> Input_Content_name;
                    abs.teamarray[abs.t_size].playerarray[i].name = Input_Content_name; /* 输入姓名 */
                    cout << ":: lease enter the " << i + 1 << "'s key player's age:";
                    cin >> Input_Content_age;
                    abs.teamarray[abs.t_size].playerarray[i].age = Input_Content_age; /* 输入年龄 */
                    cout << ":: Please enter the " << i + 1 << "'s key player's contact information:";
                    cin >> Input_Team_C_i;
                    abs.teamarray[abs.t_size].playerarray[i].Contact_information = Input_Team_C_i;
                    abs.teamarray[abs.t_size].p_size++; /* 球员加一 */
                    cout << "\n";
                }
                else if (i >= k_MAX) /* 替补 */
                {
                    cout << ":: Please enter the " << i + 1 - 5 << "'s substitute player's name:";
                    cin >> Input_Content_name;
                    abs.teamarray[abs.t_size].playerarray[i].name = Input_Content_name; /* 输入姓名 */
                    cout << ":: Please enter the " << i + 1 - 5 << "'s substitute player's age:";
                    cin >> Input_Content_age;
                    abs.teamarray[abs.t_size].playerarray[i].age = Input_Content_age; /* 输入年龄 */
                    cout << ":: Please enter the " << i + 1 - 5 << "'s substitute player's contact information:";
                    cin >> Input_Team_C_i;
                    abs.teamarray[abs.t_size].playerarray[i].Contact_information = Input_Team_C_i;
                    abs.teamarray[abs.t_size].p_size++; /* 球员加一 */
                    cout << "\n";
                }
            }
            abs.t_size++; /* 球队加一 */
            cout << ":: login was successful\n";
            pause();
            system("clear");
            break;
        }
    }
}
void P_team(m_team &abs)
{
    if (abs.t_size == 0)
    {
        cout << ":: Unregistered team\n";
    }
    else if (abs.t_size > 0)
    {
        cout << ":: Which team do you want to add to the plan : ";
        string t_name, p_c_time, p_c_team_c, p_e_time, p_o_time, p_h_time, p_s_time; /* 比较繁琐，不知道有没有更好的方式 */
        cin >> t_name;
        if (t_name == "Golden_State_Warriors" || t_name == "GSW")
        {
            cout << ":: This is not your team\n";
        }
        else if (t_name == "Los_Angeles_Lakers" || t_name == "LAL")
        {
            cout << ":: You cannot view teams that are not affiliated with you\n";
        }
        else
        {
            int ret = Detection(abs, t_name);
            if (ret != -1)
            {
                cout << "\n:: Please enter the competition time [year/month/day]: ";
                cin >> p_c_time;
                abs.teamarray[ret].t_plan.c_time = p_c_time; /* 比赛时间 */
                cout << "\n:: Please enter the name of the opposing team : ";
                cin >> p_c_team_c;
                abs.teamarray[ret].t_plan.c_team_c = p_c_team_c; /* 比赛具体内容 */
                cout << "\n:: Please enter the team training time [year/month/day----month/day] : ";
                cin >> p_e_time;
                abs.teamarray[ret].t_plan.e_time = p_e_time; /* 训练时间 */
                cout << "\n:: Please enter the off-season time [year/month/day----month/day] : ";
                cin >> p_o_time;
                abs.teamarray[ret].t_plan.o_time = p_o_time; /* 休赛期 */
                cout << "\n:: Please enter the holiday time [year/month/day----month/day] : ";
                cin >> p_h_time;
                abs.teamarray[ret].t_plan.h_time = p_h_time; /* 假期 */
                cout << "\n:: Please enter a special time [content/none] : ";
                cin >> p_s_time;
                if (p_s_time == "none" || p_s_time == "None")
                {
                    abs.teamarray[ret].t_plan.s_time = "None"; /* 特殊时期-none */
                    cout << "\n:: complete\n";
                }
                else
                {
                    abs.teamarray[ret].t_plan.s_time = p_s_time; /* 特殊时期-another */
                    cout << "\n:: complete\n";
                }
                abs.teamarray[ret].t_plan.pl_size = true;
            }
            else if (ret == -1)
            {
                cout << ":: No team found\n";
            }
        }
    }
    pause();
    system("clear");
}
void F_team(m_team &abs)
{
    if (abs.t_size == 0) /* 如果球队数量为零 */
    {
        cout << ":: Unregistered team \n";
    }
    else if (abs.t_size > 0) /* 如果球队数量大于0 */
    {
        cout << ":: Which team's season plan do you want to check : ";
        string t_name;
        cin >> t_name;
        if (t_name == "Golden_State_Warriors" || t_name == "GSW")
        {
            cout << ":: You cannot view teams that are not affiliated with you\n";
        }
        else if (t_name == "Los_Angeles_Lakers" || t_name == "LAL")
        {
            cout << ":: You cannot view teams that are not affiliated with you\n";
        }
        else
        {
            int ret = Detection(abs, t_name);
            if (abs.teamarray[ret].t_plan.pl_size == true)
            {
                if (ret != -1)
                {
                    cout << "\n:: competition time : "
                         << abs.teamarray[ret].t_plan.c_time; /* 比赛时间 */

                    cout << "\n::  opposing team : "
                         << abs.teamarray[ret].t_plan.c_team_c; /* 比赛具体内容 */

                    cout << "\n:: training time : "
                         << abs.teamarray[ret].t_plan.e_time; /* 训练时间 */

                    cout << "\n:: off-season time : "
                         << abs.teamarray[ret].t_plan.o_time; /* 休赛期 */

                    cout << "\n:: holiday time : "
                         << abs.teamarray[ret].t_plan.h_time; /* 假期 */

                    cout << "\n:: special time : "
                         << abs.teamarray[ret].t_plan.s_time; /* 特殊时期 */
                    cout << "\n";
                }
                else if (ret == -1)
                {
                    cout << ":: No team found\n";
                }
            }
            else if (abs.teamarray[ret].t_plan.pl_size == 0)
            {
                cout << ":: Season plan not yet planned\n";
            }
        }
    }
    pause();
    system("clear");
}
int main(void)
{
    m_team abs;
    abs.teamarray[0].t_name = "Golden_State_Warriors";
    /* 不可访问内容 */
    abs.teamarray[0].t_plan.c_time = "2023 / 08 / 27 ~2023 / 09 / 05";
    abs.teamarray[0].t_plan.e_time = "2023 / 09 / 10 ~2023 / 09 / 30";
    abs.teamarray[0].t_plan.o_time = "2023 / 10 / 01 ~2023 / 10 / 10";
    abs.teamarray[0].t_plan.h_time = "2023 / 12 / 24 ~2024 / 01 / 01";
    abs.teamarray[0].t_plan.s_time = "2023 / 11 / 15 ~2023 / 11 / 20";
    abs.teamarray[0].t_plan.c_team_c = "LAL";
    abs.teamarray[0].t_plan.pl_size = true;
    abs.teamarray[0].playerarray[0].name = "Stephen Curry";
    abs.teamarray[0].playerarray[0].age = 34;
    abs.teamarray[0].playerarray[0].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[1].name = "Klay Thompson";
    abs.teamarray[0].playerarray[1].age = 31;
    abs.teamarray[0].playerarray[1].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[2].name = "Chris Paul";
    abs.teamarray[0].playerarray[2].age = 38;
    abs.teamarray[0].playerarray[2].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[3].name = "Kevin Durant";
    abs.teamarray[0].playerarray[3].age = 33;
    abs.teamarray[0].playerarray[3].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[4].name = "Andrew Wiggins";
    abs.teamarray[0].playerarray[4].age = 26;
    abs.teamarray[0].playerarray[4].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[5].name = "Draymond Green";
    abs.teamarray[0].playerarray[5].age = 32;
    abs.teamarray[0].playerarray[5].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[6].name = "Kevon Looney";
    abs.teamarray[0].playerarray[6].age = 25;
    abs.teamarray[0].playerarray[6].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[7].name = "Jordan Poole";
    abs.teamarray[0].playerarray[7].age = 21;
    abs.teamarray[0].playerarray[7].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[8].name = "Moses Moody";
    abs.teamarray[0].playerarray[8].age = 19;
    abs.teamarray[0].playerarray[8].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[9].name = "James Wiseman";
    abs.teamarray[0].playerarray[9].age = 20;
    abs.teamarray[0].playerarray[9].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[10].name = "Nemanja Bjelica";
    abs.teamarray[0].playerarray[10].age = 33;
    abs.teamarray[0].playerarray[10].Contact_information = "secrecy";
    abs.teamarray[0].playerarray[11].name = "Andre Iguodala";
    abs.teamarray[0].playerarray[11].age = 37;
    abs.teamarray[0].playerarray[11].Contact_information = "secrecy";
    abs.teamarray[0].p_size = abs.teamarray[0].p_size + 12;
    abs.t_size++;
    abs.teamarray[1].t_name = "Los_Angeles_Lakers";
    /* 不可访问内容 */
    abs.teamarray[1].t_plan.c_time = "2023 / 09 / 01 ~2023 / 09 / 10";
    abs.teamarray[1].t_plan.e_time = "2023 / 09 / 15 ~2023 / 09 / 20";
    abs.teamarray[1].t_plan.o_time = "2023 / 08 / 01 ~2023 / 08 / 31";
    abs.teamarray[1].t_plan.h_time = "2023 / 12 / 20 ~2024 / 01 / 03";
    abs.teamarray[1].t_plan.s_time = "2023 / 11 / 25 ~2023 / 11 / 28";
    abs.teamarray[1].t_plan.c_team_c = "WSG";
    abs.teamarray[1].t_plan.pl_size = true;
    abs.teamarray[1].playerarray[0].name = "LeBron James";
    abs.teamarray[1].playerarray[0].age = 36;
    abs.teamarray[1].playerarray[0].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[1].name = "Anthony Davis";
    abs.teamarray[1].playerarray[1].age = 28;
    abs.teamarray[1].playerarray[1].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[2].name = "Russell Westbrook";
    abs.teamarray[1].playerarray[2].age = 32;
    abs.teamarray[1].playerarray[2].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[3].name = "Talen Horton-Tucker";
    abs.teamarray[1].playerarray[3].age = 20;
    abs.teamarray[1].playerarray[3].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[4].name = "Dwight Howard";
    abs.teamarray[1].playerarray[4].age = 35;
    abs.teamarray[1].playerarray[4].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[5].name = "Kendrick Nunn";
    abs.teamarray[1].playerarray[5].age = 26;
    abs.teamarray[1].playerarray[5].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[6].name = "Kent Bazemore";
    abs.teamarray[1].playerarray[6].age = 32;
    abs.teamarray[1].playerarray[6].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[7].name = "Malik Monk";
    abs.teamarray[1].playerarray[7].age = 23;
    abs.teamarray[1].playerarray[7].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[8].name = "Carmelo Anthony";
    abs.teamarray[1].playerarray[8].age = 37;
    abs.teamarray[1].playerarray[8].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[9].name = "Austin Reaves";
    abs.teamarray[1].playerarray[9].age = 22;
    abs.teamarray[1].playerarray[9].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[10].name = "Wayne Ellington";
    abs.teamarray[1].playerarray[10].age = 34;
    abs.teamarray[1].playerarray[10].Contact_information = "secrecy";
    abs.teamarray[1].playerarray[11].name = "Marc Gasol";
    abs.teamarray[1].playerarray[11].age = 36;
    abs.teamarray[1].playerarray[11].Contact_information = "secrecy";
    abs.teamarray[1].p_size = abs.teamarray[1].p_size + 12;
    abs.t_size++;
    string swap;
    int Input_Content;
    while (true)
    {
        Menu();               /* 菜单栏 */
        cin >> Input_Content; /* 输入选择 */
        switch (Input_Content)
        {
        case 1:
            R_team(abs); /* 查看球队 */
            break;
        case 2:
            D_team(abs); /* 注销球队 */
            break;
        case 3:
            A_team(abs); /* 添加球队 */
            break;
        case 4:
            P_team(abs); /* 添加赛季计划 */
            break;
        case 5:
            F_team(abs); /* 查看赛季计划 */
            break;
        case 0:
            cout << ":: Welcome to use it next time";
            return 0;
            pause();
            system("clear");
        default:
            cout << ":: input error\n"; /* 输入错误 */
            pause();
            system("clear");
            break;
        }
    }
}