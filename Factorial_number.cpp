// W.A.P to print factorial of number 
#include<iostream>
using namespace std;
int main()
{
    int fac=1,n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    if(n==0)
    {
        return 1;
    }
    else
    {
    for(int i=1;i<=n;i++)
    {
        fac=i*fac;
    }
    cout<<"The factorial is "<<fac;
    }
}