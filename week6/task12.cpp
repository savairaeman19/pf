#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements: ";
  cin>>n; 
  int arr[100],u[100]; 
  int count=0;  
    for(int i=0;i<n;i++){
      cout<<"enter numbers, one per line: ";
    cin>>i;
  bool is=false;
    for (int j=0;j<count;j++){
      if(i==u[j]){
        is=true;
        break;
      }
    }
      if(is){
         cout<<"already entered: "<<i<<endl;
      }else{
        u[i]=i;
       count++;
      }
    }cout<<"unique numbers entered: ";
    for(int j=0;j<count;j++){
cout<<u[j]<<endl;
    }
    return 0;
}