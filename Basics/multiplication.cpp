#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the table";
    cin>>n;

    for(int i = 1; i<=10; i++)
    {
        cout<<n<< "*"<< i<< "="<<n*i<<" "<<endl;
    }

    // another way of doing table program

    // for(int i = n; i<=10*n ; i=i+n)
    // {
    //     cout<<i<<endl;
    // }
}