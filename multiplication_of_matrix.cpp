#include <iostream>
using namespace std;
int main () {
    int r1, c1, r2, c2;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> c1;
    cout << "Enter the number of rows for the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    // Input elements for the first matrix
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << "Enter element at position for first matrix [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }
    // Input elements for the second matrix
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cout << "Enter element at position for second matrix [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }
    cout << "The first matrix is:" << endl;
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The second matrix is:" << endl;
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    if (c1 != r2){
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }else{
        
        int result [r1][c2];
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c2; j++){
                result [i][j]=0;
                for (int k = 0; k < c1; k++){
                    result[i][j]=result[i][j]+arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout << "The result of matrix multiplication is:" << endl;
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c2; j++){
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}