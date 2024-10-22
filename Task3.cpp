#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    float a,b,c,roots,disc;
cout<<"Enter coefficient A: ";
cin>>a;
cout<<"Enter coefficient B: ";
cin>>b;
cout<<"Enter coefficient C: ";
cin>>c;
disc=(b*b)-(4*a*c);
if(disc>0)
    {
        cout<<"The root are real and different"<<endl;
    }
else
if(disc=0)
    {
        cout<<"The roots are equal and real "<<endl;
    }
else
if(disc<0)
    {
        cout<<"The roots are complex and different"<<endl;
    }
if(disc>=0)
    {
        roots=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        cout<<"Root one: "<<roots<<endl;
         roots=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        cout<<"Root one: "<<roots;
    }

}