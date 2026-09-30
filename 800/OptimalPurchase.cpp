// 2230A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    while (k--)
    {
        long long n, a, b;
        cin >> n >> a >> b;

        long long p1 = n * a;
        long long p2 = ((n + 2) / 3) * b;
        long long p3 = (n / 3) * b + (n % 3) * a;

        cout << min({p1, p2, p3}) << '\n';
    }

    return 0;
}