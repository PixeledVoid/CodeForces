// 703 A
// Rating: 800
// improvements that can be made: keep one counter and add if mishka wins and subtract if chris wins.
// no need to unnecessarily create solve() just do it inside main for a more compact code

#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int p1, p2;
    cin >> p1 >> p2;
    if (p1 > p2)
    {
        return 0;
    }
    else if (p2 > p1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, mishka = 0, chris = 0;
    cin >> n;
    while (n--)
    {
        k = solve();
        if (k == 0)
        {
            mishka++;
        }
        else if (k == 1)
        {
            chris++;
        }
        else
        {
            continue;
        }
    }
    if (mishka > chris)
    {
        cout << "Mishka";
    }
    else if (chris > mishka)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
    return 0;
}