#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask user for the number of rows in the pyramid
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Inner loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}