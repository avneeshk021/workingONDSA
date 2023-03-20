#include<iostream>
using namespace std;
int main ()
{
    // int n;
    // cout<<"Give input"<<endl;
    // cin>>n;
    int a[10]={12,13,45,67};
    int max;
    int min;
    min=a[0];
    max=a[0];
    for(int i=0; i<6; i++)
    {
        if(max<a[i]){
        max=a[i];
        cout<<max<<endl;
    }
    else if(min>a[i])
    {
        min=a[0];
        cout<<min;
    }
    }
}