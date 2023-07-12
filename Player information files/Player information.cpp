#include <iostream>
#include <string>
struct inflatable
{
     char name[20];
     double height;
     double weight;
};

int main(void)
{
     using namespace std;

     inflatable klay{
         "Klay Thompson",
         1.98,
         99.8};
     inflatable curry{
         "Stephen Curry",
         1.88,
         84.0};
     inflatable wiggins{
         "Andrew Wiggins",
         2.01,
         89.0};
     inflatable james{
         "LeBron James",
         2.06,
         113.0};
     cout << "::You can view the details of all staff information or register player information" << endl;
     cout << "::Choose one" << endl;
     cout << "::Select Search Player,Please enter Search" << endl;
     cout << "::To register a player, please enter register" << endl;
     cout << "::[Search/register]:"
          << " "
          << "___________"
          << "\b\b\b\b\b\b\b\b\b";
     string choose;
     cin >> choose;
     if (choose == "Search")
     {

          cout << "\a";
          cout << "::Please enter the name of the player you want to search for "
               << "\n"
               << "::like Stephen_Curry,Klay_Thompson,Andrew_Wiggins,LeBron_James :"
               << "\n"
               << "::________________"
               << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
          string search;
          cin >> search;
          if (search == "Klay_Thompson")
          {
               cout << "::name:" << klay.name << "\t"
                    << "height:" << klay.height << "m"
                    << "\t"
                    << "weight:" << klay.weight << "kg" << endl
                    << "\n"
                    << "\n"
                    << "::brief introduction:"
                    << "\n"
                    << "Klay Thompson (born February 8, 1990), nicknamed \"Buddha\" and \"Tang God\", and teammate Curry, known as the \"Splash Brothers."
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
                    << "\n"
                    << "\n"
                    << "\n";
          }
          else if (search == "Stephen_Curry")
          {
               cout << "::name:" << curry.name << "\t"
                    << "height:" << curry.height << "m"
                    << "\t"
                    << "weight:" << curry.weight << "kg" << endl
                    << "::brief introduction:"
                    << "\n"
                    << "Stephen Curry was selected by the Warriors with the 7th pick in the first round of the 2009 NBA Draft "
                    << "and has played for the Warriors for 15 seasons, averaging 24.6 points and 6.5 assists per game. "
                    << "\n"
                    << "He has won 4 NBA championships, 2 regular season MVPs, 1 All-Star AMVP, 1 Finals MVP, 2 scoring champions, 9 All-Stars, 9 starters, "
                    << " 9 All-NBA titles, 2021 with 2,974 three-point shots, and was named the 75 stars in NBA history On May 19, 2023, he won the Kennedy Citizenship Award of the Professional Basketball Writers "
                    << "\n"
                    << "Association of America. On May 23, he won the 2022-23 Abdul-Jabbar Social Justice Champion Award.";
          }
          else if (search == "Andrew_Wiggins")
          {
               cout << "::name:" << wiggins.name << "\t"
                    << "height:" << wiggins.height << "m"
                    << "\t"
                    << "weight:" << wiggins.weight << "kg" << endl
                    << "\n"
                    << "\n"
                    << "::brief introduction:"
                    << "\n"
                    << "On June 27 , 2014 , Andrew Wiggins was selected by the Cleveland Cavaliers with the first pick in the first round of the 2014 NBA Draft as the top pick. On August 24, "
                    << "Wiggins was traded by the Cavaliers to the Minnesota Timberwolves wearing the number 22 jersey.  "
                    << "\n"
                    << "On February 14, 2015, Wiggins was named Rookie Challenge MVP.  On May 1, the NBA officially announced that Wiggins was named NBA Rookie of the Year for 2014-15. "
                    << "\n"
                    << "On February 7, 2020, the Timberwolves officially announced that they were trading Wiggins to the Golden State Warriors. "
                    << "\n"
                    << "On January 28, 2022, Wiggins was named to the 2021-22 All-Star Western Conference starting lineup.  On June 17, Wiggins won the NBA championship with the Warriors."
                    << "\n"
                    << "\n"
                    << "\n";
          }
          else if (search == "LeBron_James")
          {
               cout << "::name:" << james.name << "\t"
                    << "height:" << james.height << "m"
                    << "\t"
                    << "weight:" << james.weight << "kg" << endl
                    << "\n"
                    << "\n"
                    << "::brief introduction:"
                    << "\n"
                    << "LeBron James officially joined the NBA with the first pick in the 2003 NBA Draft and played for the Cavaliers, Heat and Lakers, averaging 27.2 points,"
                    << " 7.6 rebounds, and 7.4 assists per game during the NBA regular season. "
                    << "\n"
                    << " LeBron James has played in 20 NBA seasons, winning 4 championships, 4 Finals MVPs, 18 All-Star selections, and 19 All-NBA teams. In February 2023,"
                    << " James won the NBA's all-time scoring championship with a career total of 38,390 points"
                    << "\n"
                    << "\n"
                    << "\n";
          }
          else
          {
               cout << "::Waiting for updates"
                    << "contact \"3537177095@qq.com\" if you have problems";
          }
     }
     else if (choose == "register")
     {
          char information_name[20];
          double informatian_height;
          double information_weight;
          cout << "::Now you can register your player information" << endl;
          cout << "::Please enter the player name"
               << " "
               << "_____________"
               << "\b\b\b\b\b\b\b";
          cin >> information_name;
          cout << "::Please enter the player height:"
               << " "
               << "_____________"
               << "\b\b\b\b\b\b\b";
          cin >> informatian_height;
          cout << "::Please enter the player weight"
               << " "
               << "_____________"
               << "\b\b\b\b\b\b\b";
          cin >> information_weight;
          cout << "\n";
          cout << "::Registration successful"
               << "\a"
               << "\n";
          /*inflatable registersd_player{
               information_name,
               informatian_height,
               information_weight};*/
          cout << "::Name of your registered player:" << information_name << "\t"
               << "Height:" << informatian_height << "m"
               << "\t"
               << "Weight:" << information_weight << "kg";
     }
     else
     {
          cout << "\a"
               << "::Please choose correctly" << endl
               << "::Warning: Do not omit \"_\", capitalization, contact \"3537177095@qq.com\" if you have problems";
     }
}
