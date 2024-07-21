#include <iostream>
#include <string>
using namespace std ;

int main() {
    const int size = 5;
    string arr[size] = {"apple", "banana", "orange", "grape", "mango"};
    string searchItem = "orange";
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == searchItem) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "String found in the array." << std::endl;
    } else {
        cout << "String not found in the array." << std::endl;
    }

    return 0;
}