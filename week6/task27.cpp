#include <iostream>
using namespace std;
int main(){
    int k=0;
    int n;
    string num[100];

cout<<"enter name of customers: ";
cin>>n;
cout<<"names: ";
for(int i=0;i<n;i++){
cin>>num[i];
}
char l;
cout<<"enter letter to check: ";
cin>>l;
cout<<"total names starting with '"<<l<<"': ";

for(int j=0;j<n;j++){
    if(num[j][0]==l){
       k++;
    } //k++ ki jga cout kra dyn r k ki jga num[j] kryn tu full name show hona 
}
cout<<k<<endl;

    return 0;
}