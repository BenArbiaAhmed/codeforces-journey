#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Day {
    int friends;
    int id;
};

// Helper to get top 3 days for an activity
vector<Day> get_top3(int n, vector<int>& arr) {
    vector<Day> days(n);
    for (int i = 0; i < n; i++) days[i] = {arr[i], i};
    sort(days.begin(), days.end(), [](Day a, Day b) {
        return a.friends > b.friends;
    });
    return {days[0], days[1], days[2]};
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;
    for (int& x : c) cin >> x;

    vector<Day> bestA = get_top3(n, a);
    vector<Day> bestB = get_top3(n, b);
    vector<Day> bestC = get_top3(n, c);

    long long max_friends = 0;

    // Brute force only the top 3 of each (3*3*3 = 27 combinations)
    for (auto& da : bestA) {
        for (auto& db : bestB) {
            for (auto& dc : bestC) {
                // Ensure days are distinct
                if (da.id != db.id && da.id != dc.id && db.id != dc.id) {
                    long long current = (long long)da.friends + db.friends + dc.friends;
                    max_friends = max(max_friends, current);
                }
            }
        }
    }
    cout << max_friends << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}