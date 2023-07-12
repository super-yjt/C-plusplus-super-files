#include <iostream>
#include <string> 
struct inflatable {
  std::string name;
  double height;
  double weight;
};

int main(void) {
  using namespace std;

  inflatable klay{"Klay-Thompson", 1.98, 99.8};
  inflatable curry{"Stephen Curry", 1.88, 84};

  cout << ":: Select action. [view/register]: ";
  string choose;
  cin >> choose;

  if (choose == "view") {
    cout << "\a";
    cout << ":: Enter the name of the player you want to search: ";
    string search;
    cin >> search;
    if (search == "klay") {
      cout << " name: " << klay.name << endl
           << " height: " << klay.height << endl
           << " weight: " << klay.weight << endl;
    } else if (search == "curry") {
      cout << " name : " << curry.name << endl
           << " height: " << curry.height << endl
           << " weight: " << curry.weight << endl;
    }
  } else if (choose == "register") {
    string reg_name;
    double reg_height;
    double reg_weight;

    cout << ":: Registering your player..." << endl;

    cout << ":: Enter the player name: ";
    cin >> reg_name;

    cout << ":: Enter the player height: ";
    cin >> reg_height;

    cout << ":: Enter the player weight: ";
    cin >> reg_weight;

    inflatable reg_player{reg_name, reg_height, reg_weight};
    cout << " registered successful" << endl;

    cout << " name: " << reg_player.name << endl
         << " height: " << reg_player.height << endl
         << " weight: " << reg_player.weight << endl;
  } else {
    cout << " please choose correctly" << endl;
  }

  return 0;
}
