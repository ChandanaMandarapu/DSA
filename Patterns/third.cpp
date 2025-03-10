#include <iostream>

using namespace std;

int main () {

    // star right angle pattern
    for ( int row = 1; row<=5 ; row++){
        for (int col = 1; col <= row ; col++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // number pattern of above star coloumn pattern

    for (int row = 1; row <=5 ; row++) {
        for (int col = 1; col <= row; col++){
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl; 

    // number pattern of ascending row

    for (int row = 1; row <=5 ; row++) {
        for (int col = 1; col <= row; col++){
            cout << row << " ";
        }
        cout << endl;
    }

    cout << endl;

    // reverse number pattern

    for (int row = 1; row <=5 ; row++) {
        for (int col = row ; col >= 1; col--){
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;

    // alphabet pattern
 
    for ( int row = 1;  row <=5; row ++) {
        char name = 'a' + row-1;
        for (int col = 1 ; col<=row; col++ ){
            cout << name << " ";
        }
        cout  << endl;
    }

    cout << endl;

    // star pattern agian

    for ( int row = 1; row <=5; row++) {
        for (int col = 1; col <= 5 - (row - 1); col++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;

    for ( int row = 1; row <=5; row++) {
        for (int col = 1; col <= 5 - (row - 1); col++){
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    for ( int row = 1; row <=5; row++) {
        for (int col = 5; col >= 6 - row; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}