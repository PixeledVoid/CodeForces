// 2227A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin >> n;
    while (n--)
    {

        cin >> x >> y;
        if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}