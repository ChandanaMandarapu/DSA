#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(43);
    vnew.push_back(42);
    vnew.push_back(41);
    vnew.pop_back();
    cout << "size of vnew " << vnew.size() << endl;

    // removing element from middle
    // erasing the value in index 1
    vnew.erase(vnew.begin() + 1);

    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }

    // inserting a value
    vnew.insert(vnew.begin() + 1, 56);
    cout << endl;
    vnew[1] = 99; // updating inserted value

    // clearing everything
    vnew.clear();

    vector<int> num;

    num.push_back(8);
    num.push_back(9);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);

    // getting first and last values for vector
    cout << num[0] << endl;
    cout << num.front() << endl;
    cout << num.back() << endl;

    // copy value of 1 vector to another

    vector<int> a;
    a = num;
    cout << a.size();

    for (auto it = num.begin(); it != num.end(); it++)
    {

        cout << *it << " ";
    }

    cout << endl;
    for (auto i : num)
        cout << i << " ";
}