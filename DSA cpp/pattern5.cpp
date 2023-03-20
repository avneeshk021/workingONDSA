#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
// if you want right angle tringle in 
// 1
// 12
// 123
// 1234 the cout<<"j"; in place of cout<<"*";
//  if you want only same number
//  1
//  22
//  333
//  4444 then cout<<"i";