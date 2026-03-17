#include <iostream>
using namespace std;
main(){
    while(true){
        int choice;
        double n1,n2;
        cout<<"\n=====Calculator=====\n";
        cout<<"1.Addition\n";
        cout<<"2.Subtraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"5.Clear screen\n";
        cout<<"6.exit\n";
       cout<<"enter your choice(1-6): ";
         cin>>choice;
      if(choice>=1 && choice<=4){ 
         cout<<"enter first number: ";
       cin>>n1;
       cout<<"enter second number: ";
       cin>>n2;
      
}if(choice==1){
    cout<<"result: "<<n1+n2<<endl;}
    else if(choice==2){
    cout<<"result: "<<n1-n2<<endl;}
    else if(choice==3){
    cout<<"result: "<<n1*n2<<endl;}
   else if(choice==4){if(n2!=0){
    cout<<"result: "<<n1/n2<<endl;}
   else {
    cout<<"error. "<<endl;
   }}
   else if(choice==5){
    cout<<"screen cleared. "<<endl;
   }
   else {
    cout<<"invalid"<<endl;}
}
}
