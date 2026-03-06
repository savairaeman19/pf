#include<iostream>
using namespace std;
main(){
    string n1,n2,n3;
    int a1,a2,a3;
    cout<<"enter name of brother1:";
    cin>>n1;
    cout<<"enter name of brother2:";
    cin>>n2;
    cout<<"enter name of brother3:";
    cin>>n3;
    cout<<"enter age of brother1:";
    cin>>a1;
    cout<<"enter age of brother2:";
    cin>>a2;
    cout<<"enter age of brother3:";
    cin>>a3;

    if(a1<a2){
    {if(a1<a3)
   cout<<n1<<" is youngest";
    }}
    if(a2<a1){
        {
            if(a2<a3)
        cout<<n2<<" is youngest";
    }}
    if(a3<a1){
        {
            if(a3<a2)
        cout<<n3<<" is youngest";
    }}
}