#include<iostream>
using namespace std;
main(){
    int red,white,tulips;
    cout<<"enter red roses:";
    cin>>red;
    cout<<"enter white roses:";
    cin>>white;
    cout<<"enter tulips:";
    cin>>tulips;
    float price,discount;
     price=(red*2)+(white*4.1)+(tulips*2.5);
    cout<<"original price:"<<price;
    float finalprice;
    if(price>200){
        discount=price*0.20;
        finalprice=price-discount;
    } cout<<"price after discount:"<<finalprice;
}