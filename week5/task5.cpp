#include<iostream>
using namespace std;
main(){
void printtable(int num);
    printtable(24);
    printtable(50);
    printtable(29);
}
void printtable(int num){
cout<<" multiplication table of:"<<num<<endl;
for(int i=1; i<=10; i++){
cout<<num<<"*"<<i<<"="<<(num*i)<<endl;
}
cout<<" ";
}