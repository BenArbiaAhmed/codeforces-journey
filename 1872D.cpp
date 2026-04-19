#include <iostream>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) { a %= b; swap(a, b); }
    return a;
}

long long get_lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        // Calculate counts mathematically in O(1)
        long long common_multiples = n / get_lcm(x, y);
        long long x_count = (n / x) - common_multiples;
        long long y_count = (n / y) - common_multiples;

        long long sum_x = (x_count * (n + (n - x_count + 1))) / 2;
        long long sum_y = (y_count * (1 + y_count)) / 2;

        cout << sum_x - sum_y << "\n";
    }
    return 0;
}