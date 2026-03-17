#include <iostream>
using namespace std;
void happyMessage()
{
    char ch='y';
    while(ch=='y')
{
    cout<<"I am happy\n";
    cout<<"Press y to continue or any key to exit\n";
    cin>>ch;
}
}
main(){
    happyMessage();
}