#include <iostream>

using namespace std;

int main () {

    // hard patterns with space and nested loopss..
    // star patterns

    for ( int row = 1 ; row <=5 ; row++){
        for ( int col = 1; col <= 5-row; col++){
            cout << " ";
        }
        for ( int col = 1; col <= row; col++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // number patterns

    for ( int row = 1 ; row <=5 ; row++){
        for ( int col = 1; col <= 5-row; col++){
            cout << " ";
        }
        for ( int col = 1; col <= row; col++){
            cout << row << "";
        }
        cout << endl;
    }

    cout << endl;

    // number patterns

    for ( int row = 1 ; row <=5 ; row++){
        for ( int col = 1; col <= 5-row; col++){
            cout << " ";
        }
        for ( int col = 1; col <= row; col++){
            cout << col << "";
        }
        cout << endl;
    }

    cout << endl;

    // alphabet pattern - 1


    for (int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++) {
            cout << " ";
        }

        
        for ( char name = 'a'; name <= 'a' +row-1 ; name++) {
            cout << name;
        }
        cout << endl;
    }

    cout << endl;

    for (int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++) {
            cout << " ";
        }
        for ( int col = row; col>=1 ; col--) {
            cout << col << "";
        }
        cout << endl;
}
}