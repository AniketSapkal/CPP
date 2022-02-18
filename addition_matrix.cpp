// W.A.P for addition matrix 
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"size of row and column "<<endl;
    cin>>row>>col;
    int a[row][col],b[row][col],result[row][col];
    cout<<" Enter array element in array a[][] ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<" Enter array element in array b[][] ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"The addition of a[][] and b[][] is ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}