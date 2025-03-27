#include <iostream>
#include <vector>
using namespace std;

int main () {

    // creating 2D array

    vector<vector<int>>matrix(3,vector<int>(4,1));

    for(int i=0; i<3; i++);
    for(int j=0; j<4; j++);
    cout<<matrix[i][j] << " ";

    cout << "Rows " <<matrix.size();
    cout << endl;
    cout << "Cols " <<matrix[0].size();
    cout << endl;
}