#include <iostream>
using namespace std;

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    cout << "Enter the number of elements in the array : ";
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "The array before sorting is : ";
    print_array(array, n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int t = array[j];
                array[j] = array[i];
                array[i] = t;
            }
        }
    }
    cout << "The array after sorting is : ";
    print_array(array, n);
    return 0;
}
