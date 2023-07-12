#include<iostream>
int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    for(int i = 0;i<=10;i++)
    {
        p = &arr[i];
        std::cout<<p<<"\n";
        std::cout<<*p<<"\n";
    }
}