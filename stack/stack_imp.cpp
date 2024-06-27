# include <iostream>
using namespace std ;

# define max 10 

class stack 
{
        int top = -1 ;
    public:
        int item[max];
        void push (int x);
        void pop();
        void peek ();
        int is_empty();
        int is_full();
};

void stack :: push (int x)
{
    if (top>=max-1)
    {
        cout<<"Stack overflow"<<endl ;
    }
    else
    {
        item[++top]=x;
        cout<<"Item "<< x <<" pushed"<<endl ;
    }
}

void stack :: pop ()
{
    if (top==-1)
    {
        cout<<"Stack empty"<<endl;
    }
    else
    {
        int x = item[top--];
        cout<<"Item "<< x <<" popped"<<endl;
    }
}

void stack :: peek ()
{
     if (top < 0) 
     {
        cout << "Stack is Empty";
        return ;
     }
    
        int x = item[top];
        cout<<"The peek element is : "<<x<<endl;
    
}

int stack :: is_empty ()
{
    if (top == -1)
    {
        return 1 ;
    }
    return 0 ;
}

int stack :: is_full()
{
    if (top==max-1)
    {
        return 1 ;
    }
    return 0 ;
}

int main ()
{
    int ch , x ;
    class stack st ;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1-push"<<endl;
        cout<<"2-pop"<<endl;
        cout<<"3-peek"<<endl;
        cout<<"4-is empty"<<endl;
        cout<<"5-is full"<<endl;
        cout<<"6-Exit"<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element to push : ";
            cin>>x;
            st.push(x);
            break;
        
        case 2:
            st.pop();
            break;

        case 3:
            st.peek();
            break;
        
        case 4:
            if (st.is_empty())
            {
                cout<<"The stack is empty"<<endl;
            }
            else
            {
                cout<<"The stack is not empty"<<endl;
            }
            break;
        
        case 5:
            if (st.is_full())
            {
                cout<<"The stack if full"<<endl;
            }
            else
            {
                cout<<"The stack is not full"<<endl;
            }
            break;
        case 6:
            cout<<"Exit"<<endl;  
            break;
        default:
            cout<<"Enter a valid choice"<<endl;
            break;
        }
    } while (ch!=6);
    
}