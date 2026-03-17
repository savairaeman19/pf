#include<iostream>
using namespace std;
main(){
    int n1=0, n2=1, next;
    cout<<n1<<",";
    cout<<n2<<",";
    for(int x=0; x<8; x=x+1 )
    {
        next=n1+n2;
        cout<<next<<",";
        n1=n2;
        n2=next;
    }
}