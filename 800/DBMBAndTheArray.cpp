// 2193A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    while (k--)
    {
        int n, s, x, total_sum = 0;
        cin >> n >> s >> x;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total_sum += a;
        }

        cout << (s >= total_sum && (s - total_sum) % x == 0 ? "YES\n" : "NO\n");
        }

    return 0;
}