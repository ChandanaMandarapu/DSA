#include <iostream>

using namespace std;

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1;
    int sum = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
            total += arr[i][j];

        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }

    cout << index << "";
}
int main()
{
    int arr[3][4] = {1, 3, 4, 5, 3, 2, 5, 6, 2, 59, 4};
    // print rowindex with max sum
    printrowmax(arr, 3, 4);
}