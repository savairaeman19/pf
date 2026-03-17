#include <iostream>
using namespace std;
void validate(){
    int value;
    cout<<"Please enter a positive number: ";
    cin>>value;
    while (value<=0){
        cout<<"error: "<<value<< "  is not a positive number. ";
       cout<<"Please enter a positive number: ";
        cin>>value;
    }}
    int main(){
        validate();
        cout<<"Program ends. ";
    }
