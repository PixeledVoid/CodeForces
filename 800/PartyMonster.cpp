// 2227B
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> k;
        cin >> s;
        int b = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                b++;
            }
        }
        if (b == k / 2 && k % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}