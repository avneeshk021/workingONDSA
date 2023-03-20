#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    int sum=0;
    while (num!=0)
    {
       int dig= num%10;
       num=num/10;
       sum+=dig;
    }
    cout<<sum<<endl;
    
}