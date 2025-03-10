#include <iostream>

using namespace std;

int main () {

    // inverted pyramid pattern
    int n;
    cout << "enter a number ";
    cin >> n;

    for( int row = n ; row >= 1; row-- ){
        for ( int col = 1 ; col <= n - row ; col++){
            cout << " ";
        }
        for ( int col = 1; col <= (2*row - 1 ); col ++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    int m;
    cout << "enter a number ";
    cin >> m;

    for( int row = n ; row >= 1; row-- ) {
        // print * 
        for ( int col = 1; col <= row; col++ ){
            cout << "* ";
        }
        for(int col =1; col <= 2*m - 2*row; col++){
            cout  << " ";
        }
        for ( int col = 1; col <= row; col++ ){
            cout << "* ";

            cout << endl;
        }
    }
    for( int row = 1 ; row <= m; row-- ) {
        // print * 
        for ( int col = 1; col <= row; col++ ){
            cout << "* ";
        }
        for(int col =1; col <= 2*m - 2*row; col++){
            cout  << " ";
        }
        for ( int col = 1; col <= row; col++ ){
            cout << "* ";

            cout << endl;
        }
    }
}