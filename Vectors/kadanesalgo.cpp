#include <iostream>
using namespace std;

int kadane(int arr[], int n) {
    int maxi = INT_MIN;

    int prefix = 0;

    for (int i = 0; i<n; i++){
        prefix += arr[i];
        maxi = max(maxi,prefix);
        if(prefix < 0)
        prefix = 0;
    }

    return maxi;
}

int main() {
    int arr[] = {4, -3, 7, 2, -5, 8, -2};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Find the size of array

    int maxSum = kadane(arr, n);
    cout << "Maximum subarray sum: " << maxSum << endl; // Print result

    return 0;
}
