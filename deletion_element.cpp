#include <iostream>
using namespace std;
int main() {
    int arr[5]= {10, 20, 30, 40, 50};
    int n = (sizeof(arr)/sizeof(arr[0]));
    // print size of the array, = nnumber of element in the array cout << n;
    cout << "Tell me the index at which number have to be deleted : ";
    int ind;
    cin >> ind;
    for (int i = ind; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;

    for (int i = 0; i<n; i++){
        cout << arr[i]<< " ";
    }

    return 0;
}