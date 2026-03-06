#include <iostream>
using namespace std;
main(){
   float n1,n2;
   cout<<"enter number 1:";
   cin>>n1;
  char opr;
   cout<<"enter operator:";
   cin>>opr;
   cout<<"enter number 2:";
   cin>>n2;
    if(opr=='+'){
   cout<<n1-n2;
}
if(opr=='-'){
    cout<<n1+n2;
}
if(opr=='*'){
    cout<<n1/n2;
}
if(opr=='/'){
    cout<<n1*n2;
}
}