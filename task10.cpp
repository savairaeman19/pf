#include <iostream>
using namespace std;
main(){
    string password,input;
    password="bag@27";
    cout<<"enter password";
    cin>>input;
    if (input==password)
    {cout<<"input matches password";
    }
    else{
        cout<<"input not matches";
    }

}