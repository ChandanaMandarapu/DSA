#include <iostream>

using namespace std;

int main()
{

    int arr1[3][4] = {4, 5, 2, 4, 2, 4, 5, 6, 7, 2, 4, 3};
    int arr2[3][4] = {1, 5, 2, 4, 2, 6, 5, 6, 7, 2, 5, 3};
    int ans[3][4];

    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
        {
            ans[row][col] = arr1[row][col] - arr2[row][col];
        }

    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
            cout << ans[row][col] << " ";
}