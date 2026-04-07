#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long needed = k * (y + 1) - 1;
        long long trades = (needed + (x - 1) - 1) / (x - 1);
        cout << trades + k << "\n";
    }
    return 0;
}