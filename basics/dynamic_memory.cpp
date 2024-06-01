# include <iostream>
using namespace std ;

int main ()
{
    int i , n ;
    cout<<"Enter the number of integers : ";
    cin>>n;
    int* ptr = (int*) malloc (n*sizeof(int));
    if (ptr==nullptr)
    {
        cout<<"Menory not allocated ";
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        cout<<"Enter an integer value : ";
        cin>>*(ptr+i);
    }

    for ( i = 0; i < n; i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    free (ptr);
    
    return 0;   
}