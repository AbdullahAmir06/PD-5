#include<iostream>
using namespace std;
int main ()
{
    int a,b,lcm=0;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    if(a>b)
        {
            lcm=a;
        }
    else
        {
            lcm=b;
        }
    while(lcm%a!=0 || lcm%b!=0)
        {
            lcm=lcm+1;
        }
    cout<<"Lcm is "<<lcm;
    return 0;
}