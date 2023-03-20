#include<iostream>
using namespace std;
 void update(int arr[], int n)
 {
cout<<"Inside the function "<<endl;
//Update arr element
arr[0]=120;
 for(int i=0; i<3;i++)
    {
        cout<<"print array = "<<arr[i]<<" "<<endl;
    }



cout<<"Going back to main "<<endl;
 }
 int main()
 {
    int arr[3]={1,3,5};
    update(arr,3);
    for(int i=0; i<3;i++)
    {
        cout<<"print array = "<<arr[i]<<" "<<endl;
    }
 }

//  sum of all element array
// find the power of 2