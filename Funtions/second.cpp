#include <iostream>

using namespace std;

int sum ( int m, int n){
    int ans = m+n;
    return ans;
}
int mult (int m, int n){
    int ans = m*n;
    return ans;
}

void hello (){
    cout << "hello everyone\n";
}
int main(){
    int a,b;
    cout << "enter 2 numbers ";
    cin >> a >> b;

    cout << sum(a,b);
    cout << endl;

    cout << mult(a,b);
    cout << endl;

    hello();
}