/*Get user input of numbers and insert them in an array in a sorted order */
# include <iostream>
using namespace std ;

int main ()
{
    int array [5];
    int a , j = 0 , k  ;
    for (int  i = 0; i < 5; i++)
    {
        cout<<"Enter an element : ";
        cin>>a;
        while (a>array[i])
        {
            j++ ;
        }
        for (int k = 5; k < j; k--)
        {
            array[k]=array[k-1];
        }
        array[j]=a;
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<endl;
    }
    
     
}