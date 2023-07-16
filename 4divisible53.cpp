#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a%5==0 && a%3==0)
    {
        cout<<a<<"  is divisible by 5 or 3";
    }
    else
    {
        cout<<a<<" is not divisible by 5 or 3";
    }
}