// 231A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c = 0;
    cin >> n;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            c++;
        }
    }
    cout << c << '\n';
    return 0;
}