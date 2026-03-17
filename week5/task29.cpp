#include<iostream>
using namespace std;
main(){
    while(true){
        int choice,name;
        cout<<"\n=====Library=====\n";
        cout<<"1.Add book\n";
        cout<<"2.view book\n";
        cout<<"3.borrow book\n";
        cout<<"4.issue book\n";
        cout<<"5.exit\n";
       cout<<"enter your choice(1-5): ";
        cin>>choice;
cout<<"enter book name: "<<endl;
cin>>name;
if(choice==1){
    cout<<"added a book\n"<<name<<endl;
}else if(choice==2){
    cout<<"viewed a book\n"<<name<<endl;
}
else if(choice==3){
    cout<<"borrowed a book\n"<<name<<endl;
}
else if(choice==4){
    cout<<"issued a book\n"<<name<<endl;
}
else if(choice==5){
    cout<<"exit"<<endl;
}
else{
    cout<<"invalid"<<endl;
}


    }
}