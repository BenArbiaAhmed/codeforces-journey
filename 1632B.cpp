#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = 1;
        while(k<n){
            k*=2;
        }
        k/=2;
        for (int i = n-1; i >= k; i--)
        {
            cout << i << " ";
        }
        for (int i = 0; i < k; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}