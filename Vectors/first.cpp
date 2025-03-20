#include<iostream>
#include<vector>

using namespace std;

int main (){
    // declaring a vector
    vector<int>v;

    // initialsing a vector with value
    vector<int>v1{4,2};

    cout << "size of v " << v.size() << endl;
    cout << "size of v " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    cout << "size of v " << v.size() << endl;
    cout << "size of v " << v.capacity() << endl;

    // updating value at index 1
    v[1] = 5;

    cout << "size of v1 " << v1.size() << endl;
    cout << "size of v1 " << v1.capacity() << endl;

    // both size and capacity of initialised vector will be same 

    v1.push_back(9);

    // here size changes even capacity will be changed after we push back a element

    cout << "size of v " << v1.size() << endl;
    cout << "size of v " << v1.capacity() << endl;

    // deleting value from vector

    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(43);
    vnew.push_back(42);
    vnew.push_back(41);
    vnew.pop_back();
    cout << "size of vnew " << vnew.size() << endl;
    
    // removing element from middle
    // erasing the value in index 1
    vnew.erase(vnew.begin() + 1);

    for(int i = 0; i<vnew.size();i++)
    {
        cout << vnew[i] << " ";
    }

    // inserting a value
    vnew.insert(vnew.begin()+1,56);
    cout << endl;
    vnew[1] = 99; //updating inserted value
}