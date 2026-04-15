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
        string s;
        cin >> s;
        int moves = 0;
        int current_moves = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='('){
                current_moves++;
            }
            else{
                current_moves--;
            }
            if(current_moves<0){
                moves= max(moves, abs(current_moves));
            }
        }
        cout << moves << "\n";
    }
    return 0;
}