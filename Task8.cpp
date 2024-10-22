#include<iostream>
using namespace std;
int main(){
  int num ;
  cout<<"Enter a number: ";
  cin>>num;
  int i=3,sum=2,np=0;
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
        sum=sum+i;
      }
      i++;
  }
  cout<<"Sum of Prime Number: "<<sum;
}
