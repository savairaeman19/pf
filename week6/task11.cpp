#include <iostream>
using namespace std;
main(){
    int n;
int num[100];
cout<<"enter a number: ";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter "<<n<<" numbers, one per line: "<<i<<endl; 
}
for(int j=n-1;j>=0;j--){
    cout<<"numbers in reverse order: "<<j<<endl;
}

    return 0;
}