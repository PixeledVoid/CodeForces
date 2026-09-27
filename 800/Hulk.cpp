// 705A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string res, l = "I love that", h = "I hate that", l1 = "I love it", h1 = "I hate it";
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            res += h + " ";
        }
        else
        {
            res += l + " ";
        }
    }
    if (n % 2 == 0)
    {
        res += l1;
    }
    else
    {
        res += h1;
    }
    cout << res;
    return 0;
}