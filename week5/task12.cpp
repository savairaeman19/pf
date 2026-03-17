#include <iostream>
using namespace std;
main(){
    int i,j,rows;
    cout<<"input number of rows: \n";
    cin>>rows;
    for (int i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
        cout<<"*";}
        cout<<"\n";
      }
    for(int i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
        cout<<"*";}
        cout<<"\n";
        }
}