#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        string answer = "NO\n";
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] == a[i+1]){
                answer = "YES\n";
                break;
            }
        }
        cout << answer;
    }
    return 0;
}