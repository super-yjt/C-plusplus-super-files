#include <iostream>
int main(void)
{
    using namespace std;
    int arr[2][3];
    arr[0][0] = 1;
    arr[1][0] = 2;
    arr[1][1] = 3;
    arr[0][1] = 4;
    arr[0][2] = 5;
    arr[1][2] = 6;
    cout << arr[0][0] << "\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\n";
        }
    }
    int arr2[2][3] =
        {
            {1, 2, 3},
            {2, 3, 4}};
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\n";
        }
    }
}