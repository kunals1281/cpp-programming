#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Outer loop for managing the total number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars in the current row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line after completing a row
        cout << endl;
    }
    return 0;
}
