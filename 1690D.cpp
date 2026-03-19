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
        int n, k;
        cin >> n >> k;
        string tiles;
        cin >> tiles;

        int l = 0;
        int r = 0;
        int b_count = 0;

        while (r < k) {
            if (tiles[r] == 'B') {
                b_count++;
            }
            r++;
        }

        int min_swaps = k - b_count;

        while (r < n) {
            if (tiles[l] == 'B') b_count--;   
            if (tiles[r] == 'B') b_count++;   
            l++;
            r++;
            min_swaps = min(min_swaps, k - b_count);
        }

        cout << min_swaps << "\n";
    }

    return 0;
}