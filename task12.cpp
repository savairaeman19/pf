#include <iostream>
using namespace std;
main(){
   float salary,price,deal;
    cout<<"salary per month:";
    cin>>salary;
cout<<"price of laptop:";
cin>>price;
deal=(salary*0.5)*6;
cout<<"advance salary for next 6 months:"<<deal;
if(deal>=price){
    cout<<"Ali can buy laptop";
}
else{cout<<"months required to buy laptop:"<<price/(salary*0.5);

}
}