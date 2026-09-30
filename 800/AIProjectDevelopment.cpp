// 2233A
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
        int n, x, y, z;

        cin >> n >> x >> y >> z;

        int h1, h2 = 0;

        h1 = (n + x + y - 1) / (x + y);

        if (x * z >= n)
        {
            h2 = (n + x - 1) / x;
        }

        else

        {
            int r = n - x * z;
            h2 = z + (r + x + 10 * y - 1) / (x + 10 * y);
        }

        cout << (h1 < h2 ? h1 : h2) << '\n';
    }
    return 0;
}