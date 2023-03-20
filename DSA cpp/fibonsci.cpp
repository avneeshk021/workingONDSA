#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,num;
    cout<<"Enter the number for fibonaci series"<<endl;
    cin>>num;
    cout<<n1<<" "<<n2<<" "; // print here 0,1
    for(int i=2; i<num; i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}