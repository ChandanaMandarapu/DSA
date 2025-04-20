#include <iostream>

using namespace std;

int main(){
    char arr[5] = "1234";
    char *ptr = arr;

    // to print address of char type pointer

    cout << (void*)arr << endl;
    cout << (void*)ptr << endl;

    char name = 's';
    // cout << &name; wrong method
    cout << (void*)&name;

}