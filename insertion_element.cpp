#include <iostream>
using namespace std;
int main() {
    int arr[6]= {10, 20, 30, 40, 50};
    int n = (sizeof(arr)/sizeof(arr[0]))-1;
    // print size of the array, = nnumber of element in the array cout << n;
    cout << "Tell me the number which have to inserted : ";
    int num;
    cin >> num;
    cout << "Tell me the index at which number have to be inserted : ";
    int ind;
    cin >> ind;
    for (int i = n; i>ind; i--){
        arr[i]=arr[i-1];
    }
    arr[ind]=num;
    n++;

    for (int i = 0; i<n; i++){
        cout << arr[i]<< " ";
    }

    return 0;
}