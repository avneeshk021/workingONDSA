#include<iostream>
using namespace std;
int main()
{
     int arr[6]={2,5,7,8,9};
     int check;
     cout<<"Enter the array"<<endl;
       for(int i=0;i<5;i++){
//   cin>>arr[i];
       }
     cout<<"Enter the check element"<<endl;
     cin>>check;
     for(int k=1; k<7; k++)
     {
        if(check==arr[k])
        cout<<"Location "<<k++;
     }
}