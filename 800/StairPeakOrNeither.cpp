// 1950A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a < b) && (b < c))
        {
            cout << "STAIR\n";
        }
        else if ((a < b) && (b > c))
        {
            cout << "PEAK\n";
        }
        else
        {
            cout << "NONE\n";
        }
    }
    return 0;
}