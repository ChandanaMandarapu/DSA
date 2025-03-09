#include <iostream>

using namespace std;

int main () {
    // power of a number 
    // int num,n,pow;
    // cout << "enter the number";
    // cin >> n;
    // cout << "enter the power ";
    // cin >> pow;
    // num = n;

    // for(int i = 1; i < pow ; i++){
    //     num = num * n;
    // }
    // cout << num;

    // sum of n natural numbers

    // int n;
    // cout << "enter a number";
    // cin >> n;
    // int sum = 0;

    // for (int i = 1; i<=n ; i++){
    //     sum = sum + i;
    // }
    // cout << sum;
    // another apporach

    // cout << (n*(n+1)/2);

    // factorial of a number 

    // int fact , n;

    // cout << "enter a number" ;
    // cin >> n;
    // fact = 1;

    // for (int i = 1 ; i <= n ; i++){
    //     fact = fact * i;
    // }
    // cout << fact;

    // prime number

    // int n;

    // cout << "enter a number";

    // if ( n < 2) {
    //     cout << "not a prime number";
    //     return 0;
    // }

    // else {
    //     for ( int i = 2; i < n ; i++) {
    //         if ( n % i == 0){
    //             cout << "not prime number";
    //             return 0;
    //         }
    //         cout << "prime number";
    //     }
    // }

    // fibanocci series

    int n; 

    cout << "enter a number : ";

    cin >> n;

    int currentValue, prevValue = 1, lastValue = 0;

    for ( int i = 1; i<= currentValue ; i++) {
        currentValue = prevValue + lastValue;
        cout << currentValue;
        lastValue = prevValue + currentValue;
        cout << lastValue;
    }
}