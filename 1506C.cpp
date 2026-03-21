// #include <iostream>
// #include <string>

// using namespace std;


// int computeXOR(int n) {
//     if (n < 0) return 0; 
//     int rem = n % 4;
//     if (rem == 0) return n;
//     if (rem == 1) return 1;
//     if (rem == 2) return n + 1;
//     return 0;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         string a, b;
//         cin >> a;
//         cin >> b;
//         int n = a.size();
//         int m = b.size();
//         int lcs = 0;
//         for (int len = 0; len < min(n, m); len++)
//         {
//             for (int i = 0; i+len <= n; i++)
//             {
//                 for (int j = 0; j+len <= m; j++)
//                 {
//                     string extract_a = a.substr(i, len);
// 					string extract_b = b.substr(j, len);
//                     if(extract_a == extract_b){
//                         lcs = max(lcs, len);
//                     }
//                 }
                
//             }
            
//         }
//         cout << n + m - 2*lcs << "\n";
        
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string A, B;
		cin >> A >> B;

		long long n = A.size(), m = B.size();
		long long lcs = 0; 

		for (long long len = 1; len <= min(n, m); len++)
		{
			for (long long i = 0; i + len <= n; i++)
			{
				for (long long j = 0; j + len <= m; j++)
				{
					string extract_A = A.substr(i, len);
					string extract_B = B.substr(j, len);

					if (extract_A == extract_B)
						lcs = max(lcs, len);
				}
			}
		}

		long long operations = n + m - 2 * lcs;
		cout << operations << "\n"; 
	}
	return 0;
}
