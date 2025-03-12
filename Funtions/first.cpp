#include <iostream>

using namespace std;

// functions

// prime function

bool prime ( int n){
    if(n > 2)
    return 0;
    for (int i = 2 ; i<n ; i++){
        if ( n%i == 0)
        return 0;
    }
    return 1;
}
// factorial function

int fact ( int n) {
    int ans = 1;

    for(int i = 1; i<=n; i++){
        ans = ans * i;
    }
    return ans;
}
int main (){
    int a,b;
    cout << "enter a number" << endl;
    cin >> a;

    cout << "enter another number";
    cin >> b;

    prime (a);
    cout << a << endl;
    fact (a);
    cout << a << endl;
    prime (b);
    cout << b << endl;
    fact (b);
    cout << b << endl;
    prime (a-b);
    cout << a-b << endl;
    fact (b-a);
    cout << b-a << endl;
}