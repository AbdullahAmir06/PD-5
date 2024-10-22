#include<iostream>
using namespace std;
int main ()
{
    int no,a=0,i=1;
    cout<<"Enter Number: ";
    cin>>no;
    while(i<=no)
        {
            if(no%i==0)
            {
              a++;
            } 
        i++;
        }
    if(a==2)
        {
            cout<<no<<" is a Prime No";
        }
    else
        {
            cout<<no<<" not a prime no";
        }

}
