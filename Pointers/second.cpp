#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // printing adress of elements
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << arr[0] << endl;
    cout << ptr << endl;

    // printing address of second elt or 1 index
    cout << arr + 1 << endl;
    cout << arr[1] << endl;

    // printing the value

    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *ptr << endl;

    // printing all addresses

    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << endl;
        // print alll the values
        cout << *(arr + i) << endl;
    }

    
}