#include <iostream>

using namespace std;

int main (){
    int a[5] = {2,34,5,3,4};
    int ans = INT_MIN;

    for(int i = 0; i<5; i++){
        if (a[i] > ans )
        ans = a[i];
    }
    cout << ans << endl;

    // MIn value

    ans = INT_MAX;
    
    for(int i = 0; i<5; i++){
        if (a[i] < ans )
        ans = a[i];

    } 
    cout << ans << endl;
    return 0;
}