// 41A
// Rating: 800
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x, y;
    cin >> x;
    cin >> y;
    reverse(x.begin(), x.end());
    if (y == x)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}