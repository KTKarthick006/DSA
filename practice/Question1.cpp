#include <iostream>
using namespace std;


void insertAtPosition(int arr[], int& n, int element, int position) {
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
}


void removeAtPosition(int arr[], int& n, int position) {
    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5; 

    cout << "Original array: ";
    printArray(arr, n);

    
    insertAtPosition(arr, n, 10, 2);
    cout << "Array after insertion: ";
    printArray(arr, n);

    
    removeAtPosition(arr, n, 3);
    cout << "Array after removal: ";
    printArray(arr, n);

    return 0;
}