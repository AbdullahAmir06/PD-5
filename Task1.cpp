#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    string operators;
    cout<<"Welcome to Calculator ";
    cout<<"Enter Operator (+,-,*,/,%,&&,||,!=,==,<=,>=,<<,>>,++,--) : ";
    cin>>operators;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    if(operators=="+")
        {
            cout<<"Calculated Value is "<<a+b;
        }
    if(operators=="-")
        {
            cout<<"Calculated Value is "<<a-b;
        }
    if(operators=="*")
        {
            cout<<"Calculated Value is "<<a*b;
        }
    if(operators=="/")
        {
            if(a>b)
            {
                cout<<"Calculated Value is "<<a/b;
            }
            cout<<"Denominator is less than Numerator";
        }
    if(operators=="%")
        {
            cout<<"Calculated Value is "<<a%b;
        }
    if(operators==">>")
        {
            if(a>b)
            {
                 cout<<a<<" is greater than "<<b;
            }
           
        }
    if(operators=="<<")
        {
            if(a<b)
            {
            cout<<a<<" is less than b "<<b;
            }
        }
    if(operators=="<=")
        {
            if(a<=b)
            {
            cout<<a<<" is less than or equal to b "<<b;
            }
        }
        if(operators==">=")
        {
            if(a>=b)
            {
            cout<<a<<" is greater than or equal to b "<<b;
            }
        }
        if(operators=="==")
        {
            if(a==b)
            {
            cout<<a<<" is equal to b "<<b;
            }
        }
            if(operators=="!=")
        {
            if(a!=b)
            {
            cout<<a<<" is not equal to b "<<b;
            }
        }
        if(operators=="&&")
        {
            if(a==b)
            {
            cout<<"True";
            }
            if(a!=b)
            cout<<"False";
        }
            if(operators=="||")
        {
            if(a==b)
            {
            cout<<"True";
            }
        }
    if(operators=="!")
        {
            if(a!=b)
            {
            cout<<a<<" and "<<b<<"are not equal";
            }
            {
                cout<<"False";
            }
        }
}