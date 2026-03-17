#include<iostream>
using namespace std;
main(){
    int num,digit,count=0;
    cout<<"enter number: ";
    cin>>num;
  cout<<"enter digit to check: ";
  cin>>digit;
  
if(num<0)num=-num;
do
{if(num%10==digit){
    count++;
}
num=num/10;}while(num>0);
cout<<"frequency: "<<count;
}