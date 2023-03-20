#include<iostream>
using namespace std;
int main()
{
    int a[100]={2,4,6,8};
    int pos,i;
    cout<<"Enter the element do you want to delete"<<endl;
    cin>>pos;
     for(i=pos; i<5; i++)
     {
        a[i]=a[i+1];
     }
     for(i=0; i<4; i++)
     {
        cout<<a[i]<<" "<<endl;
     }
return 0;
}