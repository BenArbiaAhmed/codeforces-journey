#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
        int a, b;
        cin >> a >> b;
        int min_ops = INT_MAX;
        for (int i = 0; i < 31; i++)
        {
            int ops = i;
            int new_b = b + i;
            if(new_b==1){
                continue;
            }
            int a_copy = a;
            while (a_copy>0)
            {
                a_copy = a_copy / new_b;
                ops++;
            }
            min_ops=min(ops, min_ops);
        }
        cout << min_ops << "\n";
	}
	return 0;
}
