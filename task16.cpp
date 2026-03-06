#include <iostream>
using namespace std;
main(){
string country;
cout<<"enter country name:";
cin>>country;
float price,discount;
cout<<"enter ticket price in dollars:";
cin>>price;
if(country=="ireland"){
    discount=price*0.10;
}else{
    discount=price*0.05;
}int finalprice=price-discount;
cout<<"discounted price:"<<finalprice;
}