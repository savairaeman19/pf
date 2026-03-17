#include<iostream>
using namespace std;
main(){
    int n1,n2,a,b,r,gcd,lcm;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;

    a=n1;
    b=n2;
    while(b!=0)
{int e=b;
   b=a%b;
a=e;

}
gcd=a;
lcm=(n1*n2)/gcd;
cout<<"GCD: "<<gcd<<endl;
cout<<"LCM: "<<lcm<<endl;
}