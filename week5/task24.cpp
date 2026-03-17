#include<iostream>
using namespace std;
main () {
   int age,price,toy,toys=0;
   double total=0,gift=10;
   cin>>age>>price>>toy;
   for(int i=1;i<=age;i++){
    if(i%2==0){
        total+=(gift-1);
        gift+=10;
    }else{
        toys++;
    }
   }
total+=(toys*toy);
if(total>=price)cout<<"Yes!"<<total-price;
else cout<<"No!"<<price-total;
}