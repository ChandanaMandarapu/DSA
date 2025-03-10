// hard patterns

#include <iostream>

using namespace std;

int main () {

    // 1st pattern pyramid
    int n;
    cout << "enter a number";
    cin >> n;
    for ( int row = 1 ; row <= n ; row++){
        for ( int col = 1; col <= (n-row); col++) {
            cout << " ";
        }
        for ( int col = 1; col <= ( 2 * row - 1) ; col++) {
            cout << "*" << " ";
        }

        cout << endl;
    }

    // 2nd pattern palindrome number pattern 

    int m ; 
    cout << "enter a number";
    cin >> m;

    for ( int row = 1; row <= m ; row++) {
        for ( int col = 1; col <= (n-m) ; col++) {
            cout << " ";
        }
        for ( int col = 1; col <= row; col++) {
            cout << col << " "; 
        }
        for ( int col = row - 1 ; col >=1 ; col--) {
            cout << col << " ";
        }
        cout << endl;
    }
}