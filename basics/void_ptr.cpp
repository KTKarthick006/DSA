# include <iostream>
using namespace std ;

int main ()
{
    int a = 20;
    void *ptr = &a; // void pointer can point to any data type 
    cout<<*(int *)ptr; // first type casted as int then dereferenced 
    return 0 ;
}