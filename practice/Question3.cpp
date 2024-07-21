#include <iostream>
using namespace std ;

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

void rotateRows(int arr[MAX_ROWS][MAX_COLS], int r) {
    
    r = r % MAX_COLS;


    for (int i = 0; i < MAX_ROWS; i++) {
        int temp[MAX_COLS];


        for (int j = 0; j < MAX_COLS; j++) {
            temp[j] = arr[i][j];
        }

        
        for (int j = 0; j < MAX_COLS; j++) {
            arr[i][j] = temp[(j + r) % MAX_COLS];
        }
    }
}

int main() {
    int arr[MAX_ROWS][MAX_COLS] = {{1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9}};
    int rotationConstant = 2;

    rotateRows(arr, rotationConstant);

    
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << std::endl;
    }

    return 0;
}