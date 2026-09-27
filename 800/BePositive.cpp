// 2149A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> arr;
    int j, p = 1, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        if (j == 0)
        {
            arr.push_back(1);
            count++;
        }
        else
        {
            arr.push_back(j);
        }
    }
    for (int i : arr)
    {
        p *= i;
    }
    if (p <= 0)
    {
        cout << count + 2 << '\n';
    }
    else
    {
        cout << count << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        solve(k);
    }
    return 0;
}