#include<iostream>
using namespace std;
void printtable(int number);
main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
printtable(num);}
void printtable(int number){
    for(int i=1;i<=10;i++){
        cout<<number<<"*"<<i<<"="<<(number*i)<<endl;    }
}
