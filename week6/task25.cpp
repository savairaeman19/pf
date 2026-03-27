#include<iostream>
using namespace std;
int main(){
int n,num[100],max,min;
cout<<"enter number: ";
cin>>n;
cout<<"numbers in array: ";
for(int i=0;i<n;i++){
  cin>>num[i]; 
  }max=num[0];
  min=num[0];
for(int j=0;j<n;j++){
    if(num[j]>max){
        max=num[j];
    }
    if(num[j]<min){
        min=num[j];
    }
}

cout<<"largest number: "<<max<<endl;
cout<<"smallest number: "<<min<<endl;

    return 0;
}