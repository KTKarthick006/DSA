#include <iostream>
using namespace std;

int linear_search(int array[], int value ,int n)
{

    for (int i = 0; i < n; i++)
    {
        if (array[i] == value)
        {
            return (i);
        }
    }
     return (-1);
    
}

int main()
{
    int array[] = {10, 1, 2, 3, 4, 5, 6, 7, 8};
    int value;
    int n=9;
    cout << "Enter the value to search for : ";
    cin >> value;
    cout<<linear_search(array,value,n);
    return 0;
}