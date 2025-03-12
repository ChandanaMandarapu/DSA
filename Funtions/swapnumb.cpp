#include <iostream>

using namespace std;
// swap is an inbuilt function in c++
void Swap ( int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
void Swap ( float &c, float &d){
    float e = c;
    c = d;
    d = e;
}

int main(){
    int a,b;
    cout << "enter 2 numberss";
    cin >> a >> b;
    Swap (a , b);
    cout << a << " " << b << " ";

    float f1,f2;
    f1 = 3.6;
    f2 = 8.9;
    Swap(f1,f2);
    cout << f1 << endl;
    cout << f2 << endl;
}