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
        int w, h;
        cin >> w >> h;

        int k1; cin >> k1;
        vector<int> low_hor(k1);
        for (int i = 0; i < k1; i++) cin >> low_hor[i];

        int k2; cin >> k2;
        vector<int> upper_hor(k2);
        for (int i = 0; i < k2; i++) cin >> upper_hor[i];

        int k3; cin >> k3;
        vector<int> first_ver(k3);
        for (int i = 0; i < k3; i++) cin >> first_ver[i];

        int k4; cin >> k4;
        vector<int> second_ver(k4);
        for (int i = 0; i < k4; i++) cin >> second_ver[i];

        int largest_low = low_hor.back()    - low_hor.front();
        int largest_up  = upper_hor.back()  - upper_hor.front();
        int largest_hor = max(largest_low, largest_up);

        int largest_first  = first_ver.back()  - first_ver.front();
        int largest_second = second_ver.back() - second_ver.front();
        int largest_ver    = max(largest_first, largest_second);

        cout << max((long long)largest_ver * w, (long long)largest_hor * h) << "\n";
    }

    return 0;
}