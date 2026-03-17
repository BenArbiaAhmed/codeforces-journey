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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pair<int, int> current_range(a[0]-x, a[0]+x);
        int changes = 0;
        for (int i = 1; i < n; i++)
        {
            pair<int, int> new_range(a[i]-x, a[i]+x);
            int max_start = max(current_range.first, new_range.first);
            int min_end = min(current_range.second, new_range.second);
            if(min_end >= max_start){
                current_range = {max_start, min_end};
            }
            else{
                changes++;
                current_range = new_range;
            }
        }
        cout << changes << "\n";
    }
    return 0;
}