# include <iostream>
using namespace std;

struct p
{
    int a ;
    int b ;
};

void print (struct p *ptr)
{
    cout<<"A value : "<<ptr -> a<<endl;
    cout<<"B value : "<<ptr -> b<<endl;
}

int main ()
{   
    struct p p1 = {10,20};
    struct p p2 = {100,200};
    print(& (p1));
    print(& (p2));


    return 0 ;
}