#include <iostream>

using namespace std;

int main() {

    // operators - unary and binary
    // learnt about precision 
    // learnt about associativity

    cout << 13.7 / 2; // returns float type as float has precision
    cout << 12 / 5; // returns int type

    int a = 10;
    cout << a++ ;
    cout << endl << a;

    // comparision operators 

    int comp = 2>9<8==8!=0;
    cout << comp;

    // logical operators

    // largest among three

    int b = 7;
    int c = 3;

    if (a>b && a>c){
        cout << "yes";
    }
    else{cout << "no";}

    // vowel or constant 

    char name = 'a';

    if (name == 'a' || name == 'e' || name == 'i' ||name == 'o' || name == 'u')
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonant";
    }

    // bitwise operators

    // & operator

    int ans = 2&3;
    cout << ans;

    int an = 2|3;
    cout << an;

    int ax = 2^3;
    cout << ax;

    int lf = 2<<3;
    cout << lf;

    int rf = 8>>2;
    cout << rf;

    int comp = ~5;
    cout << comp;

}