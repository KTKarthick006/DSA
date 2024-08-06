/*create an array assign the reference of that array to a pointer variable and  traverse an array using pointer */

# include <iostream>
using namespace std ;

int main ()
{
    int array[] = {1, 2, 3, 4, 5};
    int* ptr ;
    ptr = array;
    for(int i = 0 ; i < 5 ; i++)
    {
    cout<< *(ptr+i)<<endl;
    }
    return 0 ;
}