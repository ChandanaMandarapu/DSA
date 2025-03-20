#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> a;

    a.push_back(8);
    a.push_back(82);
    a.push_back(18);
    a.push_back(58);
    a.push_back(68);

    // sort in increasing order

    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // sort(a.rbegin(), a.rend());
    // for (int i = 0; i < a.size(); i++)
    //     cout << a[i] << " ";

    // search in binary search

    cout << binary_search(a.begin(), a.end(), 58) << endl;

    cout << find(a.begin(), a.end(), 58);
}