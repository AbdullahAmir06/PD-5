#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=1;
    cout<<"Enter no: ";
    cin>>n;
    while(a<=n)
        {
            while(b<=a)
                {
                    cout<<"*";
                    b=b+1;
                }
            b=1;
            a=a+1;
            cout<<endl;
        }
return 0;
}
