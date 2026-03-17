#include<iostream>
using namespace std;
main(){
    int num,totaldigits(int num);
    cout<<"enter a number: ";
    cin>>num;
cout<<"enter total number of digits: "<<totaldigits(num)<<endl;
return 0;
}int totaldigits(int number)
{
    if (number==0)return 1;
    int count=0;
    if(number<0)number=-number;
    while(number>0){
        number=number/10;
        count++;
    }return count;
}