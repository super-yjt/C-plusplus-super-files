#include <iostream>
int main(void)
{
    using namespace std;
    int num = 0;
    int arr[3][3] =
        {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0;j < 3;j++)
        {
            num +=arr[i][j];
            // cout<<arr[i][j]<<"\t";
        }
        cout<<num<<"\n";
    }
}