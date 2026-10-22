#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    int n = name.length();
    for (int i = 0; i < n; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            cout << name[i];
        }
    }
    return 0;
} 