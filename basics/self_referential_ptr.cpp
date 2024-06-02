# include <iostream>
using namespace std ;

struct A
{
    int a ;
    struct A* ptr ;
};

int main ()
{
    struct A a = {10 , NULL};
    struct A b = {20 , NULL};
    a. ptr = & (b) ;
    cout<<a.ptr -> a ;
    return 0 ;
}