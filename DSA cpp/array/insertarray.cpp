#include<iostream>
using namespace std;
 int main()
  {
//     int a[50],i=0;
//     char choice;
//     do
//     {
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>a[i];
//         i++;
//         cout<<"Do you want inster again PRESS Y"<<endl;
//         cin>>choice;

//     }
//     while(choice=='Y' || choice=='y');
//     cout<<"Elements are "<<endl;
// for(int k=0; k<i; k++)
//         {
// cout<<" "<<a[k];
//         }

// insert the element in any position
int a[100]={1,3,4,5};
int pos, num,i;
cout<<"Enter the position and number "<<endl;
cin>>pos>>num;
for(i=4; i>=pos; i--)
{
    a[i+1]=a[i];
    a[pos]=num;
   
}
 cout<<"New array "<<endl;
    for(i=0; i<6; i++)
    cout<<a[i]<<" ";
 }
    
    
    
 