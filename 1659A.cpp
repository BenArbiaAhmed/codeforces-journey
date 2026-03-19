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
        int n, r, b;
        cin >> n >> r >> b;
        string result = "";
        if(r%(b+1)==0){
            for (int i = 0; i < b+1; i++)
            {
                result += string(r/(b+1), 'R');
                result += 'B';
            }
            result.pop_back();
        }
        else{
            int long_seg = (r / (b+1)) + 1;
            int short_seg = long_seg - 1;
            while (r%(b+1)!=0)
            {
                result+= string(long_seg, 'R');
                result+= 'B';
                b--;
                r-=long_seg;
            }
            while (r> 0){
                result+= string(short_seg, 'R');
                result+= 'B';
                r-=short_seg;
            }
            result.pop_back();
        }
        cout << result << "\n";
    }
    return 0;
}