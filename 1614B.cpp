#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> visits(n);
        for (int i = 0; i < n; i++) {
            visits[i].first = i;
            cin >> visits[i].second;
        }
        sort(visits.begin(), visits.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second;
        });

        long long total_time = 0;
        for (int i = 0; i < n; i++) {
            int dist = (i / 2) + 1;
            total_time += 2LL * dist * visits[i].second;
        }

        for (int i = 0; i < n; i++) {
            int dist = (i / 2) + 1;
            visits[i].second = (i % 2 == 0) ? dist : -dist;
        }

        sort(visits.begin(), visits.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.first < b.first;
        });

        cout << total_time << "\n";
        cout << 0 << " ";
        for (int i = 0; i < n; i++) {
            cout << visits[i].second << " ";
        }
        cout << "\n";
    }
    return 0;
}