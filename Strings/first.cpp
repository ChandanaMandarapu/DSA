#include<iostream>

using namespace std;

int main ()
{
    string s; 
    getline(cin,s);
    cout << s << endl;
    cout<<s.size();
    string s1 = "chandu";
    string s2 = "saru";
    string s3 = s1 + s2;
    cout << s3;
    s1.push_back('p');
    s2.pop_back();
    string s4 = "chandu is a \"good\" girl";
    cout << s4;
}