  
#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {12, 46, 2, 96, 34, 56, 23};

    for (int i = 0; i<=n-2; i++){
        int min = i;
        for (int j = i; j<=n-1; j++){
            if (arr[j] < arr [min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}