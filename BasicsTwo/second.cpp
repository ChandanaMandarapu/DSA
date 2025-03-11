#include <iostream>

using namespace std;

int main() {

    // Printing numbers from 1 to 10
    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;  // Move to the next line

    // Multiplication table
    int numb, j = 1;  // Initialize j to 1
    cout << "Enter a number: ";
    cin >> numb;

    while (j <= 10) {
        cout << numb * j << " ";
        j++;
    }
    cout << endl;  // Move to the next line

    // Finding factors of a number
    int n, k = 1;  // Initialize k to 1
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";
    while (k <= n) {
        if (n % k == 0) {
            cout << k << " ";  // Print k, which is the factor
        }
        k++;
    }
    cout << endl;  // Move to the next line

    return 0;
}
