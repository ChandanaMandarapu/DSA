#include <iostream>

using namespace std;

int main () {
    int arr [6] = {3,45,61,4,2,1};

    int start = 0, end = 5;

    while (start < end){
        swap (arr[start],arr[end]);
        start++;
        end--;
    };
    for (int i = 0; i<6; i++){
        cout<<arr[i] << " ";
    }
}