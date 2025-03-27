#include <iostream>

using namespace std;

void printcol(int arr[][3], int row, int col)
{
    for (int j = 0; j < row; j++)
        for (int i = 0; i < col; i++)
            cout << arr[i][j] << " ";
}

int main()
{
    // creating and initialising a 2d array

    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // printing

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << arr[row][col] << " ";
    }

    // printing all the value in array col wise using funcn call

    // printcol(arr,4,3);

    // finding an element

    int x = 7;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == x)
            {
                cout << "yes";
                return 0;
            }
        }
    }

    cout << "No";
}