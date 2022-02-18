#include <iostream>
using namespace std;
int main()
{
    int row, col,sum=0;
    cout << "Enter a size of row" << endl;
    cin >> row;
    col = row;
    int a[row][col], b[row][col], result[row][col];
    cout << "Enter elements in array a[row][col]";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements in array b[row][col]";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {   sum=0;
        for (int j = 0; j < col; j++)
        {
            result[i][j]=(sum+a[i][j]*b[j][i]);
        }
    }

     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}