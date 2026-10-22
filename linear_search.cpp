#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int tar;
    cout << "Tell me the number which have to be searched in the array : ";
    cin >> tar;
    for (int i = 0; i<n; i++){
        if (arr[i] == tar){
            cout << "Number found at index : " << i << endl;
            return 0;
        }
    }
    cout << "Number not found in the array." << endl;
    return 0;
}