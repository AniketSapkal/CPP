// String reverse using stack 
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
void reverse(char *str, int len)
{
    stack <char> s;
    int i;
    for(i=0;i<len;i++)
    {
        s.push(str[i]);
    }
    for(i=0;i<len;i++)
    {
        str[i]=s.top();
        s.pop();
    }
}
int main()
{
char str[]="Marvel";
int len=strlen(str);
reverse ( str,len );
cout<<"After reverse of string :  "<<str;
}