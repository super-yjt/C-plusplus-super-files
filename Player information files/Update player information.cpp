#include <iostream>
#include <string>
void menu_player()
{
    std::cout << "::*************************"
              << "\n"
              << "::****1.Klay Thompson******"
              << "\n"
              << "::****2.Stephen Curry******"
              << "\n"
              << "::****3.Andrew Wiggins*****"
              << "\n"
              << "::****4.LeBron James*******"
              << "\n"
              << "::*************************"
              << "\n"
              << "::You can check the information of a player"
              << "\n";
    std::cout << "::Please chooose one"
              << "\n"
              << "::[name]:"
              << "__________"
              << "\b\b\b\b\b\b\b\b\b\b";
}
void menu()
{
    std::cout << "::Player information"
              << "\n";
    std::cout << "::******************"
              << "\n"
              << "::****1.Search******"
              << "\n"
              << "::****2.Register****"
              << "\n"
              << "::******************"
              << "\n";
    std::cout << "::[Search/Register]:"
              << "\n"
              << "::___________"
              << "\b\b\b\b\b\b\b\b\b\b\b";
}
void Klay()
{
    std::cout << "Klay Thompson (born February 8, 1990), nicknamed \"Buddha\" and \"Tang God\", and teammate Curry, known as the \"Splash Brothers."
              << "\n"
              << "born in Los Angeles, California, is an American men's basketball player, shooting guard, currently playing for the NBA's Golden State Warriors"
              << "\n"
              << "Klay Thompson was selected by the Warriors with the 11th pick in the first round of the 2011 NBA Draft. He won four NBA "
              << "\n"
              << "championships in his career, was named to the All-NBA Third Team twice, the All-Defensive Second Team once, and All-Star five times."
              << "\n"
              << "In 2014, he won the Spanish Basketball World Cup with the United States. In 2016, he won the Rio Olympic men's basketball "
              << "\n"
              << "championship with the United States. In June 2022, he won the 2021-22 NBA championship with the Golden State Warriors."
              << "\n"
              << "In July, he won the ESPY 2022 Best Comeback Award. On April 10, 2023, he won the NBA's 2022-23 three-point king with 301 three-pointers and 4.4 shots per game."
              << "\n";
}
void Curry()
{
    std::cout << "Stephen Curry was selected by the Warriors with the 7th pick in the first round of the 2009 NBA Draft "
              << "and has played for the Warriors for 15 seasons, averaging 24.6 points and 6.5 assists per game. "
              << "\n"
              << "He has won 4 NBA championships, 2 regular season MVPs, 1 All-Star AMVP, 1 Finals MVP, 2 scoring champions, 9 All-Stars, 9 starters, "
              << " 9 All-NBA titles, 2021 with 2,974 three-point shots, and was named the 75 stars in NBA history On May 19, 2023, he won the Kennedy Citizenship Award of the Professional Basketball Writers "
              << "\n"
              << "Association of America. On May 23, he won the 2022-23 Abdul-Jabbar Social Justice Champion Award.";
}
void Wiggins()
{
    std::cout << "On June 27 , 2014 , Andrew Wiggins was selected by the Cleveland Cavaliers with the first pick in the first round of the 2014 NBA Draft as the top pick. On August 24, "
              << "Wiggins was traded by the Cavaliers to the Minnesota Timberwolves wearing the number 22 jersey.  "
              << "\n"
              << "On February 14, 2015, Wiggins was named Rookie Challenge MVP.  On May 1, the NBA officially announced that Wiggins was named NBA Rookie of the Year for 2014-15. "
              << "\n"
              << "On February 7, 2020, the Timberwolves officially announced that they were trading Wiggins to the Golden State Warriors. "
              << "\n"
              << "On January 28, 2022, Wiggins was named to the 2021-22 All-Star Western Conference starting lineup.  On June 17, Wiggins won the NBA championship with the Warriors."
              << "\n";
}
void James()
{
    std::cout << "LeBron James officially joined the NBA with the first pick in the 2003 NBA Draft and played for the Cavaliers, Heat and Lakers, averaging 27.2 points,"
              << " 7.6 rebounds, and 7.4 assists per game during the NBA regular season. "
              << "\n"
              << " LeBron James has played in 20 NBA seasons, winning 4 championships, 4 Finals MVPs, 18 All-Star selections, and 19 All-NBA teams. In February 2023,"
              << " James won the NBA's all-time scoring championship with a career total of 38,390 points"
              << "\n";
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
    string choose, choose_2, choose_3, choose_4, choose_5, choose_6;
    inflatable klay{"Klay Thompson", 1.98, 99.8};
    inflatable curry{"Stephen Curry", 1.88, 84.0};
    inflatable wiggins{"Andrew Wiggins", 2.01, 89.0};
    inflatable james{"LeBron James", 2.06, 113.0};
    while (true)
    {
        menu();
        cin >> choose;
        system("clear");
        if (choose == "Search" || choose == "search")
        {
            cout << "\a";
            menu_player();
            string search;
            cin >> search;
            if (search ==
                    "Klay_Thompson" ||
                search ==
                    "Klay" ||
                search ==
                    "klay" ||
                search ==
                    "Thompson" ||
                search ==
                    "thompson" ||
                search ==
                    "klaythompson")
            {
                cout << "::name:" << klay.name
                     << "\t"
                     << "height:" << klay.height << "m"
                     << "\t"
                     << "weight:" << klay.weight << "kg"
                     << "\n";
                cout << "::Do you want to check his life?"
                     << "\n";
                cout << "::[Yes/No]"
                     << "\n";
                cout << "::____________"
                     << "\b\b\b\b\b\b\b\b\b\b\b\b";
                cin >> choose_2;
                system("clear");
                if (choose_2 == "Yes" || choose_2 == "yes")
                {
                    cout << "::brief introduction:"
                         << "\n";
                    Klay();
                }
                else if (choose_2 == "No" || choose_2 == "no")
                {
                    goto Flag;
                }
            }
            else if (search ==
                         "Stephen_Curry" ||
                     search ==
                         "Curry" ||
                     search ==
                         "curry" ||
                     search ==
                         "Stephen" ||
                     search ==
                         "stephen" ||
                     search ==
                         "stephencurry")
            {
                cout << "::name:" << curry.name
                     << "\t"
                     << "height:" << curry.height << "m"
                     << "\t"
                     << "weight:" << curry.weight << "kg"
                     << "\n";
                cout << "::Do you want to check his life?"
                     << "\n";
                cout << "::[Yes/No]"
                     << "\n";
                cout << "::____________"
                     << "\b\b\b\b\b\b\b\b\b\b\b\b";
                cin >> choose_3;
                system("clear");
                if (choose_3 == "Yes" || choose_3 == "yes")
                {
                    cout << "::brief introduction:"
                         << "\n";
                    Curry();
                }
                else if (choose_3 == "No" || choose_3 == "no")
                {
                    goto Flag;
                }
            }
            else if (search ==
                         "Andrew_Wiggins" ||
                     search ==
                         "Andrew" ||
                     search ==
                         "andrew" ||
                     search ==
                         "wiggins" ||
                     search ==
                         "Wiggins" ||
                     search ==
                         "andrewwiggins")
            {
                cout << "::name:" << wiggins.name
                     << "\t"
                     << "height:" << wiggins.height << "m"
                     << "\t"
                     << "weight:" << wiggins.weight << "kg"
                     << "\n";
                cout << "::Do you want to check his life?"
                     << "\n";
                cout << "::[Yes/No]"
                     << "\n";
                cout << "::____________"
                     << "\b\b\b\b\b\b\b\b\b\b\b\b";
                cin >> choose_4;
                system("clear");
                if (choose_4 == "Yes" || choose_4 == "yes")
                {
                    cout << "::brief introduction:"
                         << "\n";
                    Wiggins();
                }
                else if (choose_4 == "No" || choose_4 == "no")
                {
                    goto Flag;
                }
            }
            else if (search ==
                         "LeBron_James" ||
                     search ==
                         "LeBron" ||
                     search ==
                         "leBron" ||
                     search ==
                         "James" ||
                     search ==
                         "james" ||
                     search ==
                         "leBronjames")
            {
                cout << "::name:" << james.name
                     << "\t"
                     << "height:" << james.height << "m"
                     << "\t"
                     << "weight:" << james.weight << "kg"
                     << "\n";
                cout << "::Do you want to check his life?"
                     << "\n";
                cout << "::[Yes/No]"
                     << "\n";
                cout << "::____________"
                     << "\b\b\b\b\b\b\b\b\b\b\b\b";
                cin >> choose_5;
                system("clear");
                if (choose_5 == "Yes" || choose_5 == "yes")
                {
                    cout << "::brief introduction:"
                         << "\n";
                    James();
                }
                else if (choose_5 == "No" || choose_5 == "no")
                {
                    goto Flag;
                }
            }
            else
            {
                cout << "::Waiting for updates";
            }
        }
        else if (choose == "Register" || choose == "register")
        {
            string information_name;
            double informatian_height;
            double information_weight;
            cout << "::Now you can register your player information" << endl;
            cout << "::Please enter the player name"
                 << "\n"
                 << "::[Name]:_____________"
                 << "\b\b\b\b\b\b\b\b\b\b\b\b\b";
            cin >> information_name;
            cout << "::Please enter the player height:"
                 << "\n"
                 << "::[Height]:_____________"
                 << "\b\b\b\b\b\b\b\b\b\b\b\b\b";
            cin >> informatian_height;
            cout << "::Please enter the player weight"
                 << "\n"
                 << "::[Weight]:_____________"
                 << "\b\b\b\b\b\b\b\b\b\b\b\b\b";
            cin >> information_weight;
            cout << "\n";
            cout << "::Registration successful"
                 << "\n"
                 << "\a";
            cout << "::Name of your registered player:" << information_name
                 << "\n"
                 << "::Height of your registered player:" << informatian_height << "m"
                 << "\n"
                 << "::Weight of your registered player:" << information_weight << "kg"
                 << "\n";
        }
        else
        {
            cout << "\a"
                 << "::Please choose correctly";
        }
        cout << endl;
    Flag:
        cout << "::End process or continue";
        cout << "::[End/continue]"
             << "\n";
        cout << "::____________"
             << "\b\b\b\b\b\b\b\b\b\b\b\b";
        cin >> choose_6;
        if (choose_6 == "Continue" || choose_6 == "continue")
        {
            system("clear");
            continue;
        }
        else if (choose_6 == "End" || choose_6 == "end")
        {
            break;
        }
        else
        {
            cout << "::I don't know what you mean.";
            break;
        }
    }
    cout << "\n\n\n\n\n\n\n";
}
