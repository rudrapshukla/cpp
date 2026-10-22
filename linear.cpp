#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cout << "Enter the element to search for: ";
    cin>>key;
    for (int i=0; i<n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
        else {
            cout << "Element not found in the array." << endl;
            break;
        }
    }
    return 0;
}