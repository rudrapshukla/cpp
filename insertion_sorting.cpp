#include <iostream>
using namespace std;
int main() {
    int n = 7;
    int arr[7] = {12, 48, 2, 96, 34, 56, 23};

    for (int i = 0; i<n; i++){
        int j = i;
        while (j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}