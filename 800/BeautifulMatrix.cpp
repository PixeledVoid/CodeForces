// 263A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    int pos;

    for (int i = 1; i <= 25; i++)
    {
        cin >> x;

        if (x == 1)
        {
            pos = i;
            break;
        }
    }

    int r = (pos + 4) / 5;
    int c = (pos - 1) % 5 + 1;

    cout << abs(r - 3) + abs(c - 3);

    return 0;
}