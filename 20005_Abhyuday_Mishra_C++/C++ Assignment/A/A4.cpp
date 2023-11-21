#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Input number of rows: ";
    cin >> numRows;

    // Upper half of the pyramid
    for(int i = 1; i <= numRows; i += 2) {
        // Print spaces
        for(int j = 0; j < (numRows - i) / 2; j++) {
            cout << " ";
        }

        // Print asterisks
        for(int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the pyramid
    for(int i = numRows - 2; i >= 1; i -= 2) {
        // Print spaces
        for(int j = 0; j < (numRows - i) / 2; j++) {
            cout << " ";
        }

        // Print asterisks
        for(int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}