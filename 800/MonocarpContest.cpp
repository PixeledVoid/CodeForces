// 2260A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {

        int t, c;
        vector<int> tests;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> c;
            tests.push_back(c);
        }
        if (count(tests.begin(), tests.end(), 0) >= 2)
        {
            if ((tests[0] == 0) && (tests[t - 1] == 0))
            {
                cout << 0 << '\n';
            }
            else if ((tests[0] != 0) && (tests[t - 1] != 0))
            {
                cout << 2 << '\n';
            }
            else
                cout << 1 << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}