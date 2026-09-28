// 1056A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

// Implementation 1:
//  int main()
//  {
//      ios_base::sync_with_stdio(false);
//      cin.tie(nullptr);

//     int count[101] = {};
//     int n, k, t, total;
//     cin >> n;
//     total = n;
//     while (n--)
//     {
//         cin >> k;
//         for (int i = 0; i < k; i++)
//         {
//             cin >> t;
//             count[t]++;
//         }
//     }
//     string s = "";
//     for (int i = 1; i < 101; i++)
//     {
//         if (count[i] == total)
//         {
//             s += to_string(i) + " ";
//         }
//         }
//     cout << s;
//     return 0;
// }

// Implementation 2
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> stops(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int l;
            cin >> l;
            stops[i].push_back(l);
        }
    }
    int shortest = 0;
    for (int i = 0; i < n; i++)
    {
        if (stops[i].size() < stops[shortest].size())
        {
            shortest = i;
        }
    }
    for (int line : stops[shortest])
    {
        bool exists = true;
        for (int i = 0; i < n; i++)
        {
            if (find(stops[i].begin(), stops[i].end(), line) == stops[i].end())
            {
                exists = false;
                break;
            }
        }
        if (exists)
        {
            cout << line << " ";
        }
    }
    return 0;
}