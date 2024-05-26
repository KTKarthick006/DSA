#include <iostream>
using namespace std;

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int array[] = {10, 7, 9, 19, 8, 5, 4};
    int n = (sizeof(array) / sizeof(array[0]));
    cout << "Array before sorting is : ";
    print_array(array, n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    }
    cout << "The sorted array is : ";
    print_array(array, n);
    return 0;
}