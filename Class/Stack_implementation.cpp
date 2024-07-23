# include <iostream>
using namespace std ; 
# define max 5  

int stack[max] , top =-1 ;

void pop()
{
    if (top==-1)
    {
        cout<<"The stack is underflow"<<endl;
    }
    else
    {
        cout<<"The element : "<<stack[top--]<<" is poped "<<endl;
    }
}

void push(int x )
{
    if (top==max-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
        stack[++top]=x;
    }
    
}

void display()
{
    for (int i = top; i >=0; i--)
    {
        cout<<stack[i]<<endl;
    }
    
}

int main()
{
    int ch , x ;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1-push"<<endl;
        cout<<"2-pop"<<endl;
        cout<<"3-display"<<endl;
        cout<<"4-exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element to be inserted : ";
            cin>>x ;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        
        default:
            cout<<"Enter a valid choice "<<endl;
            break;
        }
    } while (ch!=4);
    
    return 0 ;
}