//Unique element in array
#include<iostream>
using namespace std;
int main()
{
  int  n=7,count;
    int a[n]={1,2,3,3,2,6,1};
    for(int i=0;i<n;i++)
    {   count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        
        if(count<2)cout<<" "<<a[i];

    }
    
    return 0;
}