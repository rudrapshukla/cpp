//multiplying two matrices, taking input from user, and matrix size from user
#include <iostream>
using namespace std;
int main(){
    int row1, col1, row2, col2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int arr1[row1][col1], arr2[row2][col2], arr3[row1][col2];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Initializing the result matrix to zero
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            arr3[i][j] = 0;
        }
    }

    // Multiplying the matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Displaying the result
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}