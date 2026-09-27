// 431A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d, res = 0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    for (char ch : s)
    {
        if (ch == '1')
        {
            res += a;
        }
        else if (ch == '2')
        {
            res += b;
        }
        else if (ch == '3')
        {
            res += c;
        }
        else
        {
            res += d;
        }
    }

    cout << res;
    return 0;
}
