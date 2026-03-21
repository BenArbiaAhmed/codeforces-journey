#include <iostream>
using namespace std;


int computeXOR(int n) {
    if (n < 0) return 0; 
    int rem = n % 4;
    if (rem == 0) return n;
    if (rem == 1) return 1;
    if (rem == 2) return n + 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int curr_xor = computeXOR(a - 1);

        if (curr_xor == b) {
            cout << a << "\n";
        } 
        else if ((curr_xor ^ b) == a) {
            cout << a + 2 << "\n";
        } 
        else {
            cout << a + 1 << "\n";
        }
    }
    return 0;
}