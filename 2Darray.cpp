#include <iostream>
using namespace std;
/// @brief 
/// @return 
int main (){
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
    
    /*int key;
    cout << "Enter the element to search for: ";
    cin >> key;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Element found at position [" << i << "][" << j << "]" << endl;
                return 0;
            }
        }
        cout << endl;
    }
    cout << "Element not found." << endl;
    return -1;*/

    int max;
    for (int i = 0; i < r; i++){
        int rowsum = 0;
        for (int j = 0; j < c; j++){
            rowsum += arr[i][j];
        }
        max = rowsum;
        if (rowsum > max){
            max = rowsum;
        }
    }
    cout << "Maximum sum of a row: " << max << endl;
}