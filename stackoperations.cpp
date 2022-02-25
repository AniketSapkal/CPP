#include<iostream>
using namespace std;

    int stack[100],n=100,top=-1;
    void push(int val)
    {
        if(top>=n-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            stack[top]=val;
        }
    }

    void pop()
    {
        if(top<=-1)
        {
            cout<<"stack underflow "<<endl;
        }
    
     else
     {
               cout<<"The popped element is "<<stack[top]; 
               top--;
            }
        
    }

    void display()
    {
        if(top>=0)
        {
            cout<<"stack elemnts are : ";
        
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
        }
        else
        {
            cout<<"stack is empty"<<endl;
        }
        
    }

    int main()
    {
        int ch,val;
        cout<<"1.Push in Stack "<<endl;
        cout<<"2.POP from Stack"<<endl;
        cout<<"3.Display Stack"<<endl;
        cout<<"4.Exit"<<endl;
        do{
            cout<<"Enter your choice: "<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1: {
                    cout<<"Enter Value to be pushed: "<<endl;
                    cin>>val;
                    push(val);
                    break;
                }
                case 2: {
                    pop();
                    break;
                }
                case 3: {
                    display();
                    break;
                }
                case 4: {
                    cout<<"exit"<<endl;
                    break;
                }
                default:{
                    cout<<"Invalid choice "<<endl;
                }
            
            }

        }
        while(ch!=4);
        
    }

