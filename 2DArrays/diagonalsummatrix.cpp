#include <iostream>

using namespace std;

void printdiagonalsum(int matrix[][3], int row, int col)
{
    int first = 0;
    int second = 0;

    int i = 0;
    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }

    i = 0;
    int j = col - 1;

    while (j >= 0)
    {
        second += matrix[i][j];
        i++, j--;
    }

    cout << first << " " << second << " ";
}

int main()
{
    int matrix[3][3] = {1, 3, 4, 5, 6, 3, 5, 9};
    printdiagonalsum(matrix, 3, 3);
}