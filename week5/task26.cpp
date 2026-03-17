#include <iostream>
using namespace std;
main(){
    double money;
    int endyear,age=18;
    cin>>money>>endyear;
    for(int year=1800;year<=endyear;year++){
        if(year%2==0){
            money-=12000;
        }else{
            money-=(12000+50*age);
        }
age++;    }if(money>=0){
    cout<<"yes! he will live a carefree life and will have "<<money<<" dollars left"<<endl;
}else{
    cout<<"he will need "<<-money<<" dollars to survive."<<endl;
}
}