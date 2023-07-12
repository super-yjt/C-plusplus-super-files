#include <iostream>
int main(void)
{
     using namespace std;
     // 在switch中
     cout << "Four Difficulties:"
          << "\n";
     cout << "1.Ordinary"
          << "\n";
     cout << "2.Simple"
          << "\n";
     cout << "3.Nightmare"
          << "\n";
     cout << "4.Hell"
          << "\n";
     cout << "choose:";
     int word;
     cin >> word;
     switch (word)
     {
     case 1:
          cout << "Ordinary right"
               << "\n";
          break;
     case 2:
          cout << "Simple right"
               << "\n";
          break;
     case 3:
          cout << "Nightmare right"
               << "\n";
          break;
     case 4:
          cout << "Hell right"
               << "\n";
          break;
     default:
          cout << "I don't understand you mean.";
          break;
     }
     // 出现在循环语句中
     for (int i = 0; i <= 10; i++)
     {
          if (i <= 5)
          {

               break;
          }
          cout << "i=" << i << "\n";
     }
     // 嵌套循环中
     for (int k = 1; k <= 10; k++)
     {
          for (int m = 1; m <= 10; m++)
          {
               if (m == 5)
               {
                    break;
               }
               cout << "*";
          }
          cout << "\n";
     }
}
