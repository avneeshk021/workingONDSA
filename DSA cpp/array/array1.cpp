#include<iostream>
using namespace std;
int main()
{
    int num[15];
    //accesing array
    cout<<"value at 0 index "<<num[14]<< endl;
    // cout<<"value at 20 index "<<num[20]<< endl;
    int second[3]={5,7,8};
    cout<<"value at  2 index "<<second[2]<<endl;

int third[15]={1,2,4,5};
//Print whole array
int n=15;
cout<<"Print the Array "<<endl;
for(int i=0; i<n; i++)
cout<< third[i]<<" ";

int fifth[14]={1};
//Print whole array
 int a=10;

cout<<"Print the Array "<<endl;
for(int i=0; i<a; i++)
cout<< fifth[i]<<" ";
        return 0;
        
}