#include<iostream>
using namespace std;
int main()
{
    int num ,res=0;
cout<<"Enter any number"<<endl;
cin>>num;
while(num!=0)
{
    int dig= num%10;
    res=res*10+dig; // reverse num formula
    num = num/10;

}
cout<<res;
}
