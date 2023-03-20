#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,3,5,7};
    int max=0;
    for (int i = 0; i < 10; i++)
    {
        if(max<arr[i])
        {
max=arr[i];
        }
        cout<<max<<endl;
    }
    
    
}