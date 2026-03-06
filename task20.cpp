#include<iostream>
using namespace std;
main(){
    int holiday,workingday,time,diff;
    cout<<"enter holidays:";
    cin>>holiday;
    workingday=365-holiday;
    time=(workingday*63+holiday*127);
    diff=30000-time;
    cout<<"tom sleeps well:"<<diff;
}