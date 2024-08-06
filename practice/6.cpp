/*write a program to get an expression and insert it into a stack and check if it is a valid expression by popping it */

# include <iostream> 
using namespace std ;

# define max 10 

char stack[max] ;
int  top =-1;

void input ()
{
    cout<<"Enter the expression : ";
    cin>> stack[max];
    cout<<stack[0];
}

void disp ()
{
    for (int i = 0; i < max ; i++)
    {
        cout<<stack[i];
    }
    
}

int main ()
{
    input ();
    cout<<"a";
    disp() ;
    cout<<"b";
    return 0 ;
}



