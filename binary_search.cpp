#include <iostream>
using namespace std; 
int main(){
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
    int low = 0;
    int high = n - 1;
    while (low<=high) {
        int mid = (low+high)/2;
        if (arr[mid] == key){
            cout << "Element found in array at index number " << mid << "\n";
            break;
        }else if (arr[mid]<key){
            low=mid+1;
        }else{
            high = mid - 1;
        }

    }
}