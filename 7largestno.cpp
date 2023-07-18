#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a value : ";
    cin>>a;
    cout<<"Enter b value : ";
    cin>>b;
    cout<<"Enter c value : ";
    cin>>c;
    if(a>b)
    if(a>c)
    {
        cout<<a<<" is largest no ";
    }
    else
    {
        cout<<c<<" is largest no ";
    }
    if(b>a)
    if(b>c)
    {
        cout<<b<<" is largest no ";
    }
    else
    {
        cout<<c<<" is largest no ";
    }
}