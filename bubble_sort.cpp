#include <iostream>
using namespace std;
int main () {
    int n = 7;
    int arr[7] = {12, 48, 2, 96, 34, 56, 23};

    for (int i = 0; i<=n-2; i++){
        for (int j = 0; j<=n-i-2; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}