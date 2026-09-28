// 421A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, t;
    cin >> n >> a >> b;
    int count[101] = {};
    for (int i = 0; i < a; i++)
    {
        cin >> t;
        count[t]++;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> t;
        count[t] += 2;
    }
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 1)
        {
            cout << 1 << " ";
        }
        else
            cout << 2 << " ";
    }
    return 0;
}