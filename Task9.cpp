#include<iostream>
using namespace std;
int main(){
  int num ;
   int i=3,np=0;
  cout<<"Enter a number: ";
  cin>>num;
  if(num%2==0){
  if(num>=2)
  {
    cout<<"2"<<endl;
  }
  }
  while(i<=num){
    np=0;
    int j=2;
    while(j<i){
      if (i % j == 0){
        np++;        
    }
    j++;
    }
    if(np==0){
        
        if(num%i==0)
        {
            cout<<i<<endl;
        }
      }
      i++;
  
}
}