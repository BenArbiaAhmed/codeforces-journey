#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        long long sum = 0;
        int negative_count = 0;
        int min_val = INT_MAX;
        bool has_zero = false;

        for (int i = 0; i < n * m; i++) {
            int a;
            cin >> a;
            
            if (a < 0) {
                negative_count++;
            }
            if (a == 0) {
                has_zero = true;
            }
            int abs_a = abs(a);
            sum += abs_a;
            if (abs_a < min_val) {
                min_val = abs_a;
            }
        }
        if (negative_count % 2 == 0 || has_zero) {
            cout << sum << "\n";
        } else {
            cout << sum - 2LL * min_val << "\n";
        }
    }
    return 0;
}