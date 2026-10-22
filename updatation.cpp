#include <iostream>
using namespace std;
int main() {
    int arr[5]= {10, 20, 30, 40, 50};
    int n = (sizeof(arr)/sizeof(arr[0]));
    // print size of the array, = nnumber of element in the array cout << n;
    cout << "Tell me number which have to be updated in the array and with which number : ";
    int num, neww;
    cin >> num>>neww;
    int tar = -1;
    for (int i=0; i<n; i++){
        if (arr[i]==num){
            tar = i;
            break;
        }
    }
    arr[tar]=neww;
    for (int i = 0; i<n; i++){
        cout << arr[i]<<" ";
    }

    return 0;
}