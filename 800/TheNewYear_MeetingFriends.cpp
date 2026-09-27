// 723A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> z(3);

    for (int &x : z)
        cin >> x;

    sort(z.begin(), z.end()); // or use built-in min() max() to calculate result and bypass sorting entirely

    cout << z[2] - z[0];
    return 0;
}