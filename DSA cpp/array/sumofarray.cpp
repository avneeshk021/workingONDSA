#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int sum=0;
    cout<<"Enter the element in arry"<<endl;
    for(int i=0; i<10; i++)
    {
cin>>a[i];
// sum=sum+a[i];
//  cout<<a[i];

// sum=sum+a[i]
    }
    for(int i=0; i<10; i++)
    {
        sum=sum+a[i];
        cout<<a[i]<<endl;
    }
    cout<<"Sum is "<<sum;
}