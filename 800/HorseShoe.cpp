// 228 A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        if (find(v.begin(), v.end(), n) == v.end())
        {
            v.push_back(n);
        }
    }
    cout << 4 - v.size();

    return 0;
}