#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout<<"Print The Array "<<endl;
    for(int i=0; i<size; i++)
    {
    cout<<arr[i]<< " ";
}
cout<<"Printing the array"<< endl;
}
int main()
{
   int First[15]={1,2,5,4,6,8};
int n =15;
printArray(First, 15);
int firstsize=sizeof(First)/sizeof(int);
cout<<"Size of first is "<<firstsize<<endl;

char ch[10]={'a','b', 'c', 'd'};
cout<<"value at 2 "<<ch[2]<<endl;
    return 0;
}
