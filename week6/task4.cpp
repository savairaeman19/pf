#include <iostream>
using namespace std;
main(){
    int num[5];
    for(int i=0;i<5;i++){
        cout<<"enter num ";
        cin>>num[i];
    }
    cout<<"first element of array "<<num[0]<<endl;
    cout<<"last element of array "<<num[4]<<endl;
    cin>>num[0];
    
    return 0;
}