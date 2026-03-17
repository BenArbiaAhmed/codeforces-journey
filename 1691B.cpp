#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    if (n == 1) {
        cout << -1 << "\n";
        return;
    }

    vector<int> res(n);
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }

        int group_size = j - i;
        if (group_size == 1) {
            cout << -1 << "\n";
            return;
        }
        for (int k = i; k < j; k++) {
            if (k == j - 1) {
                res[k] = i + 1;
            } else {
                res[k] = k + 2;
            }
        }
        i = j;
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}