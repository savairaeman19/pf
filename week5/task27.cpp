#include<iostream>
using namespace std;
main(){
    while(true){
        int choice;
        cout<<"\n=====Menu=====\n";
        cout<<"1.View food menu\n";
        cout<<"2.place order\n";
        cout<<"3.View order status\n";
        cout<<"4.generate bill\n";
        cout<<"5.Contact staff\n";
        cout<<"6.exiting restaurant management system. Thank you!\n";
       cout<<"enter your choice(1-6): ";
        cin>>choice;
if(choice==1){
   cout<<"1.View food menu\n";}
   else if (choice==2){
        cout<<"2.place order\n";}
        else if (choice==3){
        cout<<"3.View order status\n";}
        else if (choice==4){
        cout<<"4.generate bill\n";}
        else if (choice==5){
        cout<<"5.Contact staff\n";}
        else if (choice==6){
        cout<<"6.exiting restaurant management system. Thank you!\n";
 
 } else {cout<<"invalid choice!"<<endl;
       }
return 0;
    }
}