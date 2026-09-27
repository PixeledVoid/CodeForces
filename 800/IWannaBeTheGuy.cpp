// 469 A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p, v;
    set<int> levels;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> v;
        levels.insert(v);
    }
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> v;
        levels.insert(v);
    }
    if (levels.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}