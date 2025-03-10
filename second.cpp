// patterns printings
// DATE - 10/03

#include <iostream>

using namespace std;

int main () {

    // nested loops
    // 1st pattern printing

    for( int j = 1; j<=5 ; j++){
        for(int i = 1; i<=5 ; i++){
            cout << "*" <<" ";
        }
        cout << endl;
    }

    // in form of rows and coloumns

    for( int rows = 1; rows<=5 ; rows++){
        for(int coloumns = 1; coloumns<=5 ; coloumns++){
            cout << "*" <<" ";
        }
        cout << endl;
    }
    // printing 10 numbers pattern
    for( int rows = 1; rows<=4 ; rows++){
        for(int coloumns = 1; coloumns<=4 ; coloumns++){
            cout << 10 <<" ";
        }
        cout << endl;
    }

    // number pattern 1

    for ( int row = 1; row <=5 ; row ++) {
        for (int col = 1; col<=5 ; col++){
            cout << row << " " ;
        }
        cout << endl;
    }
    // number pattern 2

    for ( int row = 1; row <=5 ; row ++) {
        for (int col = 1; col<=5 ; col++){
            cout << col << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // descending number pattern 3

    for (int row = 1; row <=5 ; row ++) {
        for (int col = 5 ; col>=1 ; col--){
            cout << col << " ";
        }
            cout << endl;
    }

    cout << endl;

    // number pattern of cubes 4

    for ( int row = 1; row<=5; row ++) {
        for (int col = 1; col <=5 ; col++) {
            cout << col * col * col << " ";
        } 
        cout << endl;
    }
    cout << endl;

    // alphabet pattern - 5

    for (int row = 1 ; row <= 5; row ++){
        char name = 'a' + row-1;
        for ( int col = 1; col<=5; col++) {
            cout << name << " ";
        }
        cout << endl;
}
cout << endl;
//  ascending aplhapet order - 6

    for (int row = 1; row <=5 ; row++){
        for(char col = 'a' ; col<= 'e'; col++){
            cout << col << " ";
        }

        cout << endl;
    }

    // number pattern - 7

    // int count = 1;

    // for (int row = 1; row <=5 ; row++)
    // {
    //     for(int col = 1; col<=5; col++){
    //         cout << count;
    //         count += 1;
    //     }
    //     cout << count << " ";
    // }
    // cout << endl;
    
    // another approaach

    for (int row = 1; row <=5 ; row++)
    {
        for(int col = 1; col<=5; col++){
            cout << (row-1)*5 + col << " ";
        }
    }
    cout << endl;
    
    // homeworkuu
    for (int row = 1; row <=5 ; row++){
        for(char col = 'f' ; col<= 'k'; col++){
            cout << col << " ";
        }

        cout << endl;
    }

    for( int j = 1; j<=5 ; j++){
        for(int i = 1; i<=5 ; i++){
            cout << "4" <<" ";
        }
        cout << endl;
    }
}