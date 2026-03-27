#include<iostream>
using namespace std;
int main(){
int n,n1[100];
cout<<"enter number of elements for first array: ";
cin>>n;
cout<<"enter elements for first array:";
for (int i=0;i<n;i++){
cin>>n1[i];
}int num,num1[100];
cout<<"enter number of elements for second array: ";
cin>>num;
cout<<"enter elements for second array: ";
for(int j=0;j<num;j++){
    cin>>num1[j];
}
cout<<"resulting array: ["<<n1[0]<<",";
for(int j=0;j<num;j++){
cout<<num1[j]<<",";
}
cout<<n1[1]<<"]"<<endl;
    return 0;
}