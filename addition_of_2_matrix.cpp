#include <iostream>
using namespace std;
int main(){
    int arr[2][2]= {{10, 20}, {30, 40}};
    int arr2[2][2]= {{9, 9}, {9, 9}};
    int arr3[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}