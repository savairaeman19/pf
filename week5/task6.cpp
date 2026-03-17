#include<iostream>
using namespace std;
main(){
    int num,digit,count;
cout<<"enter number: ";
cin>>num;
cout<<"enter digit: ";
cin>>digit;
count=0;
  while(num>0){
int lastdigit=num%10;
if (lastdigit==digit){
    count++;
}
 num=num/10;}
cout<<"frequency of "<<digit<<" in "<<num<<" is "<<count;
  }
