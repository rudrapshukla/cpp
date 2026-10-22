#include <iostream>
using namespace std;
int main () { 

    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    if (r != c){
        cout << "The matrix is not square, so diagonal sum cannot be calculated." << endl;
        return 0;
    }else{
        int diagsum1 = 0;
        int diagsum2 = 0;
        for (int i = 0; i < r; i++){
            for (int j =0; j < c; j++){
                if (i == j){
                    diagsum1 += arr[i][j];
                }
            }
        }
        for (int i = r-1; i >= 0; i--){
            for (int j = c-1; j >= 0; j--){
                if (i + j == r - 1){
                    diagsum2 += arr[i][j];
                }
            }
        }
        cout << "The diagonal sum is: " << diagsum1 << endl;
        cout << "The anti-diagonal sum is: " << diagsum2 << endl;
    }

    return 0;
}