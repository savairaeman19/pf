#include <iostream>
using namespace std;
main(){
    int bill,discountbill;
    cout<<"enter bill";
    cin>>bill;
    cout<<"enter discount bill";
    cin>>discountbill;
if (bill<=5000)

{ 
  discountbill= bill-(bill*0.05); 
  cout<<"5% discount";   /* code */
}
else {
   discountbill= bill-(bill*0.01);
    cout<<"10% discount";
}
cout<<"your discount bill is:"<<discountbill;

}