#include <iostream>
using namespace std;
int main(){
int R,r[100],Rt=0;
cout<<"enter the number of resistors in series: ";
cin>>R;
cout<<"enter the resistance values: ";
for(int i=0;i<R;i++){
cin>>r[i];

Rt=R+r[i];}
cout<<"total resistance: "<<Rt;
return 0;
}