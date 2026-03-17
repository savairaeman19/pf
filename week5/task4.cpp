#include<iostream>
using namespace std;
 int digits(int number)
 {
 int count=0;
    for(int i=number; i>0; i=i/10)
    {
        count =count+1;
    }
return count;
} 
main()
{    int num,total;
    cout<<"enter number:";
    cin>>num;
    total=digits(num);
    cout<<"total number of digits:"<<total;
}