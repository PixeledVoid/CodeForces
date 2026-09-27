// 151 A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;
/*
n = no. of friends
k = no. of bottles
l = bottle volume in mL
c = no. of limes
d = no. of slices per lime
p = grams of salt
nl = least amount of drink per friend
np = amount of salt per glass

*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    int td, tl, tt, ts;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    td = k * l;
    tt = td / nl;
    tl = c * d;
    ts = p / np;
    cout << min({tt, tl, ts}) / n;
    return 0;
}