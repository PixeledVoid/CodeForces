// 486A
// Rating: 800
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x;
    cin >> x;
    if (x % 2 == 0)
    {
        cout << x / 2 << '\n';
    }
    else
    {
        cout << -(x + 1) / 2 << '\n';
    }
}